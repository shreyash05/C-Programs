/* 5.Write a program which accept number from user and return difference between
summation of all its factors and non factors.
Input : 12
Output : -34 (16 - 50)
Input : 10
Output : -29 (8 - 37) */




#include<stdio.h>
void FactRev(int iNo)
{
    int iEvenSum=0;
    int iOddSum=0;
    int iDif=0; 
    int i=0;
   
    
    if(iNo<0)
    {
        iNo = -iNo ;
    }
    
    for(i=1;i<iNo;i++)
    {
        if(iNo%i==0)
        {
            iEvenSum=iEvenSum+i;
            
        }
        
        else if(iNo%i!=0)
        {
            iOddSum=iOddSum+i;
        } 
    }
    
    iDif=iEvenSum-iOddSum;
    printf(" %d ",iDif);
  
}
int main()
{
int iValue = 0;
printf("Enter number");
scanf("%d",&iValue);
FactRev(iValue);
return 0;
}