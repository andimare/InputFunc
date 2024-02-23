#include <iostream>
#include <sstream>
#include <string>
using namespace std;

string inputstr(string Sentence){
	cout<<Sentence<<endl;
	
	string var;
	cin>>var;
	
	return var;
}

int inputi(string Sentence){
	stringstream giik;
	string var;
	int num;
	
	cout<<Sentence<<endl;
	cin>>var;
	
	giik<<var;
	giik>>num;
	
	return num;
}

int main(){
	string name;
	int age = 0;
	
	name = inputstr("Enter your name: ");
	age = inputi("Enter your age: ");
	
	cout<<"Welcome here Mr. "<<name<<endl;
	cout<<"Next year you will be "<<age+1<<" years old."<<endl;
	
	return 0;
}
