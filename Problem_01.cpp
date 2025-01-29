// Compare Two Numbers: Write a program that compares two numbers and prints which one is larger or if they are equal.
#include <iostream>
using namespace std;

int main(){

  //  int a = 20;
  //  int b = 30;

    int a, b;
    cout << "Enter a number for A: ";
    cin>> a;
    cout << "Enter a number for B: ";
    cin>> b;

    if(a>b){
        cout << "A is greater than B" ;
    }
    else if(b>a){
        cout << "B is greater than A";
    }
    else{
        cout << "Both are Equal";
    }
    return 0;
}