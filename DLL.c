#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node * prev;
    struct node * next;
};

typedef struct node NODE;
typedef struct node * PNODE;
typedef struct node ** PPNODE;

void InsertFirst(PPNODE First , int No)
{
    PNODE newn = (PNODE) malloc(sizeof(NODE));
    newn->data = No;
    newn->prev = NULL;
    newn->next = NULL;

    if(*First == NULL)
    {
        *First = newn;
    }
    else
    {
        newn->next = *First;
        *First = newn;
    }
}
void InsertLast(PPNODE First , int No)
{
    PNODE newn = (PNODE)malloc(sizeof(NODE));
    newn->data = No;
    newn->next = NULL;
    PNODE temp = *First;

    if(*First == NULL)
    {
        *First = newn;
    }
    else
    {
        while(temp->next != NULL)
        {
            temp = temp->next;
        }

        temp->next = newn;
       	newn->prev = temp;
    }
}
int Count(PNODE First)
{
    int counter = 0;
    while(First != NULL)
    {
        counter++;
        First = First->next;
    }
    return counter;
}

void InsertAtPos(PPNODE First, int No,int ipos)
{
    int counter = Count(*First);
    PNODE temp = *First;
    PNODE newn = NULL;
    int i = 0;
 
    if(ipos == 1)
    {
        InsertFirst(First,No);
    }
    else if(ipos == (counter+1))
    {
        InsertLast(First,No);
    }
    else
    {
        newn = (PNODE)malloc(sizeof(NODE));
        newn->data = No;
        newn->prev = NULL;
        newn->next = NULL;

        for(i=1 ;i< ipos-1;i++)
        {
            temp = temp->next;
        }
        
        newn->next = temp->next;
        temp->next->prev = newn;
        newn->prev = temp;
        temp->next= newn;
    }
}
void DeleteFirst(PPNODE First)
{
    PNODE temp = *First;

    if(*First == NULL)
    {
        return;
    }
    else if((*First)->next == NULL)
    {
        free(*First);
        *First = NULL;
    }
    else
    {
        *First = (*First)->next;
        free(temp);
        (*First)->prev = NULL;
    }
}
void DeleteLast(PPNODE First)
{
    PNODE temp = *First;

    if(*First == NULL)
    {
        return;
    }
    else if((*First)->next == NULL)
    {
        free(*First);
        *First = NULL;
    }
    else
    {   
        while(temp->next->next != NULL)
        {
            temp = temp->next;
        }
        free(temp->next);
        temp->next = NULL;
    }
}
void DeleteAtPos(PPNODE First , int ipos)
{
    int i = 1;
    PNODE temp1 = *First;
    PNODE temp2 = NULL;

    if(ipos == 1)
    {
        DeleteFirst(First);
    }
    else if (ipos == (Count(*First)))
    {
        DeleteLast(First);
    }
    else
    {
        for(i == 1;i < ipos-1;i++)
        {
            temp1 = temp1->next;
        }
        temp2 = temp1->next;
        temp1->next = temp2->next;
        temp2->next->prev = temp1;
        free(temp2);
    }
}
void Display(PNODE First)
{
    while(First != NULL)
    {
        printf("| %d |->",First->data);
        First = First->next;
    }
    printf("NULL\n");
}


int main()
{
    PNODE Head = NULL;
    int iRet = 0;

    InsertFirst(&Head ,51);
    InsertFirst(&Head , 21);
    InsertFirst(&Head , 11);

    InsertLast(&Head ,101);
    InsertLast(&Head , 121);
    InsertLast(&Head , 151);

    InsertAtPos(&Head, 999 ,3);

    Display(Head);
    iRet = Count(Head);
    printf("Number of nodes in LL is : %d\n",iRet);
    
    DeleteAtPos(&Head,3);
    
    Display(Head);
    iRet = Count(Head);
    printf("Number of nodes in LL is : %d\n",iRet);
    
    DeleteFirst(&Head);
    DeleteLast(&Head);
    
    Display(Head);
    iRet = Count(Head);
    printf("Number of nodes in LL is : %d\n",iRet);


    return 0;
}
