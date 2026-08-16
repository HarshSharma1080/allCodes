#include<stdio.h>
struct rectangle{
    int length;
    int breadth;
};
int main(){
    struct rectangle r1={4,6};
    struct rectangle *ptr = &r1;

    printf("%d\n", (*ptr).length);//method 1 of accessing structure using pointer  /////
    //(we use brackets because the dot operator has more precedence than the astirisk(*))

    printf("%d\n", ptr->breadth);  /////  method 2 of accessing structure using pointer /////



}