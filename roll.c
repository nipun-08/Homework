#include<stdio.h>
void main()
{
    int students;
    printf("Enter the number of students");
    scanf("%d",&students);
    int class[students];
    printf("Enter the roll number of the students");
    for(int i=0; i<students;i++)
    {
        scanf("%d",&class[i]);
        printf("%d\n",class[i]);

    }
   
    printf("The 5th student roll number is %d\n",class[4]);
    printf("The 8th student roll number is %d\n",class[7]);

}