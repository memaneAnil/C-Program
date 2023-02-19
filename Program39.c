#include <stdio.h>

void DisplayReverse(int iValue)
{
    int iCnt=0;
    for(iCnt=iValue;iCnt>0;iCnt--)
    {
        printf("%d\t",iCnt);
    }


}
int main()
{
    int iNo=0;

    printf("Enter the number\n");
    scanf("%d",&iNo);
    printf("\n_______________________________\n");
    DisplayReverse(iNo);
    printf("\n________________________________\n");

    return 0;

}