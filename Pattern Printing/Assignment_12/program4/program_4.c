/* 4. Write a program to find odd factorial of given number.
Input : 5
Output : 15 (5 * 3 * 1)
Input : -5
Output : 15 (5 * 3 * 1)
Input : 10
Output : 945 (9 * 7 * 5 * 3 * 1)  */



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
        if(i%2!=0)
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