// file handeling
#include<stdio.h>
int main(){
    FILE *fp;
    fp=fopen("BCA.txt","w");
    if (fp == NULL) {
        printf("Error opening file!\n");
        return 1;
    }
    fprintf(fp,"welcome to BCA");
    printf("File created and written successfully.\n");
    printf("done");
}