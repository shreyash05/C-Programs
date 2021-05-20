/*2. Write a recursive program which accept number from user and return
largest digit
Input : 87983
Output : 9  */

#include<stdio.h>
int Max(int iValue)
{
	static int iDigit=0;
	static int iTemp=0;
	if(iValue !=0)
	{
		iDigit=iValue%10;
		if(iTemp<iDigit)
		{
			iTemp=iDigit;
		}
		iValue = iValue/10;
		
		Max(iValue);
		
	}
	return iTemp;
	
}

int main()
{
	int iNo=0;
	int iRet=0;
	
	printf("Enter the number:");
	scanf("%d",&iNo);
	
	iRet= Max(iNo);
	printf("%d",iRet);
	return 0;
}