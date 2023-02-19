#include<stdio.h>
#include<stdlib.h>

void DisplayOddEvenSum(int Arr[],int iSize)//-------------------------
{
    int iCnt=0,iEvenSum=0,iOddSum=0;

    for(iCnt=0;iCnt<iSize;iCnt++)
    {
        if(Arr[iCnt]%2==0)
        {
            iEvenSum=iEvenSum+Arr[iCnt];
        }
        else
        {
            iOddSum=iOddSum+Arr[iCnt];
        }
    }
    printf("Summation of even number :%d\n",iEvenSum);
    printf("Summation of odd number :%d\n",iOddSum);
}

int main()
{
    int *ptr=NULL;
    int iLength=0;
    
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
    
    DisplayOddEvenSum(ptr,iLength);

    printf("----------------------------\n");

    //printf("Number of even elements are :%d\n",iRet);

    free(ptr);

    return 0;
}