#include <cstdio>
#include <iostream>
#include <map>

using namespace std;

int main() {
	int n, m;
	map<int, int> numbers;
	map<int,int>::iterator it;
	for (int i = 0; i < 3; i++) {
		scanf("%d", &n);
		for (int j = 0; j < n; j++) {
			scanf("%d", &m);
			if (numbers.count(m) > 0) {
				numbers[m] = numbers[m] + 1;
			} else {
				numbers[m] = 1;
			}
		}
	}
	int res = 0;
	for (it = numbers.begin(); it != numbers.end(); ++it) {
		if (it->second == 3) {
			res++;
		}
	}
	printf("%d\n", res);
	return 0;
}