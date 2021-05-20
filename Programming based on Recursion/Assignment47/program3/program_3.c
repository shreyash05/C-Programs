/*3. Write a recursive program which accept string from user and count number
of small characters.
Input : HElloWOrlD
Output : 5  */

#include<stdio.h>

int CountSmall(char *str)
{
	static int iCnt=0;
	if(*str != '\0')
	{
		if(*str >= 'a' && *str <= 'z')
		{
			iCnt++;
		
		}
		str++;
		CountSmall(str);
	}
	return iCnt;
}



int main()
{
	char arr[]={'\0'};
	int iRet=0;
	
	printf("Enter the string:\n");
	scanf("%[^'\n']s",arr);
	
	//printf("%s\n",arr);
	iRet=CountSmall(arr);
	printf("Number of small characters:%d\n",iRet);
	return 0;
}