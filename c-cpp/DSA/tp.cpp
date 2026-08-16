#include<iostream>
using namespace std;
struct rectangle {
    int length;
    int breadth;
};
int main(){
    struct rectangle r1;
    r1.length = 8;
    r1.breadth = 11;

    struct rectangle *p = &r1;
    cout << "the length is: " << p -> length << endl;
    cout << "the breadth is: " << p -> breadth << endl;

    struct rectangle *ptr;
    ptr = (struct rectangle*)malloc(sizeof(struct rectangle));
    ptr -> length = 111;
    ptr -> breadth = 222;
    cout << ptr -> length << endl;
    cout << ptr -> breadth << endl;

}
