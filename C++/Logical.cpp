#include<iostream>
using namespace std;

int main () {

    int a = 5, b = 9;

    // false && false = false
    cout << ((a == 0) && (a > b)) << endl;
  
    // false && true = false
    cout << ((a == 0) && (a < b)) << endl;

    // true && false = false
    cout << ((a == 5) && (a > b)) << endl;

    // true && true = true
    cout << ((a == 5) && (a < b)) << endl;


    // false && false = false
    cout << ((a == 0) || (a > b)) << endl;
  
    // false && true = true
    cout << ((a == 0) || (a < b)) << endl;

    // true && false = true
    cout << ((a == 5) || (a > b)) << endl;

    // true && true = true
    cout << ((a == 5) || (a < b)) << endl;


    // !false = true
    cout << !(a == 0) << endl;

    // !true = false
    cout << !(a == 5) << endl;




}