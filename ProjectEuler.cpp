#include <iostream>

int problem1() {
	int sum{ };

	for (int i = 1; i < 1000; i++) {
		if (i % 3 == 0 || i % 5 == 0) {
			sum += i;
		}
	}

	return sum;
}

int problem2() {
	int firstTerm{1};
	int secondTerm{2};
	int nextTerm{ };
	int sum{ };

	while (secondTerm <= 4000000) {
		if (secondTerm % 2 == 0) {
			sum += secondTerm;
		}
		nextTerm = firstTerm + secondTerm;
		firstTerm = secondTerm;
		secondTerm = nextTerm;
	}
	return sum;
}



int main() {
	std::cout << "The solution to problem 1 is: " << problem1();
	std::cout << "\nThe solution to problem 2 is: " << problem2();

	return 0;
}