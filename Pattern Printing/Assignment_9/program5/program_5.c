/*5. Write a program which accept N and print first 5 multiples of N.
Input : 4
Output : 4 8 12 16 20  */




#include<stdio.h>

void MultipleDisplay(int iNo)
{
    int i=0;
    int iCnt=0;
    if(iNo<0)
    {
        iNo = -iNo;
        
    }
    iCnt=iNo*5;

    for(i=1;i<=iCnt;i++)
        {
            if(i % iNo == 0)
            {
                printf("%d\t",i);
            }
        }
}

int main()
{
int iValue = 0;
printf("Enter number");
scanf("%d",&iValue);
MultipleDisplay(iValue);
return 0;
}