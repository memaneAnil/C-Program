#include<stdio.h>

void DisplayR(int No)
{
    static int iCnt=1;

    if(iCnt<=No)
    {
        printf("*\t");
        iCnt++;
        DisplayR(No);
    }
}

int main()
{
    int Value=0;
    printf("Inside Main\n");
    printf("Enter the number\n");
    scanf("%d",&Value);
    DisplayR(Value);

    printf("\nEnd of Main\n");
    return 0;
}