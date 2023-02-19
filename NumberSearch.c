#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

int searchNumber(int Arr[],int iSize,int iNumber)//-------------------------
{
    int iCnt=0;
    

    for(iCnt=0;iCnt<iSize;iCnt++)
    {
        if(Arr[iCnt]==iNumber)
        {
            
            break;
        }
        
    }
    if(iCnt==iSize)
    {
        return -1;
    }
    else
    {
        return iCnt;
    }
}

int main()
{
    int *ptr=NULL;
    int iLength=0;
    int iNumber=0;
    int iRet=0;
    int iCnt=0;

    
    printf("Enter number of element\n");
    scanf("%d",&iLength);

    ptr=(int *)malloc(iLength*sizeof(int));

    printf("please enter the elements\n");
    for(iCnt=0;iCnt<iLength;iCnt++)
    {
        scanf("%d",&ptr[iCnt]);
    }
    printf("Enter the number to search\n");
    scanf("%d",&iNumber);
    printf("----------------------------\n");
    
    iRet=searchNumber(ptr,iLength,iNumber);

    printf("----------------------------\n");

    if(iRet==-1)
    {
        printf("Invalid Number \n");
    }
    else
    {
        printf("Index at which number occured:%d\n",iRet);
    }
    //printf("Frequency of %d is :%d\n",iNumber,iRet);

    free(ptr);

    return 0;
}