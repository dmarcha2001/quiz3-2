#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<string.h>


// this is the main function
int main(int argc, char **argv){

    char item[]="";
    double price;
    srand(time(0));
    int i;
    double tax;
    double tip;
    double taxRate;
    double tipRate;
    //taxRate=10;
    //tipRate=10;
    sscanf(argv[1],"%lf",&taxRate);
    sscanf(argv[2],"%lf",&tipRate);
    i = rand() % 4;
    printf("i is %d \n",i);
    if (i == 0)
    {
        price = 9.95;
        strcpy(item,"salad");
    }
    else if (i == 1)
    {
        price = 4.55;
        strcpy(item,"soup");
    }
    else if (i == 2)
    {
        price = 13.25;
        strcpy(item,"sandwich");
    }
    else if (i == 3)
    {
        price = 22.35;
        strcpy(item,"pizza");
    }
    printf("the menu item selected is: %s\n",item);
    printf("the price of menu item is: %.2f\n",price);

    tax = price * (taxRate/100);
    tip = price * (tipRate/100);
    double total = price + tax + tip;
    printf("the Tax is: %.2f\n",tax);
    printf("the Tip is: %.2f\n",tip);
    printf("the total is: %.2f\n",total);
    return 0;
    
}