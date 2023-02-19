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

int StringlenXR(char *Str)
{
    static int len=0;
    static int iCnt=0;
   if(*(Str)!='\0')
    {
        
        iCnt++;
        Str++;
        StringlenXR(Str);
    } 
    return iCnt;  
}
int main()
{
    char arr[20];
    int iRet=0;
    printf("Enter the String\n");
    scanf("%[^'\n']s",arr);
    iRet=StringlenXR(arr);

    printf("Addition of digit are : %d\n",iRet);
    return 0;
}