/* 2. Write a program which accept string from user and copy that
characters of that string into another string by removing all white
spaces.

Input : “Marvel lous Pyth on”
Output : “MarvellousPython”  */



#include<stdio.h>
void StrCpyX(char *src, char *dest)
{
    int iCnt=0;
    
    while(*src != 0)
    {
        if(*src == ' ')
        {
           // iCnt++;
            *src++;
           
        }
        
        *dest = *src;
        dest++;
         src++;
        
        
    }
    *dest='\0';
}

int main()
{
char arr[30] = "Marvel lous Pyth on";
char brr[30];

StrCpyX(arr,brr);

printf("%s",brr);

return 0;
}
