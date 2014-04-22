#include <cstdio>
#include <iostream>
#include <vector>

using namespace std;

int main() {
	int n, k, m;
	scanf("%d %d", &k, &n);
	vector<int> v;
	while (cin>>m) {
		v.push_back(m);
	}
	
	int res = 0;
	for (int i = 0; i < v.size(); i++) {
		int cars = res + v[i];
		res = cars - k;
		if (res < 0) {
			res = 0;
		}
	}
	printf("%d\n", res);
	return 0;
}