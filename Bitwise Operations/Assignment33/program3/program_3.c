/* 3. Write a program which accept one number from user and toggle 7th bit of
that number. Return modified number.
Input : 137
Output : 201  */



#include<stdio.h>
typedef int UINT;

UINT ToggleBit(UINT iNo)
{
    int iMask=0x00000040;
    int iResult=0;
    int iTemp=0;
    
    if(iNo<0)
    {
        iNo=-iNo;
    }
    
    iResult=iNo ^ iMask;
   
    return iResult;
}

int main()
{
    int iNo=0;
    UINT iRet=0;
    printf("enter the nnumber:");
    scanf("%d",&iNo);
    
    iRet=ToggleBit(iNo);
    printf("%d",iRet);
    
    return 0;
}