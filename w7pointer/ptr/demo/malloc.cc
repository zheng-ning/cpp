//lecture demo
//dynamic memory allocation
#include <iostream>
using namespace std;

int main(){
    //
    /*
    */
    //int* px = nullptr;
    int* px = NULL;
    px = new int;
    *px = 3;
    /* 2nd version
    int* px(nullptr);
    px = new int(3);
    */
    /* 3d version
    int* px = new int(3);
    */
    
    cout << *px << endl;
    
    delete px;
    //px = nullptr;
    px = NULL;
}