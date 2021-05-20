#include<stdio.h>
int SpaceCount(char str[])
{
    int i=0;
    int iCnt=0;
    while(str[i]!=0)
    {
        if(str[i]==' ')
        {
            iCnt++;
        }
        i++;
    }
    
    return iCnt;
    
}

int main()
{
    char Arr[40];
    int iRet=0;
    printf("Enter the String:");
    scanf("%[^'\n']s",Arr);
    
    iRet=SpaceCount(Arr);
    printf("Number of spaces: %d",iRet);
    
    return 0;
}

