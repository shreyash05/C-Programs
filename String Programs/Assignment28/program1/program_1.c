#include<stdio.h>
void strlwrx(char *str)
{
     while(*str!=0)
    {
        if(*str>='A' && *str<='Z')
        {
            *str=*str+32;
        }
        else
        {
            *str;

        }
        str++;
    }
}

int main()
{
char arr[20];

printf("Enter string: ");
scanf("%[^’\n’]s",arr);

strlwrx(arr);

printf("Modified string is: %s",arr);

return 0;
}