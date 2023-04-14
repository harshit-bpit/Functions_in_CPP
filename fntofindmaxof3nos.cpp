#include <iostream>
using namespace std;

int max (int a , int b , int c){
    if (a>b && a>c){
        cout << a << " is max ";
    }
    else if (b>a && b>c) {
        cout << b << " is max";
    }
    else if(c>a && c>b){
        cout << c << " is max";
    }
    else{
        cout << "two or more than two numbers are max so kindly change";
     } 

}

int main (){
    int x,y,z;

    cout << "enter 1st no.: ";
    cin >> x;

    cout << "enter 2nd no. : ";
    cin >> y;

    cout << "enter 3rd no. : ";
    cin >> z;

    cout<<"max of these 3 numbers is : ";
    max(x,y,z);

}