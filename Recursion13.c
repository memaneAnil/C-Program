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
    
    if(*(Str)>='\0')
    {
        
        printf("%s\n",Str);
        Str++;
        Display(Str);
        
    } 
    
    //return iCnt;  
}
int main()
{
    char arr[20];
    int iRet=0;
    printf("Enter the String\n");
    scanf("%[^'\n']s",arr);
    Display(arr);

    //printf("Addition of digit are : %d\n",iRet);
    return 0;
}