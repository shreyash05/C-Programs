/* 3. Accept N numbers from user and display all such elements which are
even and divisible by 5.
Input : N : 6
Elements : 85 66 3 80 93 88
Output : 80
Program Layout :
#include<stdio.h>  */



#include<stdio.h>
#include<stdlib.h>

void Display(int Arr[], int iLength)
{
    int i=0;
    if(iLength<0)
    {
        printf("Invalide input");
    }
    for(i=0;i<iLength;i++)
    {
        if(Arr[i]%2==0 && Arr[i]%5==0 )
        {
        printf(" %d ",Arr[i]);
        }
        
    }
}    
int main()
{
    int iValue=0;
    int *ptr=NULL;
    int iCnt=0;
    printf("enter number of elements:");
    scanf("%d",&iValue);
    ptr=(int*) malloc(sizeof(int) * (iValue));
//printf("Elements: %d\n",&iValue);

    for(iCnt=0;iCnt<iValue;iCnt++)
    {
        printf("%d Eneter element:",iCnt+1);
        scanf("%d",&ptr[iCnt]);
        
    }
      
    Display(ptr, iValue);
    
    return 0;
}