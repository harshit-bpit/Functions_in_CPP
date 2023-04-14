#include <iostream>
using namespace std;
int count() {
    int n;
    cout<<"Enter the number till you want counting :"<<endl;
    cin>> n;

    for(int i=1; i<=n; i++) {
        cout<< i <<endl;
    }
}


int main () {
    count();
    return 0;

}