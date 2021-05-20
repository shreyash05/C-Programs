/* 2. Write a recursive program which display below pattern.
Input : 5
Output : 1 2 3 4 5   */
#include<stdio.h>
int DisplayR(int no)
{  
    static int i=1;
    if(i != (no+1))
    {
    printf(" %d ",i);
    i++;
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