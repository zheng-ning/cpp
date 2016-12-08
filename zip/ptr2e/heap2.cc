//code 5.1
//heap
//book: c++ in one hour, page 220

#include <iostream>
using namespace std;

int main(){
    
    int* heap = new int(7);
    cout << "value of heap after allocate" <<endl;
    cout << "*heap: " << *heap << endl;
    
    delete heap;
    cout << "value of heap after delete: ";
    cout << *heap << endl;
    cout << "value of heap after assign to NULL: ";
    heap = NULL;
    //cout << *heap << endl; //Segmentation fault (core dumped)
    
    //reallcate
    heap = new int(9);
    cout << endl;
    cout << "*heap: " << *heap << endl;
    delete heap;
    //cout << "value of heap after delete: "<<*heap<<endl;
    heap = NULL;
    
    return 0;
}