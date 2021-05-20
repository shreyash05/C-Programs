/* 2. Write a recursive program which display below pattern.
Output : 1 2 3 4 5  */
#include<stdio.h>
int DisplayR()
{   static int i=1;
    if(i!=6)
    {
    printf(" %d ",i);
    i++;
    
    DisplayR();
    }
}

int main()
{
    DisplayR();
    
    return 0;
}
