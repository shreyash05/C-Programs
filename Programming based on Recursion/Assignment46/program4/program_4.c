/*4. Write a recursive program which accept number from user and return its
factorial.
Input : 5
Output : 120  */
#include<stdio.h>
int Fact(int iNo)
{
      static int i=1;
static int ifact=1;
    
      if(i<=iNo)
	  {
		  ifact=i*ifact;
		  i++;
		  Fact(iNo);
	  }

    
return ifact;
}
int main()
{
int iValue = 0, iRet = 0;
printf("Enter number");
scanf("%d",&iValue);
iRet = Fact(iValue);
printf("%d",iRet);
return 0;
}