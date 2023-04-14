#include <iostream>
using namespace std;

void printname() {
    int n ;
    cout << "enter the value of n : "; 
    cin >> n;
    for (int i = 0; i<n; i++){
        cout << "Harshit"<<endl;
    }
}

int main () {
    // calling a function also known as invoking a function
    printname();
    printname();  //function can be called multiple times
    printname();
    
    return 0;
}