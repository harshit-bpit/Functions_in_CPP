#include <iostream>
using namespace std;

int sumofeven(){
    int n;
    int sum;
    sum=0;
   cout<<"enter number till you want counting of even numbers: ";
   cin>>n;

   for(int i=1;i<=n;i++){

    if(i%2==0){
        
        sum=sum+i;
    }

    
   }
   
   cout << sum << endl; 

}


int main() {
    sumofeven();
    return 0;
}