/* 1. Design application for hotel. According to the management
team of hotel they are giving discount on total bill amount of
customer.
If bill bill amount is less than 500 then there is no discount , if
bill amount is less than 1500 and more than 500 they give 10%
discount.
And if the bill amount is more than 1500 then they give 15%
discount.
Our application should accept total bill amount and depends on
the discount policy we have to return the amount after applying
discount.
Input : 1200 Output : 1080
Input : 290 Output : 290
Input : 3700 Output : 3145
Function prototype :  */

#include<stdio.h>
int CalculateBill(int iAmount)
{
    int iDisc =0;
    
    if(iAmount<0)
    {
        iAmount = -iAmount;
    }
    
    if(iAmount<500)
    {
        iDisc=iAmount;
        return ;
    
    }
    
    else if(iAmount<=1500 && iAmount>=500)
    {
        
        iDisc=(iAmount)-((iAmount)*10/100);
    
    }
    
   else if(iAmount>1500)
    {
        
        iDisc=(iAmount)-((iAmount)*15/100);
    
    }
    
    return iDisc;
}




int main()
{
    int iValue=0;
    int iRet=0;
    
    printf("enter total bill amount :");
    scanf("%d",&iValue);
    
    iRet=CalculateBill(iValue);
    printf("%d",iRet);
    return 0;
}
