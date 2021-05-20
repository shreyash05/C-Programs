/* 2. Accept N numbers from user and return the smallest number.
Input : N : 6
Elements : 85 66 3 66 93 88
Output : 3
Program Layout :  */

#include<stdio.h>
#include<stdlib.h>
int Minimum(int Arr[], int iSize)

{
    int i=0;
    
    int iMax=0;
    iMax=Arr[0];
    
    for(i=0;i<iSize;i++) 
    {
        if(Arr[i]<iMax)
        {
            iMax=Arr[i];
            
        }
       
    }
    
    
    
    return iMax;
}



int main()
{
	int iCnt=0;
	int iValue=0;
	int iRet=0;
	int *ptr=NULL;

	 printf("enter thr number of elements:");
	 scanf("%d",&iValue);
	 if(iValue == 0)
    {
        printf("Error : Inavlid Input\n");
        return -1;
    }
    
    ptr = (int *)malloc(iValue * sizeof(int));
    printf("Enter element:\n");
	  for(iCnt=0;iCnt<iValue;iCnt++)
	  {
		scanf("%d",&ptr[iCnt]);
	  }
	  
	  
	  iRet = Minimum(ptr, iValue);
	  printf("Smallest number is:%d",iRet);
	  free(ptr);
	  return 0;
}