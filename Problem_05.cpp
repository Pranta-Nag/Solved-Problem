// Sum of First N Numbers: Write a program that finds the sum of the first N natural numbers

#include <iostream>
 using namespace std;

 int main (){
    int n;
    int sum = 0;

    cout << "Enter Number: " ;
    cin >> n;

    for(int i = 0; i<= n; i++){
        sum = sum + i;
    }

    cout << "The Sum is : " << sum;
    return 0;
 }