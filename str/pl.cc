//string concatenation, plural
////string code 3
#include <iostream>
#include <string> //need to include
using namespace std;

int main(){
    
    int n;
    cout << "How many cats there: ";
    cin >> n;
    
    string c = "cat";
    if(n>1){
        c = c+'s';
    }
    cout << "there are " << n << " " << c << endl;
}