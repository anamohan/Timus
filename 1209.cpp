#include <cstdio>
#include <iostream>
#include <cmath>

using namespace std;

long N, digit;

int getDigit(long digit) {
	long double num =  sqrtl(8 * (double)digit - 7);
	return (num == (long)num) ? 1 : 0;
}

int main() {
	scanf("%d", &N);
	
	while (N--) {
		scanf("%ld", &digit);
		if (getDigit(digit)) {
			printf("1 ");
		} else {
			printf("0 ");
		}
	}
	return 0;
}