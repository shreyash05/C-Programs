/* 5. Accept number of rows and number of columns from user and display below
pattern.
Input : iRow = 3 iCol = 4
Output :
1 2 3 4
5 6 7 8
9 10 11 12
Program Layout :  */

#include<stdio.h>


void Pattern(int iRow, int iCol)
{
    int iTotal=iRow*iCol;
	int i=0, j=0;
	int iCnt=iCol, iTemp=1;
	int iVal=1;

	for(i=1; i<=iRow; i++)
	{
		for(j=iTemp; j<=iCol; j++)
		{
			printf(" %d ",j);
			
		}
		iCol=iCol+iCnt;
		iTemp=iTemp+iCnt;
		
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