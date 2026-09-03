// CGT-215-Lab-03-kwon263.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

void printMenu(int& choice) {
	cout << "Welcome to my program, please select an operation to perform:" << endl;
	cout << "1. Addition" << endl;
	// Entering 1 will make the equation an addition
	cout << "2. Subtraction" << endl;
	// Entering 2 will make the equation a subtraction
	cout << "3. Multiplication" << endl;
	// Entering 3 will make the equation a multiplication
	cout << "4. Division" << endl;
	// Entering 4 will make the equation a division
	cout << "\nYour Selection: ";
	cin >> choice;
}
void getChoices(float& A, float& B) {
	cout << "Please enter the first value: ";
	cin >> A;
	// Entering the first value will be the first number used in the equation
	cout << "Please enter the second value: ";
	cin >> B;
	// Entering the second value will be the second number used in the equation
	
}
void firstChoice(float A, float B) {
	cout << "\n" << A << " + " << B << " = " << A + B << endl;
	// Equation for the addition
}
void secondChoice(float A, float B) {
	cout << "\n" << A << " - " << B << " = " << A - B << endl;
	// Equation for the subtraction
}
void thirdChoice(float A, float B) {
	cout << "\n" << A << " * " << B << " = " << A * B << endl;
	// Equation for the multiplication
}
void fourthChoice(float A, float B) {
	cout << "\n" << A << " /  " << B << " = " << A / B << endl;
	// Equation for the division
}
int main() {
	int choice;
	float A;
	float B;
	printMenu(choice);
	getChoices(A, B);
	if (choice == 1) {
		firstChoice(A, B);
		// This will store the numbers for choice 1 and put the numbers in addition
	}
	if (choice == 2) {
		secondChoice(A, B);
		// This will store the numbers for choice 2 and put the numbers in subtraction
	}
	if (choice == 3) {
		thirdChoice(A, B);
		// This will store the numbers for choice 3 and put the numbers in multiplication
	}
	if (choice == 4) {
		fourthChoice(A, B);
		// This will store the numbers for choice 4 and put the numbers in division
	}
	return 0;
}
// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
