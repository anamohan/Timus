#include <cstdio>
#include <iostream>

using namespace std;

int main() {
	int n;
	scanf("%d", &n);
	int sum = 0;
	for (int i = 1; i <= n; i++) {
		if (i % 2 == 0) {
			sum += i;
		} else {
			sum -= i;
		}
	}
	if (sum % 2 == 0) {
		printf("black\n");
	} else {
		printf("grimy\n");
	}
	return 0;
}