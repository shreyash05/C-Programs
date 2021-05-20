/* 3.Write a program to find even factorial of given number.
Input : 5
Output : 8 (4 * 2)
Input : -5
Output : 8 (4 * 2)
Input : 10
Output : 3840 (10 * 8 * 6 * 4 * 2)  */




#include<stdio.h>
int Factorial(int iNo)
{
    int i=0;
 int iMult=1;
    
    if(iNo<0)
    {
        iNo = -iNo;
    }
for(i=1;i<=iNo;i++)
    {
        if(i%2==0)
        {
        iMult=iMult*i;
        }
    }
    return iMult;
}
int main()
{
int iValue = 0,iRet = 0;
printf("Enter Number");
scanf("%d",&iValue);
iRet = Factorial(iValue);
printf("Factotial of number is %d",iRet);
return 0;
}
