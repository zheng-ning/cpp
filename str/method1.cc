//string equal testing
////string code 5
#include <iostream>
#include <string> //need to include
using namespace std;

int main(){
    //
    string name = "Sarah";
    for(int i=0;i<name.size();i++){ //size method
        cout << name[i] << endl;
    }
    
    //the following methods use the same ex string
    string ex("abcd");
    
    ex.insert(1,"xx"); //insert method, 
    //insert "xx" from the 1st position
    cout << ex << endl;
    
    ex.replace(1,2,"1234");//replace(position,n,str)
    //replace from 1st, replace 2 chars, with "1234"
    cout << ex << endl;
    ex.replace(1,4,"");//delete what insert
    cout << ex << endl;
    
    string e2("baabbaab");
    int l = e2.find("ab");//find method
    int r = e2.rfind("ab");//rfind
    cout << l << " " << r << endl;
    bool result = ((e2.find("xy"))!=string::npos);
    cout << e2.find("xy")<<endl;
    cout << result << endl;
    
    string ex3 = "salut a tous!";
    string sub = ex3.substr(8,4);//substr(start,length)
    cout <<sub << endl; //length, how many  chas sub take
    
    
    
}