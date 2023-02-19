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

void Display(char *Str)
{
    //static int len=0;
    //static int iCnt=0;
    if(*(Str)>='\0')
    {
        
        
        Str++;
        Display(Str);
        printf("%c\n",*Str);
    } 
    
    //return iCnt;  
}
int main()
{
    char arr[6];
    int iRet=0;
    printf("Enter the String\n");
    scanf("%[^'\n']s",arr);
    Display(arr);

    //printf("Addition of digit are : %d\n",iRet);
    return 0;
}