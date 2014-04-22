#include <iostream>
#include <cstdio>
#include <vector>
#include <cmath>
#include <iomanip>

using namespace std;

int main() {
	vector<double> v;
	double n;
	while (cin>>n) {
		v.push_back(n);
	}
	for (int i = v.size() - 1; i >= 0; i--) {
		cout<<setprecision(4)<<fixed<<sqrt(v[i])<<endl;
	}
	return 0;
}