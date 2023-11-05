#include<stdio.h>
int main()
{
    int num,rev=0,rem;
    printf("Enter the number \n");
    scanf("%d",&num);

    while(num !=0)
    {
        rem=num%10;//print last digit as first like if num is 12 then 12%10=2 again 1%10=1
        rev=rev*10+rem;//rev=0*10+2=2  then rev=2*10+1=21   the number is reversed 
        num=num/10;//num=12/10=1 go again up
        
    }
    printf("The reverse of number is %d\n",rev);
    return 0;
}