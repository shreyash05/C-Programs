/* 1.Write a program which accept string from user and copy the
contents of that string into another string. (Implement strcpy()
function)

Input : “Marvellous Multi OS”

Output : “Marvellous Multi OS” in another string  */


#include<stdio.h>
void StrCpyX(char *src, char *dest)
{
    if(*src==0)
    {
        return;
    }
    
    
    while(*src != '\0')
    {
        *dest = *src;
        src++;
        dest++;
    }

}

int main()
{
char arr[30] = "Marvellous Multi OS";
char brr[30];
StrCpyX(arr,brr);

printf("%s",brr); 
return 0;
}