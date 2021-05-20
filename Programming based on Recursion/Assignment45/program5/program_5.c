/* 5.Write a recursive program which display below pattern.
Input : 6
Output : a b c d e f   */




#include<stdio.h>

void DisplayR(int iNo)
{
    static int i=97;
    if(i != (iNo+97))
    {
        printf(" %c ",i);
        
        i++;
        DisplayR(iNo);
    }
    
}


int main()
{
    int iNo=0;
    printf("Enter the number:");
    scanf("%d",&iNo);
    
    DisplayR(iNo);
    
    return 0;
}

