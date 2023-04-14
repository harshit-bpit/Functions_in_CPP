# include <iostream>
using namespace std;

int addition(int a,int b){
cout << a+b << endl;

}

int main(){
    addition (5,3);
    addition(1000,1000);

    int num1,num2;

    cout << "enter the value of 1st number : ";
    cin >> num1;

    cout << "enter the value of 2nd number : ";
    cin >> num2;

    addition(num1,num2);

    int result1;
    cout << "result 1 gives :";
    result1 = addition(64,7);

   // result1 = addition(64,7);
    //cout << "result 1 is : "<< result1 << endl;  

    return 0;
    /*The error in this code is that the addition() function is not returning
    anything. 
    Instead, it is printing the sum of a and b directly to the console using
     the cout statement.

In the main() function, the line result1 = addition(64,7); assigns the value 
returned by addition() to result1. However, since addition() is not returning 
anything,
 result1 will contain garbage values.

To fix this error, you should modify the addition() function
 to return the sum of a and b instead of printing it to the console. 
 Then, in the main() function, you can assign the result of addition() to a 
 variable and print it to the console separately.
 Lekin yaadi hum return karvai to yeh statement to chalege but upar wali
 hatth jod legi matlab nahi chalegi is liye agar yeh chalana hai to yeh karo */
}