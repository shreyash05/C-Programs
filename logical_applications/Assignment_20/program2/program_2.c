/* 2. Design application for income tax department to calculate tax
amount. According to the income tax department there is no
income tax for the income less than 5 lakhs.
If income is in between 5 to 10 lakhs then there will be 10% tax.
If income is in between 10 to 20 lakhs then there will be 20%
tax.
And for more than 20 lakhs there will be 30% tax.
We have to accept gross income from user and return the tax
amount.
Input : 600000 Output : 10000 (0 + 10000)
Input : 450000 Output : 0
Input : 1200000 Output : 90000 (0 + 50000 + 40000)
Function prototype :  */




#include<stdio.h>
int IncomeTax(int iAmount)
{
    int iTax =0;
    
    if(iAmount<0)
    {
        iAmount = -iAmount;
    }
    
    if(iAmount<500000)
    {
        //iTax=iAmount;
        return 0;
    
    }
    
    else if(iAmount>=500000 && iAmount<1000000)
    {
        
        iTax=(iAmount)-((iAmount)*10/100);
    
    }
    
   else if(iAmount>=1000000 && iAmount<=2000000)
    {
        
        iTax=(iAmount)-((iAmount)*20/100);
    
    }
    
    else if(iAmount>2000000)
    {
        iTax=iAmount;
        iTax=(iAmount)-((iAmount)*30/100);
    
    }
    
    return iTax;
}




int main()
{
    int iValue=0;
    int iRet=0;
    
    printf("enter total bill amount :");
    scanf("%d",&iValue);
    
    iRet=IncomeTax(iValue);
    printf("%d",iRet);
    return 0;
}
