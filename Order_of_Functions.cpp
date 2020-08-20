#include <iostream>
// Just to test the comment

void doPrint()
{
	std::cout << "I am inside doPrint function";
}

int main ()
{
	std:: cout << "This is the first function that's is going to be executed.";
	doPrint();
	std::cout << "I will print after the doPrint()";
	return 1;
}

