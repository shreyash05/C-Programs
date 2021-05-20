/* 5. Write a program which display addition of digits of element from singly
linear linked list.
Function Prototype :int SumDigit( PNODE Head);
Input linked list : |110|->|230|->|20|->|240|->|640|
Output : 2 5 2 6 10  */

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

int AdditionEven( PPNODE Head)
{
    int i=0;
    int iDigit=0;
    int iVal=0; 
    int iSum=0;
    PNODE temp = *Head;
    
   
    while(temp!=NULL)
    {
        while(temp->data != 0)
        {
            iDigit = (temp->data) % 10;
        
    
            iSum = iSum + iDigit;
        
        
        temp->data = temp->data / 10;
    }

       
        return iSum;
        temp=temp->next;
    
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
    
    iRet=AdditionEven(&First);
    printf("sum of  number: %d",iRet);
     return 0;
}

