#include <bits/stdc++.h>

using namespace std;

int sum_arr[505][105] = {0};

int main() {
	int n, m;

	cin >> m >> n;
	while(n && m) {
		vector<int> money;
		money.push_back(0);
		vector<int> happiness;
		happiness.push_back(0);

		for(int i=1; i<=n; i++) {
			int a, b;
			cin >> a >> b;
			money.push_back(a);
			happiness.push_back(b);
		}

		// for (int i=0; i<=n; i++) {
		// 	cout << money[i] << " " << happiness[i] << endl;
		// }

		for (int i=1; i<=m; i++) {
			for(int j=1; j<=n; j++) {
				int included_happiness = 0;
				int unincluded_happiness = sum_arr[i][j-1];
				if (i-money[j] >= 0) {
					included_happiness = happiness[j] + sum_arr[i-money[j]][j-1];
					//cout << "gone inside " << included_happiness << " , ";
				}

				sum_arr[i][j] = max(included_happiness, unincluded_happiness);
				//cout << sum_arr[i][j] << " ";
			} //cout << endl;
		}

		int max_money = -1;
		int max_money_index = -1;
		for(int i=1; i<=m; i++) {
			if (max_money < sum_arr[i][n]) {
				max_money = sum_arr[i][n];
				max_money_index = i;
			}
		}

		cout << max_money_index << " " << max_money << endl;

		cin >> m >> n;
	}

	return 0;
}