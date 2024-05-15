// WAP to enter a number and ckeck if it is odd then convrt into even number
#include<stdio.h>
int main()
{
    int n;
    printf("enter the no.");
    scanf("%d",&n);
    int x = n%2;
    if( x != 0)
    {
        n = n+1;
        printf("now it is good:%d", n);
    }
    return 0;
}