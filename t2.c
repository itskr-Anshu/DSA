#include<stdio.h>
int main()
{
    int a = 3 , b = 4 , c ,d;
    c = a++ + ++b + ++a;
    d = a+++b;
    printf("%d\n",c);
    printf("%d",d);
}