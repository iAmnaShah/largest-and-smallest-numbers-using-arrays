#include<stdio.h>
int main()
{
    int n[5],i;
    int small = n[0];
    int large = n[0];
    for(i=0; i<5; i++)
    {
        printf("Enter number:");
        scanf("%d",&n[i]);
    }
    for(i=0; i<5; i++)
    {
        if(large<n[i])
            large=n[i];
        if(small>n[i])
            small=n[i];
    }
    printf("largest number is %d\n",large);
    printf("smallest number is %d\n",small);
    return 0;
}


