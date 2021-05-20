/* 4. Write application which accept file name from user and display size of file.
Input : Demo.txt
Output : File size is 56 bytes  */

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
		printf("unable to open file");
	}
	
	else
	{
		printf("File successfully opened with %d",fd);
	}
	
	Ret = read(fd,name,sizeof(name));
	if(fd==-1)
	{
		printf("unable to read data");
		
	}
	else
	{
		printf("size of file is: %d ",Ret);
	}
	
	close(fd);
	return 0;
}