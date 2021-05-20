/* 5. Write a program which returns difference between Even factorial and odd factorial
of given number.
Input : 5
Output : -7 (8 - 15)
Input : -5
Output : -7 (8 - 15)
Input : 10
Output : 2895 (3840 - 945)  */



#include<stdio.h>
int Factorial(int iNo)
{
    int i=0;
    int iEvenMult=1;
    int iOddMult=1;
    int iMult=0;
    
    if(iNo<0)
    {
        iNo = -iNo;
    }
    
    
for(i=1;i<=iNo;i++)
    {
        
        if(i%2==0)
        {
        iEvenMult=iEvenMult*i;
        
        }
     
         if(i%2!=0)
         {
            iOddMult=iOddMult*i; 
            
         }

    }    
        
        iMult=iEvenMult-iOddMult;
    
    return iMult;
}
int main()
{
int iValue = 0,iRet = 0;
printf("Enter Number");
scanf("%d",&iValue);
iRet = Factorial(iValue);
printf("Factotial difference is %d",iRet);
return 0;
}