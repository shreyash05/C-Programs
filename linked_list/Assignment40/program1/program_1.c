/* 1. Write a program which displays all elements which are perfect from singly
linear linked list.
Function Prototype :int DisplayPerfect( PNODE Head);
Input linked list : |11|->|28|->|17|->|41|->|6|->|89|
Output : 6 28  */

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

void SearchFirstOcc( PPNODE Head , int no, int Number )
{
    int i=0;
    int iNumb=0;
    int iVal=0; 
    int iSum=0;
    PNODE temp = *Head;
   // iVal=temp->data;
   
    while(temp->next!=NULL)
    {
	iSum=0;

        for(i=1;i<temp->data;i++)
        {
            
            if(((temp->data)%i)!=0)
            {
                iSum=iSum+temp->data;
                
               if(iSum==temp->data)
               {
                   printf("%d",iSum);
               }
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
    
    printf("Enter number : \n");
    scanf("%d",&no);
    InsertFirst(&First, no);
    
    
    Display(First);
    
    SearchFirstOcc(&First, no , Number);
    //printf("Perfect number:%d",iRet);

     return 0;
}
