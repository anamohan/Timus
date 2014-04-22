#include <iostream>
#include <cstdio>

using namespace std;

int main() {
	int n;
	while (scanf("%d", &n) == 1) {
		if (n >=1 && n <= 4) {
			printf("few\n");
		} else if (n <= 9) {
			printf("several\n");
		} else if (n <= 19) {
			printf("pack\n");
		} else if (n <= 49) {
			printf("lots\n");
		} else if (n <= 99) {
			printf("horde\n");
		} else if (n <= 249) {
			printf("throng\n");
		} else if (n <= 499) {
			printf("swarm\n");
		} else if (n <= 999) {
			printf("zounds\n");
		} else printf("legion\n");
	}
	return 0;
}