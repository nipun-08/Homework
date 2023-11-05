//Print a factorial of a number using while loop
#include<stdio.h>
int main()
{
    int f=1,i;
    scanf("%d",&i);
    while(i>=1)
    {
        printf("%d *",i);
        f=f*i;
        i--;
    }
    printf("\n%d is the factorial of given number",f);
    return 0;
}