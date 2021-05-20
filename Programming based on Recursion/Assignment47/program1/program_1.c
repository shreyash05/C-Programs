/*1. Write a recursive program which accept string from user and count white
spaces.
Input : HE llo WOr lD
Output : 3  */

#include<stdio.h>
int SpaceCount(char *str)
{
	static int iCnt=0;
	
	if(*str != '\0')
	{
		if(*str == ' ')
		{
			iCnt++;
		}
		str++;
		SpaceCount(str);
		
	}
	return iCnt;
	
}



int main()
{
	char arr[20];
	int iRet=0;
	
	printf("enter the string:");
	scanf("%[^'\n']s",&arr);
	
	iRet=SpaceCount(arr);
	printf("%d",iRet);
	
	return 0;
}