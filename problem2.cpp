#include <iostream>

unsigned long fibonacci( unsigned long term ) {
	if ( term == 0 ) {
		return 1;
	} else if ( term == 1 ) {
		return 2;
	}
	return fibonacci( term - 2 ) + fibonacci( term - 1 );
}

int main() {
	// Just to reduce the likelihood of typos.
	const unsigned long fourMillion = 4000000;

	unsigned long long sum = 0;
	unsigned long lastFibNumber;
	unsigned long lastTerm = 0;

	do {
		lastFibNumber = fibonacci( lastTerm );
		lastTerm += 2;
		if ( lastFibNumber <= fourMillion ) {
			sum += lastFibNumber;
		}
	} while ( lastFibNumber <= fourMillion );

	std::cout << "Sum: " << sum << std::endl;

	return 0;
}
