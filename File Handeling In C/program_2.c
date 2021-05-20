/*2. Write application which accept file name from user and create that file.
Input : Demo.txt
Output : File created successfully.  */

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
	
	fd=creat(name,O_RDWR);
	
	if(fd == -1)
	{
		printf("unable to create file");
	}
	
	else
	{
		printf("File successfully created with %d",fd);
	}
	
	close(fd);
	return 0;
	return 0;
}