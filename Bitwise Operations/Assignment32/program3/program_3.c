/* 3. Write a program which checks whether 7th & 15th & 21st , 28th bit
is On or OFF.  */


#include<stdio.h>
typedef int BOOL;
#define TRUE 1
#define FALSE 0
BOOL CheckBit(int iNo)
{
    int iMask=0x08104040;
    int iRelt=0;
    
    if(iNo<0)
    {
        iNo = -iNo;
    }
    iRelt=iNo & iMask;
    if(iRelt == iMask)
    {
        return TRUE;
    }
    
    else
    {
        return FALSE;
    }
}

int main()
{
    int iNo=0;
    BOOL bRet=FALSE;
    printf("Enter the number:");
    scanf("%d",&iNo);
    
    bRet=CheckBit(iNo);
    
    if(bRet==TRUE)
    {
        printf("7th & 15th & 21st , 28th bit is ON");
    }
    
    else
    {
        printf("7th & 15th & 21st , 28th bit is OFF");
    }
    return 0;
}