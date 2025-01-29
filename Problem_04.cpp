// Smallest of Three Numbers: Write a program to find the smallest of three numbers

#include <iostream>

using namespace std;

int main(){

int a, b, c;
   
    cout << "Enter three number:";
    cin >> a >> b >> c;

    int smallest = a;
    if(b < smallest){
        smallest = b;
    }
    if(c < smallest){
        smallest = c ;
    }
 
    cout << "The smallest number is: " << smallest ;

    return 0;
}