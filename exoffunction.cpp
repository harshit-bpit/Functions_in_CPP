#include <iostream>
using namespace std;

int n = 76;

void marks(int n){

    cout << "your marks are: "<< n << endl;

}

int main () {

    int b = 85;

    int c = 97;

    marks(b);

    marks(c);

    int d;
     
    marks(d=78);

    return 0;
}