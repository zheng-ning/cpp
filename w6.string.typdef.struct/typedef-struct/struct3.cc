//struct code 3
//return multiple values

#include<iostream>
#include<vector>
#include<array>
using namespace std;

//way 1, return struct
struct Resultat{
    int quotient;
    int reste;
};

Resultat division_euclidienne(int dividende, int diviseur);

//way2, pass value wanna change by reference
void f2(int i, int j, int& m, int& n);//

//way3, return array, you need c++11 to compile, -std=c++11
array<int,2> f3(int i, int j);

//alternative way 3
vector<int> f4(int i, int j);

int main(){
    //
}