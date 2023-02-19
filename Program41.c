#include<stdio.h>
void DisplayEvenFactor(int iNo)
{
    int iCnt=0;
   /* for(iCnt=1;iCnt<=(iNo/2);iCnt++)
    {
        if(iNo%iCnt==0 && iCnt%2==0)
        {
            printf("%d\n",iCnt);
        }
    }

    for(iCnt=2;iCnt<=(iNo/2);iCnt=iCnt+2)
    {
        if(iNo%iCnt==0)
        {
            printf("%d\n",iCnt);
        }
    }
*/
    for(iCnt=1;iCnt<=(iNo/2);iCnt=iCnt+2)
    {
        if(iNo%iCnt==0)
        {
            printf("%d\n",iCnt);
        }
    }


}

int main()
{
    int iNo=0;

    printf("Enter the number");
    scanf("%d",&iNo);
    DisplayEvenFactor(iNo);

    return 0;
}