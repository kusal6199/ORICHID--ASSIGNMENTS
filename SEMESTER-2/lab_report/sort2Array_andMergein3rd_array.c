#include<stdio.h>
void main()
{
	int n,m,i,j;
	printf("program title: to sort 2 array and merge them in next array");
	printf("\nauthor: Kushal Kandel");
	printf("\nenter the size of 1st and 2nd array resp:\n");
	scanf("%d%d",&n,&m);
	int a[n],b[m];


    printf("enter 1st array element: ");
    for ( i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
    }
    
    printf("enter 2nd array element: ");
    for ( i = 0; i < m; i++)
    {
        scanf("%d",&b[i]);
    }
    
    for ( i = 0; i < n-1; i++)
    {
        for ( j = 0; j < n-i-1; j++)
        {
           if (a[j]>a[j+1])
           {
            int temp = a[j];
	        a[j] = a[j + 1];
	        a[j + 1] = temp;
           }
           
        }
        
    }
    printf("Sorted 1st array: ");
	for (i = 0; i<n; i++)
	    printf("%d ", a[i]);


     for ( i = 0; i < m-1; i++)
    {
        for ( j = 0; j < m-i-1; j++)
        {
           if (b[j]>b[j+1])
           {
            int tempp = b[j];
	        b[j] = b[j + 1];
	        b[j + 1] = tempp;
           }
        }
    }

    printf("Sorted array: ");
	for (i = 0; i<m; i++)
	    printf("%d ", b[i]);


    int o=m+n;
    int c[o];
    for ( i = 0; i < n; i++)
    {
       c[i]=a[i];
    }
    for ( i = 0; i < m; i++)
    {
        c[i+n]=b[i];
    }
     for ( i = 0; i < o-1; i++)
    {
        for ( j = 0; j < o-i-1; j++)
        {
           if (c[j]>c[j+1])
           {
            int temppp = c[j];
	        c[j] = c[j + 1];
	        c[j + 1] = temppp;
           }
        }
    }
    printf("The merged sorted array: ");
    for(i = 0; i <o; i++)
    printf("%d ", c[i]);    
}
