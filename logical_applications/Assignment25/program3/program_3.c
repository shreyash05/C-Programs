/* 3. Accept Character from user and check whether it is digit or not
(0-9).
Input : 7
Output : TRUE
Input : d
Output : FALSE */

#include<stdio.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL CheckAlpha(char cValue)
{
    if((cValue >=0) && (cValue <=9 ))             
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
    scanf("%d",&iCharacter);

bRet=CheckAlpha(iCharacter);
if(bRet==TRUE)
{
    printf("character is digit");
}
else 
{
    printf("character is not a digit");
}
    return 0;
}
