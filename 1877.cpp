#include <cstdio>
#include <iostream>
#include <cstdlib>

using namespace std;

int main() {
	char s[5];
	int m, n;

	scanf("%s", s);
	m = atoi(s);

	scanf("%s", s);
	n = atoi(s);

	if (m % 2 == 0 || n % 2 == 1) {
		puts("yes\n");
	} else puts("no\n");
	return 0;
}