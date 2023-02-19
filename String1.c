

#include<stdio.h>

int main()
{
    char ch1='a';

    char ch2='A';
    char ch3='0';
    char ch4='z';
    char ch5='Z';
    char ch6='9';
    int iCnt=0;
    printf("character represntation is %c and it ASCII value is %d\n",ch1,ch1);
    printf("character represntation is %c and it ASCII value is %d\n",ch2,ch2);
    printf("character represntation is %c and it ASCII value is %d\n",ch3,ch3);
    printf("character represntation is %c and it ASCII value is %d\n",ch4,ch4);
    printf("character represntation is %c and it ASCII value is %d\n",ch5,ch5);
    printf("character represntation is %c and it ASCII value is %d\n",ch6,ch6);

    for(iCnt=0;iCnt<=127;iCnt++)
    {
        printf("character represntation is %c and it ASCII value is %d ,%x ,%o \n",iCnt,iCnt,iCnt,iCnt);
    }

    return 0;
}