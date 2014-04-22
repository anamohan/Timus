#include <cstdio>
#include <iostream>

using namespace std;

int main() {
	int N;
	scanf("%d", &N);
	int num = 1;
	int a[N][N];
	for (int i = N - 1; i >= 0; i--) {
		int row = 0;
		int col = i;
		while (col < N) {
			a[row][col] = num;
			num++;
			row++;
			col++;
		}
	}
	for (int i = 1; i < N; i++) {
		int row = i;
		int col = 0;
		while (row < N) {
			a[row][col] = num;
			num++;
			row++;
			col++;
		}
	}

	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N ; j++) {
			printf("%d ", a[i][j]);
		}
		printf("\n");
	}

	return 0;

}