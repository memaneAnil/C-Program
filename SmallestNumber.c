#include<stdio.h>
#include<stdlib.h>

int smallestNumber(int Arr[],int iSize)//-------------------------
{
    int iCnt=0,iMin=Arr[0];

    for(iCnt=0;iCnt<iSize;iCnt++)
    {
        if(Arr[iCnt]<iMin)
        {
            iMin=Arr[iCnt];
        }
        
    }
    return iMin;
}
void DisplayReverse(int Arr[],int iSize)
{
    int iCnt=0;
    for(iCnt=iSize-1;iCnt>=0;iCnt--)
    {
        printf("%d\n",Arr[iCnt]);
    }
}

int main()
{
    int *ptr=NULL;
    int iLength=0;
    
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
    
    printf("----------------------------\n");
    
    iRet=smallestNumber(ptr,iLength);
    DisplayReverse(ptr,iLength);

    printf("----------------------------\n");

    printf("Smallest number is :%d\n",iRet);

    free(ptr);

    return 0;
}