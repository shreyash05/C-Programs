/* 2. Write a program which displays all elements which are prime from singly
linear linked list.
Function Prototype :int DisplayPrime( PNODE Head);
Input linked list : |11|->|20|->|17|->|41|->|22|->|89|
Output : 11 17 41 89  */

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

int DisplayPrime( PPNODE Head)
{
    int i=0;
    int iNumb=0;
    int iVal=0; 
    int iSum=0;
    PNODE temp = *Head;
    
   
    while(temp!=NULL)
    {   iVal=0;
       for(i=2;i<(temp->data);i++)
       {
           if(temp->data % i == 0)
           {
            iVal=temp->data;
            printf(" %d ",temp->data);
            break;

           }
        

       }
	
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
    
    DisplayPrime(&First);

     return 0;
}
