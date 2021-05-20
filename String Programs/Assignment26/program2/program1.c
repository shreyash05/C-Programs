/* 2. Accept character from user. If character is small display its
corresponding capital character, and if it small then display its
corresponding capital. In other cases display as it is.
Input : Q
Output : q
Input : m
Output : M
Input : 4
Output : 4
Input : %
Output : % */

#include<stdio.h>

void ExamTime(char cValue)
{
    if(cValue>='A' && cValue<='Z')
    {
        printf("%c",cValue+32);
    }
    else if(cValue>='a' && cValue<='z')           
    {
        printf("%c",cValue-32);
    }
    
    
    
    else
    {
        printf("%c",cValue);
    }
}



int main()
{
    int iRet=0;
    char iCharacter=' \0 ';
    printf("enter character:");
    scanf("%c",&iCharacter);

ExamTime(iCharacter);

    return 0;
}
