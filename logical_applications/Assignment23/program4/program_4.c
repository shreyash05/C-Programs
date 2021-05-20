/*  4. Accept N numbers from user and accept Range, Display all elements from
that range
Input : N : 6
Start: 60
End : 90
Elements : 85 66 3 76 93 88
Output : 66 76 88
Input : N : 6
Start: 30
End : 50
Elements : 85 66 3 76 93 88
Output :
Program Layout :  */




#include<stdio.h>
#include<stdlib.h>
int FirstOcc (int Arr[], int iLength, int iNo1, int iNo2)
{
  int i = 0;
  int j = 0;
  int iOcc=0;
  for(i=0;i<iLength;i++)
    {
        for (j=iNo1; j <iNo2; j++)
        {
            if (Arr[i]==j)
	        {
	            
	            iOcc=j;
	            printf(" %d ",iOcc);
	        }
	
	/*else
	{
	    return -1;
	}   */

        }
    }
    
}

int
main ()
{
  int iSize = 0, iRet = 0, iCnt = 0, iValue1 = 0, iValue2=0;
  int *p = NULL;

  printf ("Enter number of elements");
  scanf ("%d", &iSize);

  printf ("Enter the start point");
  scanf ("%d", &iValue1);
  printf ("Enter the end point");
  scanf ("%d", &iValue2);
  
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

    FirstOcc (p, iSize, iValue1,iValue2);
  
  free (p);

    return 0;
}


