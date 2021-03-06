/* 2. Accept N numbers from user and return difference between frequency of
even number and odd numbers.
Input : N : 7
Elements : 85 66 3 80 93 88 90
Output : 1 (4 -3)
Program Layout :  */


#include<stdio.h>
#include<stdlib.h>


int CountEven(int Arr[], int iLength)
{   int i=0;
    int iEvenFreq=0;
    int iOddFreq=0;
    int iDif=0;

    for(i=0;i<iLength;i++)
    {
        if(Arr[i]%2==0)
        {
            iEvenFreq++;
        }
        
        else if(Arr[i]%2!=0)
        {
            iOddFreq++;
        }
        
    }
    
    iDif=iEvenFreq-iOddFreq;
    
    return iDif;
}



int main()
{
    int iValue=0;
    int *ptr = NULL;
    int iCnt=0;
    int iRet=0;
    
    
    printf("enter number of elements:");
    scanf("%d",&iValue);
    
    if(iValue == 0)
    {
        return 0;
    
    }
    
    ptr = (int *)malloc(iValue * sizeof(int));
    
    if(ptr == NULL)
    {
        printf("Unable to allocate memory");
        return -1;
    }
    
    printf("Enter elements:\n");
    
    for(iCnt=0;iCnt<iValue;iCnt++)
    {
       scanf("%d",&ptr[iCnt]);
       
    }
    
    iRet=CountEven(ptr,iValue);
    printf("Difference is: %d",iRet);
    
    return 0;
    
}