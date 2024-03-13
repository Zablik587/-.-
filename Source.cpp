#include <cstdlib>
#include <iostream>
#include <cmath>
using namespace std;
int main() {
	setlocale(LC_ALL, "ru-RU");
	cout << "¬ведите число: ";
	int z;
	cin >> z;
	for (int j = 1; j < 10000; j++) {
		double d = z - j * j;
		if (d >= 0) {
			d = (double)sqrt(d);
			if ((fmod(d, 10) != 0) and (((((int)d) * ((int)d)) + j * j) == z))
				cout << "„исло можно представить в виде: " << (int) d << "^2 + " << j << "^2" << endl;
		}
	}
	return 0;
}