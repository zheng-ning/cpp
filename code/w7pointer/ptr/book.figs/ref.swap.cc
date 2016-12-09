/*
File: swap.cc
Book: Programming Abstractions in C++, page 495.
-------------------
This program illustrates the use of call by reference to exchagne the value of two integers.
*/
#include <iostream>
using namespace std;

/*function prototype */
void swap(int& x, int& y);

/* main program */
int main(){
    int n1, n2;
    cout << "Enter n1: ";
    cin >> n1;
    cout << "Enter n2; ";
    cin >> n2;
    if (n1>n2) swap(n1,n2);
    cout << "the range is " << n1 << " to " << n2 << "." << endl;
    return 0;
}

/*
function: swap
usage: swap(x,y)
-------------------
exchage the value of x and y. the arguments are passed by reference and can therefore by modified.
*/
void swap(int& x, int& y){
    int tmp = x;
    x = y;
    y = tmp;
}