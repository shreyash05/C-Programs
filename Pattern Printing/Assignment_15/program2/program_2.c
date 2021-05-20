/*2. Accept number of rows and number of columns from user and display below
pattern.
Input : iRow = 4 iCol = 4
Output : 
A B C D
a b c d
A B C D
a b c d
Program Layout :    */ 




#include<stdio.h>
void Pattern(int iRow, int iCol)
{
    int i=0;
    int j=0;
    int iUpp=0;
    int iLow=0;
    
    for(i=0;i<=iRow;i++)       
    {
        for (j=0;j<=iCol;j++)
        {
            if(i%2==0 && j<=iRow)
            {
                
            iUpp=65+j;    
            printf("%c\t",iUpp);        
            }
            
            else 
            {
                iLow=97+j;
                printf("%c\t",iLow);
            }
            
            
        }
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