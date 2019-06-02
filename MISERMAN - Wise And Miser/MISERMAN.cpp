#include <bits/stdc++.h>

#define MAX 100000000

using namespace std;


int main() {
	int n, m;
	cin >> n >> m;

	int arr[n+1][m+1];
	int answer[n+1][m+2] = {0};

	for(int i=1; i<=n; i++) {
		for(int j=1; j<=m; j++) {
			cin >> arr[i][j];
		}
	}

	for(int i=0; i<=n; i++) {
		for(int j=0; j<=m+1; j++) {
			if (j==0 || j == m+1) {
				answer[i][j] = MAX;
			} else if (i == 0) {
				answer[i][j] = 0;
			} else {
				answer[i][j] = min(min(answer[i-1][j-1], answer[i-1][j]), answer[i-1][j+1]) + arr[i][j];
			}
		}
	}

	// for(int i=0; i<=n; i++) {
	// 	for(int j=0; j<=m+1; j++) {
	// 		cout << answer[i][j] << "\t";
	// 	} cout << endl;
	// }

	int result = MAX;
	for(int j=1; j<=m; j++) {
		if (answer[n][j] < result) {
			result = answer[n][j];
		}
	}

	cout << result << endl;

	return 0;
}