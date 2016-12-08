//exercise fr.intro exercise 22.1
//alias: house1
//code2

#include <iostream>
using namespace std;

struct House{
    string address;
};
struct Person{
    string name;
    House& home;
};
void print(Person& p){
    cout << p.name <<" : "<<p.home.address<<endl;
}

int main(){
    //
    House h1={"9-1, Huanghe North Street, HuangGu"};
    House h2={"#10 building, Qianggong Street, Tiexi"};
    
    Person p1 = {"Johnny",h1};
    Person p2 = {"Gibson",h2};
    Person p3 ={"Shubo",h2};
    Person p4 = {"Imma",h1};
    
    print(p1); print(p2); print(p3);print(p4);
    
    //jo moved to tiexi
    p1.home = h2;
    cout << endl;
    cout << "Johnny moved to tiexi" << endl;
    cout << "now: "<<endl;
    print(p1);print(p2);print(p3);print(p4);
}