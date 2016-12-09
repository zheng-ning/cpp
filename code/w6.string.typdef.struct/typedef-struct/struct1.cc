//struct code 1
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
    Personne p1;
    Personne ute1 = {"Dupond",.75,41,'M'};
    //p1={"Dupond",.75,41,'M'}; only allowed in c++11
    p1.taille = 1.75;
}