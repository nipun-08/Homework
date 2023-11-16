//Sum of prime numbers and non prime numbers of array elements
#include<stdio.h>
void main()
{
    int n;
    printf("Enter the size of the array");
    scanf("%d",&n);
    int a[n],i,sum=0,sum1=0;
    printf("Enter the array elements \n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        int j,flag=0;
        for(j=2;j<=a[i]/2;j++)
        {
            if(a[i]%j==0)
            {
                flag=1;
                break;
            }
        }
        if(flag==0)
        sum=sum+a[i];
        else
        sum1=sum1+a[i];
    }
    printf("Sum of the prime array elements are: %d\n",sum);
    printf("Sum of the non prime array elements are: %d\n",sum1);
}