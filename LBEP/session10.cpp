#include <stdio.h>
#include <iostream>

int main(){
	int x = 10;
	int *p;

	std::cout << x;
	printf("\n");
	std::cout << &x;
	printf("\n");

	p = &x;
	std::cout << p;
	printf("\n");
	std::cout << *p;
	printf("\n");

	(*p) = 0; // x++;
	std::cout << x;
	
	printf("\n");
	return 0;
}