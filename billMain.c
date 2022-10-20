#include<stdio.h>
#include<stdlib.h>
#include<time.h>

// pick random menu item
int random_item_picker(){
    srand(time(0));
    // int and declare item and price
    char item;
    double price;
    int i;
    i = rand() % 4;
    // this need to pick a random number from 0-3
    // if number = 0 then item is salad
    // if number = 1 then item is soup
    // if number = 2 then item is sandwich
    // if number = 3 then item is pizza
    // retruns menu item and price
    return 0;
}

// this is the main function
int main(){
    // init the value for the tax % and the tip %
    // init these variables as doubles
    // init and dec the variables for the menu item

    // call on the function to pick a random menu item

    // tell the user what the menu item is

    // ask the user what tax % 
    // ask user what tip %
    random_item_picker();
    // perform calculations
    // calculate tax = (menu_item x user_input/100)
    // calculate tip = (menu_item x user_input/100)
    // add all together total = menu_item + tax + tip
    //print the total
    return 0;
}