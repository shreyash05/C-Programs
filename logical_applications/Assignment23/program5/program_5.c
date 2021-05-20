/*  5. Accept N numbers from user and return product of all odd elements.
Input : N : 6
Elements : 15 66 3 70 10 88
Output : 45
Input : N : 6
Elements : 44 66 72 70 10 88
Output : 0
Program Layout :  */




#include<stdio.h>
#include<stdlib.h>
int FirstOcc (int Arr[], int iLength)
{
  int i = 0;
  int iProd=1;
  for(i=0;i<iLength;i++)
    {
        if (Arr[i]%2==1)
	       {
	            
	           iProd=iProd*Arr[i];
	           //printf(" %d ",Arr[i]);
	        }
	
        
    }
    return iProd;
}

int
main ()
{
  int iSize = 0, iRet = 0, iCnt = 0, iValue1 = 0, iValue2=0;
  int *p = NULL;

  printf ("Enter number of elements");
  scanf ("%d", &iSize);

    p = (int *) malloc (iSize * sizeof (int));

  if (p == NULL)
    {
      printf ("Unable to allocate memory");
      return -1;
    }

  for (iCnt = 0; iCnt < iSize; iCnt++)
    {
      printf ("%d Enter element : ", iCnt + 1);
      scanf ("%d", &p[iCnt]);
    }

    iRet=FirstOcc (p, iSize);
    printf("%d",iRet);
  
  free (p);

    return 0;
}


