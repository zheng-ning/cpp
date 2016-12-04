//smart pointer
#include <iostream>
#include <memory> //where smart pointers live
using namespace std;

int main(){
    //
    unique_ptr<int> px(new int(20));
    //unique_ptr<int> px;
    //px = new int;
    //*px = 20;
    //(new int(20));
    cout <<*px << endl;
    
    /* not allowed
    unique_ptr<int> py(nullptr);
    py = new int(20);
    */
    
    /* not allowed
    unique_ptr<int> pz;
    pz = new int;
    *pz = 20;
    */
}