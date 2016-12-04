//leak.cc
//demonstrate memory leak
//book:c++ in one hour page 221

#include <iostream>
using namespace std;

int main(){
    
    int* px = new int;
    *px = 3;
    //!!!leaks here
    //should add before next allocate
    //delete px;
    px = new int;
    *px = 5; 
    delete px;
    
    return 0;
}
