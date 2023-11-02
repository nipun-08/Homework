#include<stdio.h>
int main()
{
    float start, end, rate, unit;
    printf("Enter the starting reading \n");
    scanf("%f", &start);
    printf("Enter the ending reading \n");
    scanf("%f", &end);
    unit=end-start;
    if(unit>=200 && unit <=500){
        rate=3.5*unit;
    }
    else if(unit<100 && unit >=0){
        rate=1.5*unit;
    }
    else if(unit<200 && unit>=500){
        rate=2.5*unit;
    }
    else{
        printf("Invalid reading");
    }
    printf("Rate of units consumed is %.2f\n",rate);
}