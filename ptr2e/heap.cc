//code 5
//heap
//book: c++ in one hour, page 220

#include <iostream>
using namespace std;

int main(){
    int local = 5;
    int* pl = &local;
    
    int* heap = new int(7);
    cout << "local: "<< local << endl;
    cout << "*pl : "<< *pl << endl;
    cout << "*heap: " << *heap << endl;
    
    delete heap;
    heap = NULL;
    
    heap = new int(9);
    cout << "*heap: " << *heap << endl;
    delete heap;
    heap = NULL;
    
    return 0;
}