/* Input : iRow = 4 iCol = 4
Output : 1 2 3 4
2 3 4 5
3 4 5 6
4 5 6 7
Program Layout : */


#include<stdio.h>
void Pattern(int iRow, int iCol)
{
    int i=0;
    int j=0;
    int iTemp=1;
    int iCnt=0;
    iCnt=iCol;
    for(i=1;i<=iRow;i++)
    {
        for(j=iTemp;j<=iCnt;j++)
        {
            printf(" %d ",j);
            
        }
        
        iTemp=iTemp+1;
        iCnt=iCnt+1;
         printf("\n");
        
    }
       
}
int main()
{
int iValue1 = 0, iValue2 = 0;
printf("Enter number of rows and columns");
scanf("%d %d",&iValue1, &iValue2);
Pattern(iValue1, iValue2);
return 0;
}