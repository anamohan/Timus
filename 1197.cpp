#include <cstdio>
#include <iostream>

using namespace std;

int main() {
	int x[] = {2, 2, -2, -2, 1, 1, -1, -1};
	int y[] = {-1, 1, -1, 1, 2, -2, 2, -2};

	int N, m, n;
	scanf("%d", &N);

	while (N--) {
		char c;
		cin>>c>>n;
		m = c- 'a' + 1; 
		int res = 0;
		for (int i = 0; i < 8; i++) {
			int row = m + x[i];
			int col = n + y[i];
			if (row >= 1 && row <= 8 && col >= 1 && col <= 8) {
				res++;
			}
		} 
		printf("%d\n", res);
	}
	
	return 0;
}