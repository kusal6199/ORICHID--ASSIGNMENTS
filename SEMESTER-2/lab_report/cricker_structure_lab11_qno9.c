#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_PLAYERS 3

struct player {
    char name[50];
    int runs;
    int wickets;
};

int main() {
	int i,j;
    struct player players[MAX_PLAYERS];
    struct player *ptr_players = players;  
    	printf("Title:Structure of 25 Cricket player \n");
	printf("Name: Swikriti Dhakal\n");
    
    for ( i = 0; i < MAX_PLAYERS; i++) {
        printf("Enter the name of player %d: ", i+1);
        scanf("%s", (ptr_players + i)->name);
        printf("Enter the runs scored by player %d: ", i+1);
        scanf("%d", &(ptr_players + i)->runs);
        printf("Enter the wickets taken by player %d: ", i+1);
        scanf("%d", &(ptr_players + i)->wickets);
    }
    struct player temp;
    for ( i = 0; i < MAX_PLAYERS-1; i++) {
        for ( j = i+1; j < MAX_PLAYERS; j++) {
            if ((ptr_players + j)->wickets > (ptr_players + i)->wickets) {
                temp = *(ptr_players + i);
                *(ptr_players + i) = *(ptr_players + j);
                *(ptr_players + j) = temp;
            }
        }
    }

    printf("\nList of players sorted by wickets taken:\n");
    for ( i = 0; i < MAX_PLAYERS; i++) {
        printf("Player %d\n", i+1);
        printf("Name: %s\n", (ptr_players + i)->name);
        printf("Runs: %d\n", (ptr_players + i)->runs);
        printf("Wickets: %d\n", (ptr_players + i)->wickets);
    }

    return 0;
}
