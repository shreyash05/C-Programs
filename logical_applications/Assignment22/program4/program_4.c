/* 4. Accept N numbers from user and return frequency of 11 form it.
Input : N : 6
Elements : 85 66 3 15 93 88
Output : 0
Input : N : 6
Elements : 85 11 3 15 11 111
Output : 2
Program Layout :  */


#include<stdio.h>
#include<stdlib.h>

int CountEven(int Arr[], int iLength)
{   int i=0;
    int iFreq=0;
  

    for(i=0;i<iLength;i++)
    {
        if(Arr[i]==11)
        {
            iFreq++;
        }
        
        
        
    }
    
    
    return iFreq;
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
    printf("Frequency of 11 is %d:",iRet);
    
    return 0;
    
}
