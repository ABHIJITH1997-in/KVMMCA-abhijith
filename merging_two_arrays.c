#include<stdio.h>
int main()
{
    int n1,n2,a1[50],a2[50],m[100],i;

    printf("Enter the size of the first array: \n");
    scanf("%d",&n1);
    printf("Enter the elements of the first array: \n");
    for ( i = 0; i < n1; i++)
    {
       scanf("%d",&a1[i]);
    }

    printf("Enter the size of second array: \n");
    scanf("%d",&n2);
    printf("Enter the elements of the second array: \n");
    for ( i = 0; i < n2; i++)
    {
        scanf("%d",&a2[i]);
    }
    for ( i = 0; i < n1; i++)
    {
        m[i]=a1[i];
    }
    for (i= 0; i < n2; i++)
    {
        m[n1+i]=a2[i];
    }
    printf("merged array is: \n");
    for ( i = 0; i < n1+n2; i++)
    {
        printf("%d \n",m[i]);
    }
    return 0;
    
}