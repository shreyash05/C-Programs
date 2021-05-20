/* 5. Write a recursive program which accept number from user and return its
reverse number.
Input : 523
Output : 325  */


#include<stdio.h>
void Reverse(int iValue)
{
	static int iDigit=0;
	static int temp=0;
	if(iValue !=0)
	{
		iDigit=iValue%10;
		temp=iDigit;
		printf("%d",temp);
		iValue = iValue/10;
		
		Reverse(iValue);
	}
	
}

int main()
{
	int iNo=0;
	
	printf("Enter the number:");
	scanf("%d",&iNo);
	
	Reverse(iNo);
	return 0;
}