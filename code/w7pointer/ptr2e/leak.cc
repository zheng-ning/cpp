//code 6
//heap
//book: book:c++ in one hour page 221

#include <iostream>
using namespace std;

int main(){
    
    int* heap = new int(7);
    cout << "*heap: " << *heap << endl;
    //we don't put delete here, and a memory leak is made
    //delete heap;
    cout << "memory leak!"<<endl;
    //heap = NULL;
    
    //reallcate
    heap = new int(9);
    cout << "*heap: " << *heap << endl;
    delete heap;
    //heap = NULL;
    
    return 0;
}