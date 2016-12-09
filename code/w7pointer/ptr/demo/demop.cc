/*
file: demop.cc
//demo-op(erators)
book: c++ how to program, page 349
this programm demonstrates the & and * pointer operators.
*/
#include <iostream>
using namespace std;

int main(){
    int a;
    int* ap; // ap is a pointer to a
    
    a=7;
    ap = &a;
    cout << "the address of a is: " << &a << endl
    << "the value of ap is: " << ap << endl;
    cout << "the value of a is: " << a << endl
    <<"the value of *ap is " << *ap << endl;
    cout << "showing * and & are inverse of each other: &*ap = "
    << &*ap << endl << " *&ap = " << *&ap << endl;
}