/* 1.Write a program which accept string from user and accept one
character. Check whether that character is present in string or not.

Input : “Marvellous Multi OS”
e

Output : TRUE

Input : “Marvellous Multi OS”
W

Output : FALSE  */




#include<stdio.h>
#define TRUE 1
#define FALSE 0

typedef int BOOL;
BOOL ChkChar(char *str, char cValue)
{
    int i=0;
    char cTemp='\0';
   
    while(*str!='\0')
    {
        if(*str==cValue)
        {
            break;
        }
        str++;
    }
   
    if(*str==cValue)
    {
        return TRUE;
    }
   
   else if(*str!=cValue)
    {
        return FALSE;
    }
   

}



int main()
{
    char Arr[20];
    char cCh='\0';
    BOOL bRet=FALSE;
   
    printf("Enter the string: ");
    scanf("%[^'\n']s",&Arr);
   
    printf("Enter the character:");
    scanf(" %c",&cCh);
   
    bRet=ChkChar(Arr,cCh);
   
    if(bRet==FALSE)
    {
        printf("character not found");
    }
    else if(bRet==TRUE)
    {
        printf("character found");
    }
   
    return 0;
}
