/* 1.Write a program which accept one number from user and off 7th bit of that
number if it is on. Return modified number.
Input : 79
Output : 15   */


#include<stdio.h>
typedef int UINT;

UINT OffBit(UINT iNo)
{
    int iMAsk=0x00000040;/* 1.Write a program which accept one number from user and off 7th bit of that
number if it is on. Return modified number.
Input : 79
Output : 15   */


#include<stdio.h>
typedef int UINT;

UINT OffBit(UINT iNo)
{
    int iMask=0x00000040;
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
        printf("7th bit is off");        
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
    int iResult=0;
    
    iResult=iNo ^ iMAsk;
    
   /* if(iResult==iNo)
    {
        return 0;
    }
    else
    {
        
        return iResult;
    }  */
    
    return iResult;
        
}

int main()
{
    int iNo=0;
    int iRet=0;
    
    printf("enter the nnumber:");
    scanf("%d",&iNo);
    
    iRet=OffBit(iNo);
    
    printf("modified number is%d:",iRet);
    return 0;
}