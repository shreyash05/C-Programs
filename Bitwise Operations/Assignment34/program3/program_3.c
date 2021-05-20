/* 3. Write a program which accept one number and position from user and on
that bit. Return modified number.
Input : 10 3
Output : 14  */




#include<stdio.h>
typedef int UINT;

UINT OffBit(UINT iNo, int iPos)
{
    int imask=0x00000001;
    int iTemp=0;
    int iResult=0;
    
    imask=imask<<(iPos-1);
    
    iResult=iNo | imask;
    
    return iResult;

}


int main()
{
    int iNo=0;
    int iPos=0;
    int iRet=0;
    
    printf("Enter the number:");
    scanf("%d",&iNo);
    printf("Enter the position:");
    scanf("%d",&iPos);
    iRet=OffBit(iNo,iPos);
    printf("mmodified number is:%d",iRet);
    
    return 0;
}