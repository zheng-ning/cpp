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
    
    print(p1);
    print(p2);
    
}