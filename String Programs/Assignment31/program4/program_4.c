/* 4. Write a program which accept string from user and copy that
characters of that string into another string by converting all capital
characters into small case.

Input : “Marvellous Python 2”

Output : “marvellous python 2”  */


#include<stdio.h>
void StrCpyX(char *src, char *dest)
{
    if(*src==0)
    {
        return;
    }
    
     while(*src != '\0')
    {
        if((*src >= 'A') && (*src<='Z'))
        {
            *src=*src+32;
            
        }
        *dest = *src;
        dest ++;
        src ++;
    }
*dest = '\0' ;

}

int main()
{
char arr[30] = "Marvellous Python 2";
char brr[30];
StrCpyX(arr,brr);

printf("%s",brr); 
return 0;
}