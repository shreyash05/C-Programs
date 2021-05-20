/*1. Write a program which search first occurrence of particular element from
singly linear linked list.
Function should return position at which element is found.
Function Prototype :int SearchFirstOcc( PNODE Head , int no );
Input linked list : |10|->|20|->|30|->|40|->|50|->|30|->|70|
Input element : 30
Output : 3  */

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

int Count(PNODE Head)
{
    int iCnt = 0;
    
    while(Head != NULL)
    {
        iCnt++;
        Head = Head->next;
    }
    
    return iCnt;
}

int SearchFirstOcc( PPNODE Head , int no, int Number )
{
    int i=0;
    int size=0;
    size= Count(Head);
    PNODE temp = NULL;
    temp = Head;
    
    for(i=1;i<=size;i++)
    {
       
        
        if(temp->data==Number)
        {
            return i;
            break;
            
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
    
    
    Display(First);
    
    iRet = Count(First);
    printf("Number of nodes in the linkedlist are : %d\n",iRet);
    
    printf("Enetr the number to find first occurance:");
    scanf("%d",&Number);
    iRet=SearchFirstOcc(&First, no , Number);
    printf("First occurance of number is:%d",iRet);

     return 0;
}




































