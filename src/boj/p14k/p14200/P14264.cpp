#include <iostream>
#include <cmath>
using namespace std;
double l;
int main(void) {
	cin >> l;
	double result = l * l * sqrt(3) / 4;
	printf("%.10lf\n", result);
}
