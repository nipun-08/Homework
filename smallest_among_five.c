#include<stdio.h>
int main()
{
    int a,b,c,d,e;
    printf("Enter the value of 5 numbers \n");
    scanf("%d %d %d %d %d", &a,&b,&c,&d,&e);
    if(a<b && a<c && a<d && a<e)
    {
        printf("a is the smallest number");
    }
    else if(b<a && b<c && b<d && b<e)
    {
        printf("b is the smallest number");
    }
    else if(c<a && c<b && c<d && c<e)
    {
        printf("c is the smallest number");
    }
    else if(d<a && d<b && d<c && d<e)
    {
        printf("a is the smallest number");
    }
    else
    {
        printf("e is the smallest number");
    }


}