/* 5. Write application which accept file name from user and one string from user. Write
that string at the end of file.
Input : Demo.txt
Hello World
Output : Write Hello World at the end of Demo.txt file  */

#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>
#include<string.h>



int main()
{
	char name[20];
	char arr[100];
	int fd = 0;
	int ret = 0;
	int i = 0;
	
	printf("Enter the file name:");
	scanf("%s",name);
	
	printf("Enter the string:");
	scanf("%[^'\n']s",arr);
	
	fd = open(name, O_RDWR | O_APPEND);
    if(fd == -1)
    {
        printf("Unable to open file\n");
        close(fd);
        return -1;
    }
    
    while((ret = read(fd,name,sizeof(name))) != 0)
    {
        printf("Iteration : %d Size Read : %d\n", i, ret);
        i++;
        write(1,arr,ret);
    }
	
	
	
	
	close(fd);
	return 0;
}