/* 1. Write a recursive program which accept number from user and display below
pattern.
Input : 5
Output : 5 * 4 * 3 * 2 * 1 *   */




#include<stdio.h>

void DisplayR(int iNo)
{

    if(iNo!=0)
    {
        printf("%d * ",iNo);
        
        iNo--;
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


