#include <iostream>
#include <array>//include array lib
using namespace std;

int main(){
	//declare not initial
	array<double, 3> tab;
	//declare and initial with c11 syntax
	array<int, 3>ages(
		{20,35,26}
	);
	//declare and initial with classic sytax
	array<int, 3>ages2 = {20,35,26};

	array<int, 3>ages3;
	//do a copy
	ages3=ages2;
	
	//two dimensional array
	array<array<int,3>,4> matrix =
	{
		0,1,2,
		3,4,5,
		6,7,8,
		9,0,1
	};
	for(auto line:matrix){
		for(auto element:line){
			cout << element << " ";
		}
		cout << endl;
	}

	//test ()assignment
	//it compiled!
	array<array<int,2>,2> m2 (
		{
		 0,1,
		 1,2
		}
	);
}
