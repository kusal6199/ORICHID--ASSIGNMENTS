#include<stdio.h>
void main(){
    char a[20],temp;
    int i,j;
     printf("Prgram Name: sorting string\n");
    printf("Author: Kushal Kandel");
     printf("\nenter the string\n:");
    scanf("%s",&a);
    int n;
    n=strlen(a);
    for ( i = 0; i < n; i++)
    {
        for(j = i+1; j < n; j++){
            if (a[i]>a[j])
            {
                temp = a[i];
				a[i] = a[j];
				a[j] = temp;
            }
            
        }

    }
    printf("The sorted string is : %s", a);
    
}