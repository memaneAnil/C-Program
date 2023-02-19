#include<stdio.h>
#include<stdlib.h>
#pragma pack(1)

struct node
{
    int data;
    struct node *next;
};
typedef struct node NODE;
typedef struct node * PNODE;
typedef struct node ** PPNODE;

void insertFirst(PPNODE First,int no)
{
    PNODE newn=(PNODE) malloc(sizeof(NODE));//1 allocate memory
    newn->data=no;
    newn->next=NULL;

    if(*First==NULL)
    {
        *First=newn;
    }
    else
    {
        newn->next=*First;
        *First=newn;
    }
}
void insertLast(PPNODE First,int no)
{
    
    PNODE newn=(PNODE) malloc(sizeof(NODE));//1 allocate memory
    PNODE temp=*First;

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
    }

}
void insertAtPos(PPNODE First)
{
    
}
void Display(PNODE First)
{
    printf("Elements from linked list are :\n");
    while(First!=NULL)
    {
        printf("| %d |->",First->data);
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
        *First=(*First)->next;
        free(temp);
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
    Display(Head);

    iRet=Count(Head);
    printf("Number of node in Linked List are :%d\n",iRet);
    insertLast(&Head,111);
    insertLast(&Head,211);
    Display(Head);
    deleteFirst(&Head);
    Display(Head);

    iRet=Count(Head);
    printf("Number of node in Linked List are :%d\n",iRet);
    deleteLast(&Head);
    Display(Head);

    iRet=Count(Head);
    printf("Number of node in Linked List are :%d\n",iRet);
    return 0;
}