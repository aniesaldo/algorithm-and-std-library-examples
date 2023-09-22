//Basic usecase of funcPtr based on the program behaviour
#include <iostream>
#include <functional>
#include <array>

void print1(int a) {
	std::cout << "Val: " << a * 10 << std::endl;
}

void print2(int a) {
	std::cout << "Val: " << a * 20 << std::endl;
}

void print3(int a) {
	std::cout << "Val: " << a * 30 << std::endl;
}

int main() {
	//std::array<void(*)(int), 3> arr{print1, print2, print3};
	void(*arr[3])(int);
	arr[0] = print1;
	arr[1] = print2;
	arr[2] = print3;
	int n;
	std::cout << "ENter n: ";
	std::cin >> n;
	std::function<void(int)> fp;
	switch (n) {
	case 1:
		fp = arr[0];
		break;
	case 2:
		fp = arr[1];
		break;
	case 3:
		fp = arr[2];
		break;
	default:
		;
	}
	fp(10);
	return 0;
}