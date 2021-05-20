/* 4. Accept Character from user and check whether it is small case or
not (a-z).
Input : g
Output : TRUE
Input : D
Output : FALSE */

#include<stdio.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL CheckAlpha(char cValue)
{
    if((cValue >='a') && (cValue <='z' ))             
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
  char iCharacter=' \0 ';
    printf("enter character:");
    scanf("%c",&iCharacter);

bRet=CheckAlpha(iCharacter);
if(bRet==TRUE)
{
    printf("character is small case");
}
else 
{
    printf("character is not a small case");
}
    return 0;
}
