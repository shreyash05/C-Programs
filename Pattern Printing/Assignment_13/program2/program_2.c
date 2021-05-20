/* 2. Accept number from user and display below pattern.
Input : 5
Output : 5 # 4 # 3 # 2 # 1 #
Program Layout :  */



#include<stdio.h>
void Pattern(int iNo)
{
    int i=0;
    if(iNo==0)
    {
        return;
    }
    
   if(iNo<0)
    {
        iNo = -iNo;
        
    }
    
    for(i=iNo;i>=1;i--)
    {
        printf("%d # ",i);
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