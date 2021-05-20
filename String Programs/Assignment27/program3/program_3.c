/*3. Write a program which accept string from user and return
difference between frequency of small characters and frequency of
capital characters.

Input : “MarvellouS”

Output : 6 (8-2)  */

#include<stdio.h>

int Difference(char *str)
{   
    int iCapitalCnt=0;
    int iSmallCnt=0;
    int iDiff=0;
    
    while(*str!=0)
    {
        if((*str>='A')&&(*str<='Z'))
        {
            iCapitalCnt++;
        }
        
        else if((*str>='a')&&(*str<='z'))
        {
            iSmallCnt++;
        }
        str++;
    }
    
    iDiff=iSmallCnt-iCapitalCnt;
    return iDiff;

    
}

int main()
{ 
    char Arr[20];
    int iRet=0;
    
    printf("Enter the string:");
    scanf("%s",Arr);
    
    iRet=Difference(Arr);
    printf("difference is:%d",iRet);
    
    return 0;
}
