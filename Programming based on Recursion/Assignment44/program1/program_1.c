/* 1. Write a recursive program which display below pattern.
Output : * * * * *  */
#include<stdio.h>
int DisplayR()
{   static int i=4;
    if(i!=0)
    {
    printf(" * ");
    i--;
    
    DisplayR();
    }
}

int main()
{
    DisplayR();
    
    return 0;
}
