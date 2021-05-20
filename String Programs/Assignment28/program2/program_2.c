/* 2.Write a program which accept string from user and convert it into
upper case.

Input : “Marvellous Multi OS”

Output : MARVELLOUS MULTI OS  */




#include<stdio.h>

void Upper(char *str)
{
    while(*str!=0)
    {
        if(*str>='a' && *str<='z')
        {
            *str=*str-32;
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
   
    
    printf("Enter the string:");
    scanf("%[^'\n']s",arr);
    
    Upper(arr);
     printf(" modified string is:%s",arr);
    return 0;
    
}