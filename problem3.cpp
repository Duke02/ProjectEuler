/*
	This problem has not been checked to see if it will actually work or give the actual results.
	It is a solution that has not been optimized at all, thus the O(n^2) solution.
	This solution has not been researched for better ways of programming, which is a goal.
	There will likely be another solution that has been researched.
*/

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
