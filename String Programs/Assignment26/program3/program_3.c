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

void ExamTime(char cValue)
{
    int i=0;
    char cTemp=' \0';
    
    if(cValue>='A' && cValue<='Z')
    {
        
        printf("%c",cValue);
        for(i=cValue;i<90;i++)
        {
            cValue=cValue+1;
        printf(" %c ",cValue);
        }
    }
    
    if(cValue>='a' && cValue<='z')
    {
        
        printf("%c",cValue);
        while(cValue!=97)
        {
            cValue=cValue-1;
        printf(" %c ",cValue);
            
        }
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
