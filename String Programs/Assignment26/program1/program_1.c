/* 3. Accept character from user. If it is capital then display all the
characters from the input characters till Z. If input character is small
then print all the characters in reverse order till a. In other cases
return directly.
Input : Q
Output : Q R S T U V W X Y Z
Input : m
Output : m l k j i h g f e d c b a
Input : 8
Output :  */

#include<stdio.h>

void DisplayASCII()
{
    int i=0;
     printf(" Dec \t");   
     printf(" Hex \t"); 
     printf(" char \n");
    for(i=0;i<=127;i++)
    {
     printf(" %d \t",i);   
     printf(" %x \t",i); 
     printf(" %c \n",i);
    }
}

int main()
{
    
DisplayASCII();

    return 0;
}
