#include<stdio.h>
int main()
{
    int a,b,c,d;
    printf("enter the no.");
    scanf("%d%d%d%d",&a,&b,&c,&d);
     int x = a+b;
     int y = c-d;
     if(y != 0)
     {
        printf("Ratio is : %f", x/y);
     }
     else
     
        printf("Error");
     
    return 0;
}