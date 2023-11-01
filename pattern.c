/*programm to print pattern from nested loop
*
**   
***
****
*****
*/

#include<stdio.h>
int main()
{
    int i,a,row;
    printf("Enter the number rows you want to see \n ");
    scanf("%d",&row);


    for(i=1;i<=row;i++)
    {
        for(a=1;a<i+1;a++)
        {
        printf("*");
        }
        printf("\n");
        
    }
    return 0;
}