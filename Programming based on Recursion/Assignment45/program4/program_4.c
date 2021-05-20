/* 4.Write a recursive program which display below pattern.
Input : 6
Output : A B C D E F   */




#include<stdio.h>

void DisplayR(int iNo)
{
    static int i=65;
    if(i != (iNo+65))
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

