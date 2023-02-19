#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node * next;
};

typedef struct node NODE;
typedef struct node * PNODE;
typedef struct node ** PPNODE;

void InsertFirst(PPNODE First ,PPNODE Last, int No)
{
    PNODE newn = (PNODE) malloc(sizeof(NODE));
    newn->data = No;
    newn->next = NULL;

    if(*First == NULL && *Last == NULL)
    {
        *First = newn;
        *Last = newn;
    }
    else
    {
        newn->next = *First;
        *First = newn;
        
    }
    (*Last)->next = *First;
    

}
void InsertLast(PPNODE First ,PPNODE Last, int No)
{
    PNODE newn = (PNODE)malloc(sizeof(NODE));
    newn->data = No;
    newn->next = NULL;
   
    if(*First == NULL && *Last == NULL)
    {
        *First = newn;
        *Last = newn;
    }
    else
    {
        (*Last)->next = newn;
        //newn->next = *First;
        *Last = newn;
    }
    (*Last)->next = *First;

}
int Count(PNODE First,PNODE Last)
{
    int counter = 0;

    if(First == NULL && Last == NULL)
    {
        return 0;
    }
    do
    {
        counter++;
        First = First->next;
    }while(First != Last->next);
    
    return counter;
}

void InsertAtPos(PPNODE First,PPNODE Last, int No,int ipos)
{
    int counter = Count(*First,*Last);
    PNODE temp = NULL;
    PNODE newn = NULL;
    int i = 0;
 
    if(ipos == 1)
    {
        InsertFirst(First,Last,No);
    }
    else if(ipos == (counter+1))
    {
        InsertLast(First,Last,No);
    }
    else
    {
    	temp = *First;
        newn = (PNODE)malloc(sizeof(NODE));
        newn->data = No;
        newn->next = NULL;

        for(i=1 ;i< ipos-1;i++)
        {
            temp = temp->next;
        }
        
        newn->next = temp->next;
        temp->next= newn;
    }
}
void DeleteFirst(PPNODE First,PPNODE Last)
{
    if(*First == NULL && *Last == NULL)
    {
        return;
    }
    else if(*First == *Last)
    {
        free(*First);
        *First = NULL;
        *Last = NULL;
    }
    else
    {
        *First = (*First)->next;
        free((*Last)->next);
        (*Last)->next = *First;
        
    }
}
void DeleteLast(PPNODE First,PPNODE Last)
{
    PNODE temp = NULL;

    if(*First == NULL)
    {
        return;
    }
    else if(*First == *Last)
    {
        free(*First);
        *First = NULL;
        *Last = NULL;
    }
    else
    { 
    	temp = *First;  
        while(temp->next->next != (*Last)->next)
        {
            temp = temp->next;
        }
        *Last = temp;
        free(temp->next);
        (*Last)->next = *First;
        
    }
}
void DeleteAtPos(PPNODE First ,PPNODE Last, int ipos)
{
    int i = 1;
    PNODE temp1 = NULL;
    PNODE temp2 = NULL;

    if(ipos == 1)
    {
        DeleteFirst(First,Last);
    }
    else if (ipos == (Count(*First,*Last)))
    {
        DeleteLast(First,Last);
    }
    else
    {
    	temp1 = *First;
        for(i == 1;i < ipos-1;i++)
        {
            temp1 = temp1->next;
        }
        temp2 = temp1->next;
        temp1->next = temp2->next;
        free(temp2);
    }
}
void Display(PNODE First,PNODE Last)
{
    if(First == NULL)
    {
        return;
    }
    do
    {
        printf("| %d |->",First->data);
        First = First->next;
    }while(First != Last->next);
    
}


int main()
{
    PNODE Head = NULL;
    PNODE Tail = NULL;
    int iRet = 0;

    InsertFirst(&Head,&Tail ,51);
    InsertFirst(&Head ,&Tail, 21);
    InsertFirst(&Head ,&Tail, 11);

    InsertLast(&Head ,&Tail,101);
    InsertLast(&Head ,&Tail, 121);
    InsertLast(&Head ,&Tail, 151);

    InsertAtPos(&Head,&Tail, 999 ,3);
    
    Display(Head,Tail);
    iRet = Count(Head,Tail);
    printf("\nNumber of nodes in LL is : %d\n",iRet);

    
    DeleteAtPos(&Head,&Tail,3);
    
    Display(Head,Tail);
    iRet = Count(Head,Tail);
    printf("\nNumber of nodes in LL is : %d\n",iRet);
    
    DeleteFirst(&Head,&Tail);
    DeleteLast(&Head,&Tail);
    
    Display(Head,Tail);
    iRet = Count(Head,Tail);
    printf("\nNumber of nodes in LL is : %d\n",iRet);


    return 0;
}
