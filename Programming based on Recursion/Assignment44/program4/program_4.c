/* 4.Write a recursive program which display below pattern.
Output : A B C D E F */

#include<stdio.h>
void DisplayR()
{
    static int i=65;
    if(i!=71)
    {
    printf(" %c ",i);
    i++;
    
    DisplayR();
        
    }
}
int main()
{
    DisplayR();
    
    return 0;
}
