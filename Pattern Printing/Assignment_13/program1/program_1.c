/* 1. Accept number from user and display below pattern.
Input : 5
Output : A B C D E
Program Layout :  */




#include<stdio.h>
void Pattern(int iNo)
{   
    int iAlpha=0;
    int i=0;
    if(iNo==0)
    {
        return;
    }
    
   else if(iNo<0)
    {
        iNo = -iNo;
        
    }
    
    for(i=0;i<iNo;i++)
    {
        iAlpha=65+i;
        printf(" %c ",iAlpha);
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