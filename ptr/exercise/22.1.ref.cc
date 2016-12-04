/*

*/
#include <iostream>
using namespace std;
/*
Create a Home structure that simply contains an address (string).
*/
struct Maison{
    string address;
};

/*
Then create a Person structure containing a name (string) and a
Reference on a House.
*/
struct Person{
    string name;
    Maison& home;
};

void affiche(const Person& p){
    cout << p.name << " habite " << p.home.address << endl;
}

int main(){
    /*
Then create two different houses in the main(), then create different people Living in different houses 
(several inhabitants per house). 
    */
    /*
The main difficulty lies in the fact that a reference must always refer Things: it is therefore necessary to assign the houses at the initialization.
    */
    Maison m1 = {"12 rue du chateau"};
    Person p1 = {"Pierre",m1};
    Person p2 = {"Paul",m1};
    
    Maison m2 = {"13 rue du chateau"};
    Person p3 = {"Steve", m2};
    Person p4 = {"Sofia", m2};
    /*
To finish this part: create a function that displays a person by indicating its Name and address, for example: 
        "Pierre lives in 12 rue du Château"
Show everyone in your program   
    */
    affiche(p1); affiche(p2);
    affiche(p3); affiche(p4);
    
    return 0;
}