/* 3. Accept N numbers from user check whether that numbers contains 11 in
it or not.
Input : N : 6
Elements : 85 66 11 80 93 88
Output : 11 is present
Input : N : 6
Elements : 85 66 3 80 93 88
Output : 11 is absent
Program Layout :  */


#include<stdio.h>
#include<stdlib.h>

#define TRUE 1
#define FALSE 0
int CountEven(int Arr[], int iLength)
{   int i=0;
    int iEvenFreq=0;
    int iOddFreq=0;
    int iDif=0;

    for(i=0;i<iLength;i++)
    {
        if(Arr[i]==11)
        {
            return 1;
        }
        
        else if(Arr[i]!=11)
        {
            return 0;
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
    
    if(iRet==TRUE)
    {
    printf("11 is pesent");
    }
    
    else if(iRet==FALSE)
    {
    printf("11 is absent");
    }
    return 0;
    
}