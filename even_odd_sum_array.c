//Sum of even elements and sum of odd elements in array
#include<stdio.h>
void main()
{
    int n;
    printf("Enter the size of the array");
    scanf("%d",&n);
    int a[n],i,sum=0,sum1=0;
    printf("Enter the array elements");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        if(a[i]%2==0)
        sum=sum+a[i];
        else
        sum1=sum1+a[i];
    }
    printf("Sum of the even array elements is: %d\n",sum);
    printf("Sum of the odd array elements is: %d\n",sum1);


}