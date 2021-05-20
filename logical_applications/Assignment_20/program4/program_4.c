/* 4. We have to design application for tourist company.
Tourist company provides cars on rent.
Depends on the running of car they apply rent.
If running is less than 100 kilometres then they charge 25
rupees per kilometre .
And if running is more than 100 kilometres then they apply 15
rupees per kilometre after 100 kilometres.
We have to accept number of kilometres from user and return
the estimated rent.
Input : 73 Output : 1825
Input : 132 Output : 2980
Input : 189 Output : 3835
Function prototype :  */



#include<stdio.h>
int TouristBill(int iKilometer)
{
int iRent =0;
    
    if(iKilometer<0)
    {
        iKilometer = -iKilometer;
    }
    
    if(iKilometer<100)
    {
        iRent=iKilometer*25;
    }
    
    else if(iKilometer>=100)
    {
        
        iRent=(100*25)+((iKilometer-100)*15);
    
    }
     
    return iRent;
}




int main()
{
    int iValue=0;
    int iRet=0;
    
    printf("enter total bill amount :");
    scanf("%d",&iValue);
    
    iRet=TouristBill(iValue);
    printf("%d",iRet);
    return 0;
}

