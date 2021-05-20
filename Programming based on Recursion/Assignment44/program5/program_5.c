/* 5.Write a recursive program which display below pattern.
Output : a b c d e f */

#include<stdio.h>
void DisplayR()
{
    static int i=97;
    if(i!=103)
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
