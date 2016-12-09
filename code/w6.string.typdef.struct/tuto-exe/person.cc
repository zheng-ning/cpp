//string tuto
#include <iostream>
#include <vector>
using namespace std;

//create a struct with 3 fileds
struct Person{ 
	double height;
	int age;
	char gender;
};

//function to print struct Person
//just a prototype here
void print_person(Person const& p);//we use const because we do not want to modify the Person struct passed in
//we pass by reference to invoid copy big struct
// -------------------
//this works too
//print_person(Person p);

//function proto of born and birthday
Person born();
void birthday(Person& p);

int main(){
	//
	Person jo = born();
	print_person(jo);
	
	//one year later
	birthday(jo);
	cout << "one year later..."<<endl;
	print_person(jo);
	//	
}

void print_person(Person const& p){
	cout << "heignt: " << p.height << endl;
	cout << "age: " << p.age << endl;
	cout << "gender: " << p.gender << endl<<endl;
}

//body of born and birthday
void birthday(Person& p){
	(p.age)++;
}
Person born(){
	Person p;
	
	cout << "height: ";
	cin >> p.height;
	cout << "age: ";
	cin >> p.age;
	cout << "gender: ('M' for male or 'F' for female) ";
	cin >> p.gender;

	cout << endl;
	return p;
}
