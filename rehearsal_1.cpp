#include <iostream>
#include <string>

using namespace std;

int main(){
	string name;
	double GPA;
	
	cout << "what is your name?:\n";
	cin >> name;
	cout << "what is your GPA?:\n";
	cin >> GPA;
	if (GPA >= 3.50){
    cout << name+"InW Jrim Jrim!!!";}
	else{
	cout << "Try harder,"+name+"!!!";}
	return 0;
}

