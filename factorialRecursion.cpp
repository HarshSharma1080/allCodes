#include<iostream>
using namespace std;
int factorial(int n){
    if(n <= 1) return 1;
    return n*(factorial(n-1));
}
int main(){
    cout << factorial(6) << endl;
    cout << "Hello this change was made in the newBranch, So you won't see this in the main branch" << endl;
    cout << "but now the main and the newBranch is merged so you are seeing this line here" << endl;
    
}