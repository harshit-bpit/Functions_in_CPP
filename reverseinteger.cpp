#include <iostream>
using namespace std;
int main () {

    int x;
    cout << "enter the number whose reverse you want : ";
    cin >> x; 
    int ans = 0;

    while(x != 0){

        int digit = x % 10;

        
        ans = (ans*10) + digit;
        x=x/10;
    }
    cout<< "the reverse of the number is "<<ans;
        
}
