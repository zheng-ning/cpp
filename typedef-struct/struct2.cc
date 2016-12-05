//struct code 2
#include<iostream>
#include<vector>
using namespace std;

struct Date{
    int jour;
    int mois;
    int anne;
};
struct Personne{
    string nom;
    double taille;
    int age;
    char sexe;//m or f
};

int main(){
    //
    Personne p1 = {"Dupond",.75,41,'M'};
    //p1={"Dupond",.75,41,'M'}; only allowed in c++11
    
    Personne p2 = p1;
    p2.nom = p1.nom;
    p2.taille = p1.taille;
    p2.age = p1.age;
    p2.sexe = p1.sexe;
    
    //p1 == p2; not allowed
    //cout << p1 <<endl; not allowed
}