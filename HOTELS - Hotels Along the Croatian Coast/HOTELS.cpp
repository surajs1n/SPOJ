#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	int n, m;
	cin >> n >> m;
	vector<int> v;
	v.push_back(0);
	int sum[300005] = {0};

	for(int i=1; i<=n; i++) {
		int temp;
		cin >> temp;
		v.push_back(temp);
		sum[i] = sum[i-1] + v[i];
	}

	int i=1;
	int j=0;

	int max_sum = -1;
	while(i<=n) {
		int temp_sum = sum[i] - sum[j]; 

		if (temp_sum <= m) {
			if (max_sum < temp_sum) {
				max_sum = temp_sum;
			}
			i++;
		} else {
			while(j<=i && temp_sum > m) {
				j++;
				temp_sum = sum[i] - sum[j];
			}

			if (j > i) {
				j = i;
			}
		}
	}

	cout << max_sum << endl; 

	return 0;
}