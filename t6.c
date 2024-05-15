#include<stdio.h>
int main()
{
    int a , b;
    printf("Enter two number :");
    scanf("%d%d",&a,&b);
    int c = a^b;
    if(c==0)
    {
        printf("Numbers is equal");
    }
    else{
        printf("Not equal");
    }
}