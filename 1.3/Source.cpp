#include <iostream> 
#include <boost/random.hpp>
#include <ctime>

using namespace boost;

#define ELEMENTS_NUMBER 50

int main() {	
	int t [ELEMENTS_NUMBER];
	for (int i = 1; i <= ELEMENTS_NUMBER; i++ ) {
		t[i-1] = i;
	}

	mt19937 rng;
	rng.seed(static_cast<unsigned> (std::time(0)));
	random::uniform_int_distribution<> random(1, ELEMENTS_NUMBER);
	int j = 1;
	for (int i = 1; i <= ELEMENTS_NUMBER; i++) {
		j = random(rng);
		std::swap(t[i-1], t[j-1]);
	}

	for (int i = 1; i <= ELEMENTS_NUMBER; i++) {
		std::cout << t[i-1] << ' ';
	}

	return 0;
}