#include <iostream>
using namespace std;

void factorial () {
    int num;
    cout<<"enter number whose factoraial you want : ";
    cin >> num;
    int fac=1;
    for(int i = 1; i<=num; i++){
        fac = fac * i;
    }
    cout<<fac<<endl;
    
}

int main () {
 
    factorial();
    return 0;

}