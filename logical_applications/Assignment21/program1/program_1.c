/* 1. Accept N numbers from user and return difference between summation
of even elements and summation of odd elements.
Input : N : 6
Elements : 85 66 3 80 93 88
Output : 53 (234 - 181)
Program Layout :  */



#include<stdio.h>
#include<stdlib.h>

int Difference(int Arr[], int iLength)
{
    int i=0;
    int iEvenSum=0;
    int iOddSum=0;
    int iDif=0;
    for(i=0;i<iLength;i++)
    {
        if(Arr[i]%2==0)
        {
        iEvenSum=iEvenSum+Arr[i];
        }
        
        else if(Arr[i]%2!=0)
        {
        iOddSum=iOddSum+Arr[i];
        }
        
        
    }
    
    iDif=iEvenSum-iOddSum;


    return iDif;
    
}




int main()
{
    int iValue=0;
    int iRet=0;
    int iCnt=0;
    int *ptr=NULL;
    
    printf("enter number of element:");
    scanf("%d",&iValue);
    ptr= (int*)malloc(sizeof(int)*iValue);
    
    if(ptr == NULL)
    {
        printf("Unable to allocate memory");
         return -1;
    }
     printf("Enter %d elements \n ",iValue);
    
    for(iCnt=0;iCnt<iValue;iCnt++)
    {
        printf("%d enter elements:",iCnt+1);
        scanf("%d",&ptr[iCnt]);
    }
    
    iRet=Difference(ptr,iValue);
   printf("Difference is %d:",iRet);

    return 0;
}
