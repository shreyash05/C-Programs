/*3. Write a recursive program which accept string from user and count number
of characters.
Input : Hello
Output : 5  */

int Strlen(char *str)
{
    static int i=0;
    if(*str != '\0')
    {
        i++;
        str++;
        Strlen(str);
    }
    return i;
}

int main()
{
    int iRet = 0;
    char arr[20];
    printf("Enter string:");
    scanf("%s",arr);
    iRet = Strlen(arr);
    printf("%d",iRet);

return 0;
}

