#include <bits/stdc++.h>

using namespace std;

int main() {
	int t;
	cin >> t;

	while(t--) {
		int a[105][105] = {0};
		int n , m;
		cin >> n >> m;

		for(int i=1; i<=n; i++) {
			for(int j=1; j<=m; j++) {
				cin >> a[i][j];

				a[i][j] += max(max(a[i-1][j-1], a[i-1][j]), a[i-1][j+1]);
			}
		}

		int value = -1;
		for(int j=1; j<=m; j++) {
			if (value < a[n][j]) {
				value = a[n][j];
			}
		}

		cout << value << endl;
	}

	return 0;
}