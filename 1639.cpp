#include <iostream>
#include <cstdio>

using namespace std;

int main() {
	int m, n;
	scanf("%d %d", &m, &n);
	int res = m*n;
	if (res % 2 == 0) {
		printf("[:=[first]\n");
	} else {
		printf("[second]=:]\n");
	}
	return 0;
}