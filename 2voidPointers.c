#include<stdio.h>

void printData(void *data, char type){
    if(type == 'i') printf("int = %d\n", *((int*)data));
    else if(type == 'f') printf("float = %f\n", *((float*)data));
    else if(type == 'c') printf("char = %c\n", *((char*)data));
}


int main(){
    int value = 42;
    

    printData(&value, 'i');
    printData(&value, 'f');
    printData(&value, 'c');


}