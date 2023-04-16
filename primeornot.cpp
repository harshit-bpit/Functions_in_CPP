#include <iostream>
using namespace std;

bool primeornot(int n) {
    if (n < 2) {
        return false;
    }
    for (int i = 2; i < n; i++) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}


int main() {
    int n;
    cout<<"enter a number"<<endl;
    cin>> n;
    bool prime=primeornot(n);
    if(prime){
        cout<<"number entered is prime\n";
    }
    else{
        cout<<"not a prime number\n";
    }
    return 0;
}