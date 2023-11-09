#include <stdio.h>
#include <math.h>

int main(void)
{
    int num, digit, duplicate, count=0, sum=0;
    
    printf("Please Enter number to Check = ");
    scanf("%d", &num);//15
    
   //to count the numbert of digits
    duplicate=num;                       //declaring temp variable to num
    while (duplicate != 0)               //15 !=0 again 1 !=0
    {
        duplicate=duplicate/10;         //num=15/10=1  and 1/10=0
        count++;                        //0+1=1  1+1=2   AS THE DIGITS 
    }
    //to find power sum of digits 
    duplicate=num;
    while( duplicate != 0)              //15!=0 agian 1!=0
    {
        digit=duplicate%10;              // digit=15%10=5  agian digit=1%10=1 
        sum+=pow(digit,count);        //sum=0+5^2=25 again sum =25+1^2=26 is sum
        duplicate=duplicate/10;         //to remove the last digit num=15/10=1 agian 1/10=0 end
    }
    
    printf("Sum of entered number is = %d\n", sum);    //gives the sum of all digits
    
    if ( num == sum )//26 !=15
        printf("%d is an Armstrong number\n", num);  //false 
    else
        printf("%d is not an Armstrong number\n", num);               //true 
    
    return 0;

}

/*
#include <stdio.h>
#include <math.h>

int main(void)
{
    int Number, Temp, Reminder, Times =0, Sum = 0;
    
    printf("Please Enter number to Check = ");
    scanf("%d", &Number);
    
    //Helps to prevent altering the original value
    Temp = Number;
    while (Temp != 0)
    {
        Times = Times + 1;//gives the digits value of number
        Temp = Temp / 10; 
    }
    
    Temp = Number;
    while( Temp > 0)
    {
        Reminder = Temp %10;
        Sum = Sum + pow(Reminder, Times);
        Temp = Temp /10;
    }
    
    printf("Sum of entered number is = %d\n", Sum);
    
    if ( Number == Sum )
        printf("%d is Armstrong Number.\n", Number);
    else
        printf("%d is not.\n", Number);
    
    return 0;
}
*/