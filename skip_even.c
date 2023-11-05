//Program to print 1-20 numbers by skipping the even number
#include<stdio.h>
int main()
{
    int i=1;
    while(i<=20)
    {
        if(i%2 !=0)
        {
            printf("%d\n",i);
            
        }
        i++;
    }
    return 0;
}