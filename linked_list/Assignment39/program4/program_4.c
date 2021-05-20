/* 4. Write a program which return largest element from singly linear linked
list.
Function Prototype :int Maximum( PNODE Head);
Input linked list : |110|->|230|->|320|->|240|
Output : 320  */

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

int SearchFirstOcc( PPNODE Head , int no, int Number )
{
    int i=0;
    int iCmp=0;
    PNODE temp = *Head;
    
    while(temp!=0)
    {
        if(temp->data > iCmp)
        {
        iCmp=temp->data;
        }
        temp=temp->next;
    }
    return iCmp;
   
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
    
    
    Display(First);
    
    iRet=SearchFirstOcc(&First, no , Number);
    printf("Largest element is:%d",iRet);

     return 0;
}
