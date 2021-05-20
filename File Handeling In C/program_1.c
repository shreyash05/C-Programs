/* 1. Write application which accept file name from user and open that file in read mode.
Input : Demo.txt
Output : File opened successfully.  */

#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>
#include<string.h>

int main()
{
	char name[20];
	int fd = 0;
	
	printf("Enter the file name:");
	scanf("%s",name);
	
	fd=open(name,O_RDONLY);
	
	if(fd == -1)
	{
		printf("unable to open file");
	}
	
	else
	{
		printf("File successfully opened with %d",fd);
	}
	
	close(fd);
	return 0;
	return 0;
}