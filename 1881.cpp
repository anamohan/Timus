#include <cstdio>
#include <iostream>
#include <string>


using namespace std;


int main() {
	int h, w, n;
	scanf("%d %d %d", &h, &w, &n);
	string a[n];
	for (int i = 0; i < n; i++) {
		cin>>a[i];
	}
	int i = 0, pageNum = 1, wordsOnLine = 0, lineNum = 1;
	while (i < n) {
		if (wordsOnLine == 0) {
			wordsOnLine = a[i].length();
			i++;
		} else {
			// not a first word add a space also
			if (wordsOnLine + a[i].length() + 1 <= w) {
				wordsOnLine += a[i].length();
				wordsOnLine++;
				i++;
			} else {
				wordsOnLine = 0;
				lineNum++;
			}
		}
		if (lineNum > h) {
			pageNum++;
			lineNum = 1;
		}

	}
	printf("%d\n", pageNum);
	return 0;
}