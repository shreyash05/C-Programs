/* 3. Accept number from user and display below pattern.
Input : 5
Output : 1 * 2 * 3 * 4 * 5 *
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
    
    for(i=1;i<=iNo;i++)
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