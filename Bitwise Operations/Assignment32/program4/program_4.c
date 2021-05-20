/* 4. Write a program which checks whether 7th & 8th & 9th bit is On or
OFF.  */

#include<stdio.h>
#define TRUE 1
#define FALSE 0

typedef int BOOL;
BOOL CheckBit(int iNo)
{
    int iMask=0x000001c0;
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
        printf("7th & 8th & 9th bit is ON \n");
    }
    
    else
    {
        printf("7th & 8th & 9th bit is OFF\n");
    }
    
    return 0;
}