#include<stdio.h>
#include<stdlib.h>

#pragma pack(1)

struct node
{
    int data;
    struct node * prev;
    struct node * next;
};
typedef struct node NODE;
typedef struct node * PNODE;
typedef struct node ** PPNODE;

void insertFirst(PPNODE First,int no)
{
    PNODE newn=(PNODE)malloc(sizeof(NODE));
    newn->prev=NULL;
    newn->data=no;
    newn->next=NULL;

    if(*First==NULL)
    {
        *First=newn;
    }
    else
    {
        newn->next=*First;
        (*First)->prev=newn;
        *First=newn;
    }
}
void insertLast(PPNODE First,int no)
{
    PNODE temp=*First;
    PNODE newn=(PNODE)malloc(sizeof(NODE));
    newn->prev=NULL;
    newn->data=no;
    newn->next=NULL;

    if(*First==NULL)
    {
        *First=newn;
    }
    else
    {
       while(temp->next!=NULL)
       {
            temp=temp->next;
       }
       temp->next=newn;
       newn->prev=temp;
    }
}
void Display(PNODE First)
{
    printf("NULL<=>");
    while(First!=NULL)
    {
        printf("| %d | ->",First->data);
        First=First->next;
    }
    printf("NULL \n");
}
int Count(PNODE First)
{
    int iCnt=0;
    while(First!=NULL)
    {
        iCnt++;
        First=First->next;
    }
   return iCnt;
}
void deleteFirst(PPNODE First)
{
    
    if(*First==NULL)
    {
        return;
    }
    else if((*First)->next==NULL)
    {
        free(*First);
        *First=NULL;
    }
    else
    {
        *First=(*First)->next;
        free((*First)->prev);
        (*First)->prev=NULL;
    }
}
void deleteLast(PPNODE First)
{
    PNODE temp=*First;
    if(*First==NULL)
    {
        return;
    }
    else if((*First)->next==NULL)
    {
        free(*First);
        *First=NULL;
    }
    else
    {
        while(temp->next->next!=NULL)
        {
            temp=temp->next;
        }
        free(temp->next);
        temp->next=NULL;
    }
}

int main()
{
    PNODE Head=NULL;
    int iRet=0;
     
   
    insertFirst(&Head,51);
    insertFirst(&Head,21);
    insertFirst(&Head,11);
    insertLast(&Head,101);
    insertLast(&Head,111);
    insertLast(&Head,121);
    Display(Head);
    iRet=Count(Head);
    printf("----------------Total Elements in Linked list are :---------------%d\n",iRet);
    
    deleteFirst(&Head);
    deleteLast(&Head);
    Display(Head);
    printf("----------------Total Elements in Linked list are :---------------%d\n",iRet);
    return 0;
}