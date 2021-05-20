/* 1.Write a program which accept one number and position from user and
check whether bit at that position is on or off. If bit is one return TURE
otherwise return FALSE.
Input : 10 2
Output : TRUE  */



#include<stdio.h>
typedef int BOOL;
#define TRUE 1
#define FALSE 0
BOOL ChkBit(int iNo, int iPos)
{
    int iMask=0x00000001;
    int iResult=0;
    if(iNo<0)
    {
        iNo= -iNo;
    }
    
    iMask=iMask<<(iPos-1);
    iResult=iNo&iMask;
    
    if(iResult==iMask)
    {
        return TRUE;
    }
    
    else if(iResult!= iMask)
    {
        return FALSE;
    }
}

int main()
{
    int iNo=0;
    int iPos=0;
    BOOL bRet=FALSE;
    
    printf("Enter the number:");
    scanf("%d",&iNo);
    
    printf("Enter the position:");
    scanf("%d",&iPos);
    
    bRet=ChkBit(iNo,iPos);
    
    if(bRet==TRUE)
    {
        printf("position is on");
    }
    
    else
    {
        printf("position is off");
    }
    
    return 0;
}
