// 1.Write a program which checks whether 15th bit is On or OFF.
#include<stdio.h>
#define TRUE 1
#define FALSE 0

typedef int BOOL;
BOOL CheckBit(int iNo)
{
    int iMask=0X00004000;
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
    
    printf("Enter number\n");
    scanf("%d",&iNo);
    
    bRet=CheckBit(iNo);
    
    if(bRet==TRUE)
    {
        printf("15th bit is on\n");
    }
    
    else
    {
        printf("15th bit is off\n");
    }
    
    return 0;
}