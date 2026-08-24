#include<iostream>
using namespace std;
void swap(int *x, int *y){
    cout << "x: " << *x << " y: " << *y << endl;
    int temp = *x;
    *x = *y;
    *y = temp;
    cout << "x: " << *x << " y: " << *y << endl;
}
int main(){
    int a, b;
    a = 10;
    b = 20;
    cout << "a: " << a << " b: " << b << endl;
    swap(&a, &b);
    cout << "a: " << a << " b: " << b << endl;


}

