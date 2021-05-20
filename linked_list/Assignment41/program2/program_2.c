/* 2. Write a program which display all palindrome elements of singly linked
list.
Function Prototype :
void DisplayPallindrome( PNODE Head);
Input linked list : |11|->|28|->|17|->|414|->|6|->|89|
Output : 11 6 414  */

#include<stdio.h>
#include<stdlib.h>

struct Node
{
    int data;
    struct Node * next;
};

typedef struct Node NODE;
typedef struct Node * PNODE;
typedef struct Node **PPNODE;

void InsertFirst(PPNODE Head, int value)
{
    PNODE newn = NULL;
    newn = (PNODE)malloc(sizeof(NODE));
   
    newn->data = value;
    newn->next = NULL;
   
    if(*Head == NULL)  
    {
        *Head = newn;
    }
    else        
    {
        newn->next = *Head;
        *Head = newn;
    }
}

void Display(PNODE Head)
{
    printf("\n");
    while(Head != NULL)
    {
        printf("| %d | -> ",Head->data);
        Head = Head->next;
    }
    printf("NULL\n");
}

void Reverse( PNODE Head)
{
    int i=0;
    int iDigit=0;
    int iVal=0;
    int iTemp=0;
    int temp =0;
   
    while(Head!=NULL)
    {
        iTemp=0;
temp = (Head->data);
        while(temp!= 0)
        {
            iDigit = (temp % 10);
           
            iTemp = (iTemp * 10) + iDigit;
           
            temp= temp / 10;
        }
 
         if(iTemp==(Head->data))
        {
            printf("%d \t",iTemp);
        }
       
        Head=Head->next;
   
    }
   
   
   
}

int main()
{
    PNODE First = NULL;    
    int no = 0, iRet = 0;
    int Number=0;
   
    printf("Enter number : \n");
    scanf("%d",&no);
    InsertFirst(&First, no);
   
    printf("Enter number : \n");
    scanf("%d",&no);
    InsertFirst(&First, no);
   
    printf("Enter number : \n");
    scanf("%d",&no);
    InsertFirst(&First, no);
   
    printf("Enter number : \n");
    scanf("%d",&no);
    InsertFirst(&First, no);
   
    printf("Enter number : \n");
    scanf("%d",&no);
    InsertFirst(&First, no);
   
    printf("Enter number : \n");
    scanf("%d",&no);
    InsertFirst(&First, no);
   
   
    Display(First);
   
    Reverse(First);
     return 0;
}


