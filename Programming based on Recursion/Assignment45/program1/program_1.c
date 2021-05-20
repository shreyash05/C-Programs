/* 1. Write a recursive program which display below pattern.
Input : 5
Output : * * * * *   */
#include<stdio.h>
int DisplayR(int no)
{   
    if(no!=0)
    {
    printf(" * ");
    no--;
    DisplayR(no);
    }
}

int main()
{
    int no=0;
    printf("Enter number of star:");
    scanf("%d",&no);
    DisplayR(no);
    
    return 0;
}