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

void DisplayR(int Arr[],int size)
{
    static int iCnt=0;

    if(iCnt<size)
    {
        printf("%d\n",Arr[iCnt]);
        iCnt++;
        DisplayR(Arr,size);
    }
}
int main()
{
    int Brr[5]={10,20,30,40,50};
    
    
    DisplayR(Brr,5);

    //printf("Addition of digit are : %d\n",iRet);
    return 0;
}