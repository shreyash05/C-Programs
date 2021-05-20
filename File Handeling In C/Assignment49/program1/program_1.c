/* 1. Write a program which accepts file name from user and count number of
capital characters from that file.
Input : Demo.txt
Output : Number of capital characters are 23  */


#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>
#include<string.h>


int CountCapital(char FName[])
{
	int fd=0;
	int ret=0;
	int i=0;
	char Mug[100];
// Open file in read mode
	fd = open(FName,O_RDONLY,0777); // File gets opened with read and write mode
    if(fd == -1)
    {
        printf("Unable to open file\n");
    }
    else
    {
        printf("File succesfully opened with fd %d\n",fd);
    }
	
// Read the data into local array
// Count capital characters
	while(ret = read(fd,Mug,100) != 0)
	{
		if(Mug[i] > 'A' && Mug[i] < 'Z')
		{
			i++;
		}
		printf("%d\n",i);
	}
		
// Close the file
	close(fd);
// Return its frequency.
	return i;
}
int main()
{
	char FileName[30];
	int iRet = 0;
	printf("Enter file name: ");
	scanf("%s",FileName);
	iRet = CountCapital(FileName);
	printf("Number of Capital characters are %d",iRet);
	return 0;
}