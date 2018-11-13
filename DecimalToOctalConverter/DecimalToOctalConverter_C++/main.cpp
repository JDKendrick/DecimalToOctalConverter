/*
  Created by: Jacob (Jake) Kendrick
*/

#include <iostream>
#include <math.h>
#include <string>

using namespace std;

int octalConverter(int &);

int main() {

	int *number = new int;

	cout << "Please input your decimal number: ";
	cin >> *number;
	cout << "Your number in Decimal is: " << *number << endl;

	octalConverter(*number);

	cout << "Your number in Octal is: " << *number << endl;

	free(number);

	return 0;
}

/*
  This function converts a int value to it's octal represenative value.  
*/
int octalConverter(int &x) {

	string str = "";
	int iterator = x;

	while (iterator > 0) {
		str = to_string(iterator % 8) + str;
		iterator = floor(iterator / 8);
	}

	x = atoi(str.c_str());

	return x;
}