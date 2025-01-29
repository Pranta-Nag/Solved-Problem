// Max of Three Numbers: Write a program that takes three numbers as input and outputs the largest one

#include <iostream>

using namespace std;

int main(){

int a, b, c;
   
    cout << "Enter three number:";
    cin >> a >> b >> c;

    int largest = a;
    if(b > largest){
        largest = b;
    }
    if(c > largest){
        largest = c ;
    }
 
    cout << "The largest number is: " << largest ;

    return 0;
}