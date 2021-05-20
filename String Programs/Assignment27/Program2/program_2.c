/* 2. Write a program which accept string from user and count number of
small characters.

Input : “Marvellous”

Output : 9  */
#include<stdio.h>
int CountChar(char *str)
{
    int iCnt=0;
    while(*str!=0)
    {
        if(*str>='a' && *str<='z')
        {
            iCnt++;
        }
        
        str++;
    }
    
    return iCnt;
}

int main()
{
    char Arr[20];
    int iRet=0;
    
    printf("ente string:");
    scanf("%[^'\n']s",Arr);
    
    iRet=CountChar(Arr);
    printf("count number of small character is:%d",iRet);
    return 0;
}
