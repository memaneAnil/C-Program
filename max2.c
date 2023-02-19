#include<stdio.h>
#include<stdlib.h>

int SecondMax(int Arr[],int iLength)//int *Arr,int iLength
{
   int iCnt=0,iMax1=0,iMax2=0;

    for(int i=0;i<iLength;i++)
    {
        for(int j=0;j<iLength;j++)
        {
            if(Arr[j]>=iMax1)
            {
                iMax1=Arr[j];
                
            }
            else if(iMax2<Arr[j])
            {
                iMax2=Arr[j];
                
            }
        }
    }
    
    return iMax2;
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
    int iRet=0;

    printf("Enter the size of Array\n");
    scanf("%d",&iSize);

    ptr=(int *)malloc(sizeof(int)*iSize);

    printf("Enter the number\n");
    for(iCnt=0;iCnt<iSize;iCnt++)
    {
        scanf("%d",&ptr[iCnt]);
    }

    iRet=SecondMax(ptr,iSize);

    printf("second max is :%d\n",iRet);

    free(ptr);

    return 0;
}
