#include <iostream>

using namespace std;

int main() {
	int i{ 0 };

	//do {
	//	cout << "Please enter a number between 1 an 10: ";
	//	cin >> i;
	//} while (i < 1 || i > 10);


	//cout << "Please enter a number between 1 and 10: ";
	//cin >> i;
	//while (i < 1 || i > 10) {
	//	cout << "Please enter a number between 1 and 10: ";
	//	cin >> i;
	//}


	int a{ 4 };
	int b{ 5 };
	int max{ (a > b) ? a : b };
	cout << max << endl;

	return 0;
}


