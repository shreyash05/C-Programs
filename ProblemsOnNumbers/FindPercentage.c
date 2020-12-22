/*5. Write a program which accept total marks & obtained marks from user and
calculate percentage.

Input : 1000 745
Output : 74.5%  */

#include<stdio.h>
float Percentage(float fNo1, float fNo2)
{
    
    float fAns=1.1;
    
    if(fNo1==0)
    {
    return -1;
    }

    fAns=((fNo2)*100)/(fNo1);
    
    return fAns;
}
int main()
{
float iValue1 = 0;
float iValue2 = 0;
float fRet = 0.0;

printf("Please enter total marks");
scanf("%f",&iValue1);
printf("Please enter obtained marks");
scanf("%f",&iValue2);
fRet = Percentage(iValue1, iValue2);
printf("%f",fRet);
return 0;
}
