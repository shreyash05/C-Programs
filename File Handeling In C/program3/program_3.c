/* 3. Write application which accept file name from user and read all data from that file
and display contents on screen.
Input : Demo.txt
Output : Display all data of file.  */

#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>
#include<string.h>

int main()
{
	char name[20];
	char arr[50];
	int fd = 0;
	int Ret = 0;
	
	printf("Enter the file name:");
	scanf("%s",name);
	
	fd=open(name,O_RDWR);
	
	if(fd == -1)
	{
		printf("unable to create file");
	}
	
	else
	{
		printf("File successfully created with %d",fd);
	}
	
	Ret = read(fd,arr,100);
	if(fd==-1)
	{
		printf("unable to read data");
		
	}
	else
	{
		printf("data read successfully: %s ",arr);
	}
	
	close(fd);
	return 0;
	return 0;
}