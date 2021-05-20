/* 2. Accept Character from user and check whether it is capital or not
(A-Z).
Input : F
Output : TRUE
Input : d
Output : FALSE  */

#include<stdio.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL CheckAlpha(char cValue)
{
    if((cValue >= 'A') && (cValue <= 'Z'))             //((cValue >= 65) && (cValue <= 90))
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }

}



int main()
{
    BOOL bRet=FALSE;
  char cCharacter=' \0 ';
    printf("enter character:");
    scanf("%c",&cCharacter);

bRet=CheckAlpha(cCharacter);
if(bRet==TRUE)
{
    printf("character is capital");
}
else 
{
    printf("character is not capital");
}
    return 0;
}
