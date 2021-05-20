/* 4. Accept N numbers from user and display all such numbers which contains
3 digits in it.
Input : N : 6
Elements : 8225 665 3 76 953 858
Output : 665 953 858
Program Layout :  */



#include<stdio.h>
#include<stdlib.h>
void Digits(int Arr[], int iSize)

{
    int i=0;
    
    for(i=0;i<iSize;i++) 
    {
        if(Arr[i]>=100 && Arr[i]<=999)
        {
            printf(" %d ",Arr[i]);
           
        } 
    }

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
	  
	  
	  Digits(ptr, iValue);
	  free(ptr);
	  return 0;
}
