/*4. Write a recursive program which accept number from user and return
smallest digit
Input : 87983
Output : 3  */

#include<stdio.h>
int Min(int iValue)
{
	static int iDigit=0;
	static int iTemp=9;
	if(iValue !=0)
	{
		iDigit=iValue%10;
		if(iTemp>iDigit)
		{
			iTemp=iDigit;
		}
		iValue = iValue/10;
		Min(iValue);
	}
	return iTemp;
	
}

int main()
{
	int iNo=0;
	int iRet=0;
	
	printf("Enter the number:");
	scanf("%d",&iNo);
	
	iRet= Min(iNo);
	printf("%d",iRet);
	return 0;
}