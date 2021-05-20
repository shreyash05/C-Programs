/*1. Write a program which reverse each element of singly linked list.
Function Prototype :
void Reverse( PNODE Head);
Input linked list : |11|->|28|->|17|->|41|->|6|->|89|
Output : |11|->|82|->|71|->|14|->|6|->|98|  */

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
        Head = Head -> next;
    }
    printf("NULL\n");
}

void Reverse( PNODE Head)
{
    int i=0;
    int iDigit=0;
    int iVal=0; 
    int iTemp=0;
    
   
    while(Head!=NULL)
    {
        iTemp=0;
        while(Head->data != 0)
        {
            iDigit = (Head->data) % 10;
            
            iTemp = (iTemp * 10) + iDigit;
            Head->data = Head->data / 10;
            
        }

       printf("|%d| -> ",iTemp);
        
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
    
    Reverse(First);;
  //  printf("sum of  number: %d",iRet);
     return 0;
}

