/* 2. Write a program which accept one number from user and off 7th and 10th
bit of that number. Return modified number.
Input : 577
Output : 1  */




#include<stdio.h>
typedef int UINT;

UINT OffBit(UINT iNo)
{
    int iMask=0x00000240;
    int iResult=0;
    int iTemp=0;
    
    if(iNo<0)
    {
        iNo=-iNo;
    }
    
    iResult=iNo ^ iMask;
    
    iTemp = iNo & iMask;
    
   if(iTemp!=iMask)
    {
        printf("7th and 10th bit is off");        
    }
    else if(iTemp==iMask)
    {

        printf("modified number is %d",iResult);
        
    }  
    

}

int main()
{
    int iNo=0;

    printf("enter the nnumber:");
    scanf("%d",&iNo);
    
 OffBit(iNo);
    
    return 0;
}