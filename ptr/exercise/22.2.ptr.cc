/*
limitation of reference:
The framework chosen here also illustrates the limits of the references: with this implementation,
Impossible for a person to move: one can not in fact "change the reference".
*/
/*
In short: implement a second version of the program in which you move
At least one person.
Make sure that other people at the same (old) address do not
Relocated (which would be the case with references).
*/
#include <iostream>
using namespace std;

struct Maison{
    string address;
};
struct Person{
    string name;
    Maison* home;
};
void affiche(const Personne& p){
    cout << p.name << " habite " << (*(p.home)).address << endl;
}

int main(){
    //
    Maison m1 = {"12 rue du chateau"};
    Person p1 = {"Pierre",&m1};
    Person p2 = {"Paul",&m1};
    
    Maison m2 = {"13 rue du chateau"};
    Person p3 = {"Steve", &m2};
    Person p4 = {"Sofia", &m2};
    
    affiche(p1); affiche(p2); affiche(p3); affiche(p4);
    
    //Moving Pierre (p1)
    p1.home = &m2;
    cout << "maintenant : "; //now
    affiche(p1); affiche(p2); affiche(p3); affiche(p4);
    
    return 0;
}