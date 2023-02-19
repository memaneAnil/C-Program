//program 376
#include<stdio.h>
#include<stdlib.h>

# pragma pack(1)

struct node
{
    int data;
    struct node *next;
};

typedef struct node NODE;
typedef struct node * PNODE;
typedef struct node ** PPNODE;


void insertLast(PPNODE First,int no)
{
    PNODE newn=(PNODE)malloc(sizeof(NODE));
    newn->data=no;
    newn->next=NULL;

    if(*First==NULL)
    {
        *First=newn;
    }
    else
    {
        PNODE temp=*First;
        while(temp->next!=NULL)
        {
            temp=temp->next;
        }
        temp->next=newn;
    }
}

void DisplayR(PNODE First)
{
    if(First!=NULL)
    {
        printf("| %d | -> ",First->data);
        First=First->next;
        DisplayR(First);
    }
    //printf("NULL \n");
}
int CountR(PNODE First)
{
    static int iCnt=0;
    if(First!=NULL)
    {
        iCnt++;
        First=First->next;
        CountR(First);
    }
    return iCnt;
}
void DisplayR1(PNODE First)
{
    if(First!=NULL)
    {
        DisplayR1(First->next);
        printf("| %d | -> ",First->data);
        
    }
    //printf("NULL \n");
}

int main()
{
    PNODE Head=NULL;
    int iRet=0;

    
    
    insertLast(&Head,101);
    insertLast(&Head,121);
    insertLast(&Head,151);
    DisplayR1(Head);
    iRet=CountR(Head);
    printf("\nNumber of nodes in linklist is : %d\n",iRet);

    
    return 0;
}