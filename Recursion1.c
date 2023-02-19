#include<stdio.h>

void DisplayI()
{
    int iCnt=1;

    while(iCnt<=4)
    {
        printf("*\t");
        iCnt++;
    }
    printf("\n");
}
void DisplayR()
{
    static int iCnt=1;

    if(iCnt<=4)
    {
        printf("*\t");
        iCnt++;
        DisplayR();
    }
   // printf("\n");
}
int main()
{
    DisplayI();
    DisplayR();

    return 0;
}