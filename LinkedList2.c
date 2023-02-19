#include<stdio.h>
#include<stdlib.h>

#pragma pack(1)
struct node
{
    int data;
    struct node *next;
};

int main()
{
    typedef struct node NODE;
    typedef struct node * PNODE;
    typedef struct node ** PPNODE;

    PNODE Head=NULL;

    PNODE newn=(PNODE)malloc(sizeof(NODE));

    newn->data=11;
    newn->next=NULL;

    printf("%d \n",newn->data);
    printf("size of struct is :%d\n",sizeof(NODE));

    return 0;
}