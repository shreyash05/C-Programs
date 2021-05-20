/* 5. Accept division of student from user and depends on the division
display exam timing. There are 4 divisions in school as A,B,C,D. Exam
of division A at 7 AM, B at 8.30 AM, C at 9.20 AM and D at 10.30 AM.
(Application should be case insensitive)
Input : C
Output : Your exam at 9.20 AM
Input : d
Output : Your exam at 10.30 AM */

#include<stdio.h>

void ExamTime(char cValue)
{
    if(cValue=='A'|| cValue=='a')           
    {
        printf("Your exam at 7 AM");
    }
    else if(cValue=='B'|| cValue=='b')           
    {
        printf("Your exam at 8.30 AM");
    }
    
    else if(cValue=='C'|| cValue=='c')           
    {
        printf("Your exam at 9.20 AM");
    }
    
    else if(cValue=='D'|| cValue=='d')           
    {
        printf("Your exam at 10.30 AM");
    }
    
    else
    {
        printf("Enter valid division");
    }
}



int main()
{
    int iRet=0;
    char iCharacter=' \0 ';
    printf("enter character:");
    scanf("%c",&iCharacter);

ExamTime(iCharacter);

    return 0;
}
