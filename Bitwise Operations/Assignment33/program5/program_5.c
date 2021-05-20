/* 5. Write a program which accept one number from user and on its first 4
bits. Return modified number.
Input : 73
Output : 79  */



#include<stdio.h>
typedef int UINT;

UINT ToggleBit(UINT iNo)
{
    int iMask=0x0000000F;
    int iResult=0;
    int iTemp=0;
    
    if(iNo<0)
    {
        iNo=-iNo;
    }
    
    iResult=iNo | iMask;
   
    return iResult;
}

int main()
{
    int iNo=0;
    UINT iRet=0;
    printf("enter the nnumber:");
    scanf("%d",&iNo);
    
    iRet=ToggleBit(iNo);
    printf(" %d ",iRet);
    
    return 0;
}