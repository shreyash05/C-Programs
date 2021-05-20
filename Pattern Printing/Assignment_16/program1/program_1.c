/*1 2 3 4
  5 6 7 8
  9 1 2 3
  4 5 6 7
Program Layout*/

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
			if(j<=(iTotal/2)+1)
			{
			printf(" %d ",j);
			}
			
			else
			{
			    
			    printf(" %d ",iVal);
			    iVal=iVal+1;
			    
			}
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