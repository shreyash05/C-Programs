/* 1. Accept Character from user and check whether it is alphabet or not
(A-Z a-z).
Input : F
Output : TRUE
Input : &
Output : FALSE  */

#include<stdio.h>
typedef int BOOL;
#define TRUE 1
#define FALSE 0
BOOL CheckCapital(char cValue)
{
    if((cValue >= 'A') && (cValue <= 'Z') || (cValue >= 'a') && (cValue <= 'z')) 
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
    char ch = ' \0 ';
    BOOL bRet = FALSE;
    printf("Enter character\n");
    scanf("%c",&ch);

    bRet = CheckCapital(ch);
    
    if(bRet == TRUE)
    {
        printf("Charcter is alphabet\n");
    }
    else
    {
        printf("Character is not an alphabet\n");
    }
    
    return 0;
}
