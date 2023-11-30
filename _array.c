// Program to delete the element in an array
#include<stdio.h>
int main()
{
    int n;
    printf("Enter the limit");
    scanf("%d",&n);
    int a[n];
    printf("Enter the elements");
    for(int i=0; i<n;i++)
    scanf("%d",&a[i]);
    int pos;
    printf("Enter the position to delete element");
    scanf("%d",&pos);
    for(int i=pos-1;i<n;i++)
    a[i]=a[i+1];
    n=n-1;
    printf("The element after deleting are \n");
    for(int i=0; i<n;i++)
    printf("%d\n",a[i]);
    return 0;

}