/* 5. Accept number from user and display below pattern.
Input : 8
Output : 2 4 6 8 10 12 14 16
Program Layout :    */




#include<stdio.h>
void Pattern(int iNo)
{
    int i=0;
    int iMult=1;
    if(iNo==0)
    {
        return;
    }
    
   if(iNo<0)
    {
        iNo = -iNo;
        
    }
    
    for(i=1;i<=iNo;i++)
    {
        iMult=2*i;
        printf(" %d ",iMult);
    }
}
int main()
{
int iValue = 0;
printf("Enter number of elements");
scanf("%d",&iValue);
Pattern(iValue);
return 0;
}