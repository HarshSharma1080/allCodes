#include<stdio.h>
#include<stdlib.h>
void bar(){
    int nb;
    nb = 1337;
}
int *foo(){
    int *n;
    n = malloc(sizeof(int));
    *n = 42;
    return n;
}
int main(){
    int *tp;
    tp = foo();
    printf("%d\n", *tp);
    bar();
    printf("%d\n", *tp);
}