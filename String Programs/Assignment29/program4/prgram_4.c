/* 4.Write a program which accept string from user and accept one
character. Return index of last occurrence of that character.

Input : “Marvellous Multi OS”
M

Output : 11

Input : “Marvellous Multi OS”
W

Output : -1

Input : “Marvellous Multi OS”
e

Output : 4  */



#include<stdio.h>

int ChkChar(char *str, char cValue)
{
    int i=0;
    char cTemp='\0';
    int iPos=0;
   
    while(*str!='\0')
    {
        if(*str==cValue)
        {
            iPos=i;
           
        }
        str++;
        i++;
    }
   
   return iPos;
   
}


int main()
{
    char Arr[20];
    char cCh='\0';
    int bRet=0;
   
    printf("Enter the string: ");
    scanf("%[^'\n']s",Arr);
   
    printf("Enter the character:");
    scanf(" %c",&cCh);
   
    bRet=ChkChar(Arr,cCh);
    printf("Last occurance of character is:%d",bRet);
   
   
    return 0;
}

