// calculate the sum of first five numbers and their squares display their result
#include<stdio.h>
int main()
{
    int num,sum1=0,sum2=0;
    for(num=1;num<=5;num++)
    {
        printf("%d\n",num);
        int square=num*num;
        printf("The square of the number given above is %d \n",square);
        sum1+=square;
        sum2+=num;
    }
    printf("sum of 5 numbers is l%d \n",sum2);
    printf("sum of square of 5 numbers is %d \n", sum1);

    return 0;

    }