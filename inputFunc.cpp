#include <iostream>
#include <string>
using namespace std;

string input1(string Sentence){
	cout<<Sentence<<endl;
	
	string name;
	cin>>name;
	
	return name;
}

int main(){
	string name;
	
	name = input1("Enter your name: ");
	cout<<"Welcome here Mr. "<<name<<endl;
	
	return 0;
}
