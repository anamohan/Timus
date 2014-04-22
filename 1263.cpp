#include <cstdio>
#include <iostream>
#include <map>

using namespace std;

int main() {
	int numCandidates, numPeople, n;
	map<int, int> voteMap;
	scanf("%d %d", &numCandidates, &numPeople);
	for (int i = 1; i <= numCandidates; i++) {
		voteMap[i] = 0;
	}
	for (int i = 0; i < numPeople; i++) {
		scanf("%d", &n);
		voteMap[n]++;
	}
	for (int i = 0; i < numCandidates; i++) {
		double percent = (voteMap[i + 1] + 0.0) / (numPeople + 0.0);
		percent *= 100;
		printf("%.2f", percent);
		cout<<"%"<<endl;
	}
	return 0;
}