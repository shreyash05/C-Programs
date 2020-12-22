#include <stdio.h>


int DisplayConvert ( char cValue)
{
	if((cValue>='A')&&(cValue<='Z'))
	{
		cValue=cValue+32;
		printf("%c",cValue);
	}
	else if((cValue>='a')&&(cValue<='z'))
	{
		cValue=cValue-32;
		printf("%c",cValue);
	}
}

int main()
{
	char cVal = '\0';

	printf("Enter character\n");
	scanf("%c",&cVal);

	DisplayConvert(cVal);

	return 0;
}