#include<stdio.h>
void main()
{
    char a;
    int i;
    printf("enter alphabitical chracter: ");
    scanf("%c",&a);

    char *ptr=&a;
    
   while (*ptr)
   {
     if (*ptr>='a' && *ptr<='z'){
        *ptr=*ptr-32;
        printf("after conversion:%c",*ptr);
        }
     else if (*ptr>='A' && *ptr<='Z'){
        *ptr=*ptr+32;
        printf("after conversion:%c",*ptr);
     }
    // else
    // printf("\nnot valid chractr");

    ptr++;
     
   }
   
   
    
}