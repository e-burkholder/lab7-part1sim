#include <iostream>
#include <cmath>
#include <ctime>
#include <cstdlib>
using namespace std;

int main() {
	//every second run a sim that picks an int (-1 to 1) and adds to regular coordinates
	//run for 120 seconds
	int step, x=0, y=0;

	srand(time(0));

	for (int i = 1; i <= 10; i++) {
		for (int a = 1; a <= 120; a++) {
			step = rand() % 9+1;

			switch (step) {
			case (1): (--x, y++); break;
			case (2): (--x, y); break;
			case (3): (--x, y--); break;
			case (4): (x, y); break;
			case (5): (x, y++); break;
			case (6): (x, y--); break;
			case (7): (x++, y); break;
			case (8): (x++, y++); break;
			case (9): (x++, y--); break;
			}
			
		}
		cout << "Drunkard #"<< i << ": finished at location ("<< x << ", " << y << ")\n";
	}

	return 0;
}