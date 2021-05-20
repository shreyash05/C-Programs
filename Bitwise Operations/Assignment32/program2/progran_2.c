/* 2. Write a program which checks whether 5th & 18th bit is On or OFF.  */
#include<stdio.h>
typedef int BOOL;
#define TRUE 1
#define FALSE 0
BOOL CheckBit(int iNo)
{
    int iMask=0x00024000;
    int iRelt=0;
    
    if(iNo<0)
    {
        iNo = -iNo;
    }
    iRelt=iNo & iMask;
    if(iRelt==iMask)
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
    
    if(bRet=TRUE)
    {
        printf("15th & 18th bit is ON");
    }
    
    else
    {
        printf("5th & 18th bit is OFF");
    }
}
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
    
    if(bRet=TRUE)
    {
        printf("15th & 18th bit is ON");
    }
    
    else
    {
        printf("5th & 18th bit is OFF");
    }
}