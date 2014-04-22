#include <cstdio>
#include <iostream>
#include <vector>

using namespace std;

int main() {
	int N, m;
	vector<int> seq, nums, counts;
	scanf("%d", &N);
	int a[N];
	while (N--) {
		scanf("%d", &m);
		seq.push_back(m);
	}
	int count = 1, candidate = seq[0];
	for (int i = 1; i < seq.size(); i++) {
		if (candidate == seq[i]) {
			count++;
		} else {
			nums.push_back(candidate);
			counts.push_back(count);
			count = 1;
			candidate = seq[i];
		}
	}
	nums.push_back(candidate);
	counts.push_back(count);

	for (int i = 0; i < counts.size(); i++) {
		printf("%d %d ", counts[i], nums[i]);
	}
	return 0;
}