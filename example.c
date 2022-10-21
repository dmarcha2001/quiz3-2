#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<string.h>


// this is the main function
int main(){

    char item[]="";
    double price;
    srand(time(0));

    int i;

    i = rand() % 4;
    printf("i is %d ",i);
    if (i == 0)
    {
        strcpy(item,"salad");
    }
    else if (i == 1)
    {
        strcpy(item,"soup");
    }
    else if (i == 2)
    {
        strcpy(item,"sandwich");
    }
    else if (i == 3)
    {
        strcpy(item,"pizza");
    }
    printf(item);
    return 0;
}