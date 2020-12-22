//4.Write a program which accept number from user and return summation of all its
//non factors.
Input : 12
Output : 50
Input : 10
Output : 37


#include<stdio.h>
int SumFact(int iNo)
{
    
    int i = 0;
    int iSum = 0 ;
 if(iNo == 0)       
    {
        return 0;
    }
    
    
    if(iNo < 0)             
    {
        iNo = -iNo;
    }
    
    for(i=1;i<=(iNo/2);i++)
    {
        if(iNo%i=0)
        {
            printf("%d\n",i);
            iSum = iSum+i ;
        } 
    }
    
    return iSum;
}

int main()
{
    int iValue = 0;
    int iRet = 0;
    
    printf("Enter number\n");
    scanf("%d",&iValue);

    iRet = SumFact(iValue);
    
    printf("%d",iRet);
    
    return 0;
}
