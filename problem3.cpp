#include <iostream>
#include <vector>

bool isPrime( unsigned long num ) {
	for ( unsigned long i = 2; i <= num / 2; i++) {
		if ( num % i != 0 ) {
			return false;
		}
	}
	return true;
}

int main() {
	const unsigned long target = 600851475143;

	for ( unsigned long i = target; i > 0; i-- ) {
		if ( target % i == 0 ) {
			std::cout << i << std::endl;
			if ( isPrime( i ) ) {
				std::cout << "Largest Prime Factor of " << target << ": " << i << std::endl;
				break;
			}
		}
	}

	return 0;
}
