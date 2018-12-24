#include <iostream>

int main() {
	long sum = 0;
	for (int i = 1; i < 1000; i++) {
		if (i % 5 == 0 || i % 3 == 0) {
			std::cout << i << std::endl;
			sum += i;
		}
	}
	std::cout << "Sum: " << sum << std::endl;
	return 0;
}
