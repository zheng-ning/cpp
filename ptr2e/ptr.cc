//book: c++ how to program, page 349
//code1

#include <iostream>
using namespace std;

int main(){
    int x=7;
    int* px = &x;
    
    cout << "x: "<< x << endl;
    cout << "address of x: "<< &x << endl;
    
    cout << "a pointer to x, px: " << px << endl;
    cout << "the value point to: " << *px << endl;
}