#include<stdio.h>
typedef int BOOL;
#define TRUE 1
#define FALSE 0

BOOL CheckSpecial(char cValue)
{
    if((cValue >= '!') && (cValue <= '*'))
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
    char ch = '\0';
    BOOL bRet = FALSE;
    printf("Enter character\n");
    scanf("%c",&ch);

    bRet = CheckSpecial(ch);
    
    if(bRet == TRUE)
    {
        printf("Special Charcter\n");
    }
    else
    {
        printf("Not a Special Character\n");
    }
    
    return 0;
}

