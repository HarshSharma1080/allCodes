#include<stdio.h>
#include<iostream>
#include<stdlib.h>
struct rectangle{
    int length;
    int breadth;
};
int main(){
    struct rectangle *p;
    struct rectangle *p1;

    p = (struct rectangle *)malloc(sizeof(struct rectangle)); /// allocation of heap using C syntax.
    p1 = new rectangle;  /// allocation of heap using C++ syntax. 

    p -> length = 4;
    p -> breadth = 8;

    p1 -> length = 10;
    p1 -> breadth = 20;

    printf("%d\n", p -> length);
    printf("%d\n", p -> breadth);

    printf("%d\n", p1 -> length);
    printf("%d\n", p1 -> breadth);
}