#include <cstdio>
#include <iostream>

using namespace std;

int main() {
	int N;
	scanf("%d", &N);
	int sum = 0;
	if (N < 1) {
		for (int i = N; i <= 1; i++) {
			sum += i;
		}
	} else {
		for (int i = 1; i <= N; i++) {
			sum += i;
		}
	}
	printf("%d\n", sum);
	return 0;
}