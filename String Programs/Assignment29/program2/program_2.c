/* 2.Write a program which accept string from user and accept one
character. Return frequency of that character.

Input : “Marvellous Multi OS”
M

Output : 2

Input : “Marvellous Multi OS”
W

Output : 0  */



#include<stdio.h>
int SpaceCount(char str[], char cValue)
{
    int i=0;
    int iCnt=0;
    while(str[i]!= '\0')
   // for(i = 0; str[i] != '\0 '; i++)
    {
        if(str[i] == cValue)
        {
            iCnt++;
        }
        i++;
    }
    return iCnt;
    
}

int main()
{
   
    char Arr[20];
     char cCh = '\0';
    int iRet=0;
    
    
    printf("Enter the String:\n");
    scanf("%[^'\n']s",Arr);
    
    printf("Enter the character:");
    scanf(" %c",&cCh); 
    
   iRet=SpaceCount(Arr,cCh);
    printf("Number of chcaracter: %d\n",iRet);
    
    return 0;
}

