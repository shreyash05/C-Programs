/*4. 5. Write a program which display largest digits of all element from singly
linear linked list.
Function Prototype :
void DisplayLarge( PNODE Head);
Input linked list : |11|->|250|->|532|->|419|
Output : 1 5 5 9 */

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

void DisplayLarge( PNODE Head)
{int iDigit=0;
    int itemp=0;
    int iMult=1;

    
   
    while(Head!=NULL)
    {
        itemp=0;
        while(Head->data!= 0)
        {
                
            iDigit = (Head->data) % 10;
            
            if(iDigit>itemp)
            {
                itemp=iDigit;
        
                
            }
            
            

            Head->data= Head->data / 10;
            

        }
    
        printf("|%d|->",itemp);
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
    
    DisplayLarge(First);  
    
     return 0;
}

