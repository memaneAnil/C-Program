#include<stdio.h>
#include<stdlib.h>

float Average(int Arr[],int iLength)//int *Arr,int iLength
{
    int iSum=0;
    
    int iCnt=0;
    for(iCnt=0;iCnt<iLength;iCnt++)
    {
        iSum=iSum+Arr[iCnt];
    }
    return (iSum/iLength);
}
/*
float Average(int *Arr,int iLength)//int *Arr,int iLength
{
    int iSum=0;
    
    int iCnt=0;
    for(iCnt=0;iCnt<iLength;iCnt++)
    {
        iSum=iSum+*(Arr+iCnt);
    }
    return (iSum/iLength);
}
*/
int main()
{
    int iSize=0;
    int *ptr=NULL;
    int iCnt=0;
    float fRet=0.0f;

    printf("Enter the size of Array\n");
    scanf("%d",&iSize);

    ptr=(int *)malloc(sizeof(int)*iSize);

    printf("Enter the number\n");
    for(iCnt=0;iCnt<iSize;iCnt++)
    {
        scanf("%d",&ptr[iCnt]);
    }

    fRet=Average(ptr,iSize);

    printf("Average is :%f\n",fRet);

    free(ptr);

    return 0;
}