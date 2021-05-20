/* 5. Write a program which accept one number from user and toggle contents
of first and last nibble of the number. Return modified number. (Nibble is a
group of four bits)  */




#include<stdio.h>
typedef int UINT;

UINT OffBit(UINT iNo, int iPos)
{
    int imask=0x00000001;
    int iTemp=0;
    int iResult=0;
    
    imask=imask<<(iPos-1);
    
    iResult=iNo ^ imask;
    
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