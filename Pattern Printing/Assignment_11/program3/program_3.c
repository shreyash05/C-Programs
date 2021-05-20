/* 3. Write a program which accept range from user and return addition of all numbers
in between that range. (Range should contains positive numbers only)
Input : 23 30
Output : 212
Input : 10 18
Output : 126
Input : -10 2
Output : Invalid range
Input : 90 18
Output : Invalid range  */



#include<stdio.h>
void RangeSum(int iStart , int iEnd)
{
    int iSum=0;
    int i=0; 
    
    
    
    for(i=iStart;i<=iEnd;i++)
    {
           if(iStart<0)
    {
        printf("invalid range");
        break;
    
    }
    if(iStart>iEnd)
    {
        printf("Invalid range");
        break;
    }
    else
    
    {
        iSum=iSum+i;
        printf("%d",i);
    }
    }

}
int main()
{
int iValue1 = 0, iValue2 = 0;
int iRet=0;
printf("Enter starting point");
scanf("%d",&iValue1);
printf("Enter ending point");
scanf("%d",&iValue2);
RangeSum(iValue1, iValue2);
return 0;
}
