#include <cstdio>
#include <iostream>
#include <vector>

using namespace std;

int main() {
	int n, m, max = 0, index = 0;
	scanf("%d", &n);
	vector<int> v(n);
	for (int i = 0; i < n; i++) {
		cin>>v[i];
	}
	for (int i = 0; i < n - 2; i++) {
		int sum = v[i] + v[i + 1] + v[i + 2];
		if (sum > max) {
			max = sum;
			index = i + 2;
		}
	}
	printf("%d %d\n", max, index);
	return 0;
}