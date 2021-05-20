/* 2. Write a recursive program which accept number from user and return
summation of its digits.
Input : 879
Output : 24   */




#include<stdio.h>

int DisplayR(int iNo)
{
    static int iSum=0;
     int iDigit=0;
    
    if(iNo!=0)
    {
        iDigit=iNo%10;
       
        iSum=iSum+iDigit;

        iNo=iNo/10;
        
        DisplayR(iNo);
    }
        return(iSum);

}


int main()
{
    int iNo=0;
    int iRet=0;
    printf("Enter the number:");
    scanf("%d",&iNo);
    
   iRet= DisplayR(iNo);
   printf("%d",iRet);
    
    return 0;
}


