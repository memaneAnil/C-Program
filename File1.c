//Program 381
#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h>

int main()
{
    char Fname[20];
    int Fd=0;

    printf("Enter the file name you want to create\n");
    scanf("%[^'\n']s",Fname);

    Fd=creat(Fname,0777);

    if(Fd==-1)
    {
        printf("Unable to create file");
    }
    else
    {
        printf("File is successfully created : %d \n",Fd);
    }
    return 0;
}