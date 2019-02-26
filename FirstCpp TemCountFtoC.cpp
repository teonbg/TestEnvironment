// Written by Teo Tashev
// Converts temperature from Fehrenheit to Celsius
// Gets User input (in F) and uses a formula to
// convert the user input from F to Celsius and displays
// it through cout to the console.

#include <iostream>

int main(int argc, char const *argv[]) {
	int F;
	int Cel;
		std::cout << "==========================\n";
		std::cout << "Enter temperature in F:";
		std::cin >> F;
		Cel = (F - 32)*5/9;
		std::cout << "In celsius the temp is:";
		std::cout << Cel << "\n";
		std::cout << "==========================\n\n";

	return 0;
}
