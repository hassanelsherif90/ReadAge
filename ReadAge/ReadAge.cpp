#include <iostream>
#include <string>
using namespace std;

int ReadAge() {
	int Age;
	cout << "Please Enter Your age " << endl;
	cin >> Age;
	return Age;
}
bool CheckAgeFromTo(int Age, int From, int To){
	return (Age >= From && Age <= To);
}

void PrintResult(int Age){

	if (CheckAgeFromTo(Age, 18, 45) ){
		cout << Age << "is valid" << endl;
	}
	else {
		cout << Age << "is invalid " << endl;
	}

}
int main() {
	PrintResult(ReadAge());
	return 0;
}