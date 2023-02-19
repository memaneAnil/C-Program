//Factors
//sumFactors 
//Perfect

#include<stdio.h>

int StringlenX(char *Str)
{
    int len=0,iCnt=0;

    while(*(Str)!='\0')
    {
        
        iCnt++;
        Str++;
    } 
    return iCnt;  
}

int AdditionR(int Arr[],int size)
{
    static int iCnt=0;
    static int iSum=0;

    if(iCnt<size)
    {
        printf("%d\n",Arr[iCnt]);
        
        iSum=iSum+Arr[iCnt];
        iCnt++;
        AdditionR(Arr,size);
    }
    return iSum;
}
int main()
{
    int Brr[5]={10,20,30,40,50};
    int iRet=0;
    
    iRet=AdditionR(Brr,5);

    printf("Addition is : %d\n",iRet);
    return 0;
}