#include <cstdio>
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
	int N, n;
	vector<int> v;
	scanf("%d", &N);
	int a[N][N];
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			cin>>a[i][j];
		}
	}
	for (int i = 0; i < N; i++) {
		int row = i;
		int col = 0;
		while (row >= 0 && col <= i) {
			printf("%d ", a[row][col]);
			row--;
			col++;
		}	
	}

	for (int i = 1; i <= N; i++) {
		int row = N - 1;
		int col = i;
		while (col < N) {
			if (row == N - 1 && col == N - 1) {
				printf("%d", a[row][col]);
			} else {
				printf("%d ", a[row][col]);
			}
			row--; 
			col++;
		}
	}
	return 0;
}