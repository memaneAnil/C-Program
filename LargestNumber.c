#include<stdio.h>
#include<stdlib.h>

int largestNumber(int Arr[],int iSize)//-------------------------
{
    int iCnt=0,iMax=0;

    for(iCnt=0;iCnt<iSize;iCnt++)
    {
        if(Arr[iCnt]>iMax)
        {
            iMax=Arr[iCnt];
        }
        
    }
    return iMax;
}
int firstOccurance(int Arr[],int iSize,int iNo)
{
    int iCnt=0,iPos=-1;
    for(iCnt=0;iCnt<iSize;iCnt++)
    {
        if(Arr[iCnt]==iNo)
        {
            iPos=iCnt;
        }
    }
    return iPos;
}
int lastOccurance(int Arr[],int iSize,int iNo)
{
    int iCnt=0;
    
    for(iCnt=iSize-1;iCnt>=0;iCnt--)
    {
        if(Arr[iCnt]==iNo)
        {
            break;
        }
    }
/*    if(iCnt==-1)
    {
        return -1;
    }
    else
    {
        return iCnt;
    }
*/
    return iCnt;
}

int main()
{
    int *ptr=NULL;
    int iLength=0;
    int iValue=0;
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
    
    iRet=largestNumber(ptr,iLength);

    printf("----------------------------\n");

    printf("Largest number is :%d\n",iRet);
    
    printf("Enter the number");
    scanf("%d",&iValue);
    iRet=0;
    //iRet=lastOccurance(ptr,iLength,iValue);

    iRet=firstOccurance(ptr,iLength,iValue);

    if(iRet==-1)
    {
        printf("No such number\n");
    }
    else
    {
        printf("last occurance at index :%d\n",iRet);
    }
    
    free(ptr);

    return 0;
}