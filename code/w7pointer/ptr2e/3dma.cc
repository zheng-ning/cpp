//3 ways of dynamic memory allocation
//code 4
#include <iostream>
using namespace std;

int main(){
    int* px = NULL;//or nullptr, but need to compiled in -std=c++11
    //declare, allocate, assign
    px = new int;
    *px = 10;
    cout << *px << endl;
    delete px;
    px = NULL;
    
    int* px1 = NULL;//int px(nullptr);
    px1 = new int(3); //declare, allocate and assign
    cout << *px1 << endl;
    delete px1;
    px1 = NULL;
    
    int* px2 = new int(5);//declare allocate assign at same line
    cout << *px2 << endl;
    delete px2;
    px2=NULL;
}