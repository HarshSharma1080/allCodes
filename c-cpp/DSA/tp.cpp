#include<iostream>
using namespace std;

int sum(int n1, int n2){
    int c = n1 + n2;
    return c;
}

int main(){
    int num1 {};
    int num2 {};
    int num[] = {0};
    cout << "Enter 2 numbers to add seperated by space " << endl;

    cin >> num[0];
    cin >> num1;
    cin >> num2;

    int total = sum(num1, num2);
    cout <<" the sum of " << num1 << " and " << num2 << " is " << total << endl;
    cout << num[0] << endl;
}