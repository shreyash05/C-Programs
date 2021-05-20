/* 3.Write a program which accept string from user and accept one
character. Return index of first occurrence of that character.

Input : “Marvellous Multi OS”
M

Output : 0
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
   
    while(*str!='\0')
    {
        if(*str==cValue)
        {
            break;
        }
        str++;
        i++;
    }
   
    if(*str==cValue)
    {
        return i;
    }
   
   else if(*str!=cValue)
    {
        return -1;
    }
   
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
    printf("%d",bRet);
   
   /* if(bRet==FALSE)
    {
        printf("character not found");
    }
    else if(bRet==TRUE)
    {
        printf("character found");
    }  */
   
    return 0;
}

