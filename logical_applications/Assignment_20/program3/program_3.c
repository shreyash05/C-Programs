/* 3. Design application for school management system.
As school is primary there are 4 standards from 1 to 4.
School fees of each standard is different.
For first standard fees are 8900, for second standard 12790, for
third standard 21000 and for fourth standard fees are 23450.
We have to accept standard from user and display the
corresponding fees.
Input : 2 Output : 12790
Input : 4 Output : 23450
Input : 6 Output : Wrong input
Function prototype :  */



#include<stdio.h>
int SchoolFees(int iStandard)
{

    
    if(iStandard==1)
    {
        printf("8900");
    }
    
   else if(iStandard==2)
    {
        printf("12790");
    }
    
    else if(iStandard==3)
    {
        printf("21000");
    }
    
   else if(iStandard==4)
    {
        printf("23450");
    }
    
    else
    {
        printf("wrong input");
    }
    
}




int main()
{
    int iValue=0;
    int iRet=0;
    
    printf("enter total bill amount :");
    scanf("%d",&iValue);
    
    SchoolFees(iValue);
    return 0;
}
