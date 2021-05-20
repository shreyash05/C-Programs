/* 3.Write a recursive program which display below pattern.
Input : 5
Output : 5 4 3 2 1   */
#include<stdio.h>
int DisplayR(int no)
{  
    
    if(no != 0)
    {
    printf(" %d ",no);
    no--;
    DisplayR(no);
    }
}

int main()
{
    int no=0;
    printf("Enter the number:");
    scanf("%d",&no);
    DisplayR(no);
    
    return 0;
}