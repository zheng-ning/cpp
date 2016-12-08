#include <iostream>
#include <vector> //to use vector
using namespace std;

int main(){
	//5 ways to initial vector
	//initial empty
	vector<int> tab1;
	//initial with list
	vector<int> tab2 = {20,35,26,38,22};//classic way
	vector<int> tab2_alt({20,35,26,38,22});//c++11 way
	//sized but no elements
	vector<int> tab3(5);
	//sized and initial with same value 1
	vector<int> tab4(5, 1);//size is 5, with a same value 1
	//make a copy of another vector
	vector<int> tab5(tab3);//vector<type> identifier(reference);
	vector<int> tab5_alter = tab2; //? alter way valid? yes it compiles
	
	/*
	//iterate through vector
	//modify elements, to read values in
	for(auto& el : tab3){ // you gonna modify elements, add &
		cout << "enter the elements:" << endl;
		cin >> el;
	}
	//print elements
	cout << "the vector: " << endl;
	for(auto e:tab3){ //print elements
		cout << e << " ";
	}
	cout << endl; //c++11 standard
	//methods
	cout << "the 1st element is: " <<tab3.front() << endl;
	cout << "the last element is: " << tab3.back() << endl;

	for(int i=0;i<tab5.size();i++){ //classic tradition loop over
	//for(size_t i(0); i<tab5.size();i++){
	//althernative way use size_t type, which is positive int
	// same as unsigned int
		cout << "element: " << endl;
		cin >> tab5[i];
	}
	for(size_t i = 0; i < tab5.size();i++){
		cout << "#" <<i + 1 << ":" << tab5[i] << " ";
	}
	cout << endl; 
	*/

	//test functions
	cout << "is tab1 empty? " << tab1.empty()<<endl;
	cout << "size of vector you want: ";
	int size=0;
	cin >> size;
	for (int i=0;i<size;i++){
		cout << "element: ";
		int element(0);
		cin >> element;
		tab1.push_back(element);
		cout << endl << " empty? " << tab1.empty() << endl;
	}
	
	cout << endl << "size after typein: " << tab1.size() << endl;
	for(auto e:tab1){ //print vector tab1
		cout << e << " ";
	}
	cout << endl;

	//minus elements
	cout << "size: " << tab1.size() << endl;
	tab1.pop_back();
	cout << " after pop_back(), size: " << tab1.size() << endl;
	tab1.clear();
	cout << "size after clear: " << tab1.size() << endl;
	cout << "empty after clear? " << tab1.empty() << endl;

	vector<int> tab6(5);
	cout << " inital only size, empty? " << tab6.empty() << endl;
	


}
