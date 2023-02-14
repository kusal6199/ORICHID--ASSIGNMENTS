#include<stdio.h>
#include<string.h>
void main(){
    char a[50],i,b[47];
    int char_cout=0,word_count=0;
     printf("Prgram Name: display number of words and number of characters in an string\n");
    printf("Author: Kushal Kandel");
    printf("\nenter the string: ");
    // scanf("%s",&a);
    gets(a);

    for ( i =0; a[i]!='\0'; i++)
    {
       char_cout++;
       if (a[i]==' ' || a[i]=='\n' || a[i]=='\t')
       {
        word_count++;
       }
       
        
    }
    printf("the total chracter are %d",char_cout);
    printf("\nthe total word are %d",word_count+1);
    
    
}