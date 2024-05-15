#include<stdio.h>
int main()
{
    int n;
    printf("Enter the rupees :");
    scanf("%d",&n);
 printf("No. of 100 Rupees note is :%d \n", n/100);
 int A = n%100;
 printf("No. of 50 Rupees note is :%d \n", A/50);
 int B = A%50;
 printf("No. of 20 Rupees note is :%d\n ", B/20);
 int C = B%20;
 printf("No. of 10 Rupees note is :%d\n ", C/10);
 int D = C%10;
 printf("No. of 5 Rupees note is :%d\n ", D/5);
}