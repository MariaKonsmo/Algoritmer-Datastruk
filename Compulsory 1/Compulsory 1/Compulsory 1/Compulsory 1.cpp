// Compulsory 1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;
int factorial(int n)
{
	if (n == 0) {
		return 1;
	}
	else {
		return n * factorial(n - 1);
	}
}

// Function to print the Fibonacci sequence up to a given number
void fibonacci(int n) {
	int a = 0, b = 1;
	cout << a << " " << b << " ";
	for (int i = 2; i < n; i++) {
		int c = a + b;
		cout << c << " ";
		a = b;
		b = c;
	}
}
int main()
{
	int n;
	cout << "enter a number: "; //Enter a non - negative number
	cin >> n;

	//calculate the factorial of the number
	int factorial_of_n = factorial(n);

	//print the factorial
	cout << "the factorial of " << n << " is " << factorial_of_n << endl;

	// Print the Fibonacci sequence up to n
	cout << "The Fibonacci sequence up to " << n << ":" << endl;
	fibonacci(n);


	return 0;
}