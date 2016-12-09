#include <iostream>
#include <vector>
using namespace std;

//vector only compilable by c++11

int main(){
	//
	vector<vector<int>> tab(
		{ {0,1,2,3,42},
		  {4,5,6	 },
	  	  {7,8,		 },
		  {9,0,1	 } }
	);
	//
	for(auto line:tab){
		for(auto element:line){
			cout << element << " ";
		}
		cout << endl;
	}
	//

}
