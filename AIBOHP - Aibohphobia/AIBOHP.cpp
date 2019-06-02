#include <bits/stdc++.h>

using namespace std;

int arr[6105][6105] = {0};

int find_lcs(string str1, int m, string str2, int n) {
	for(int i=0; i<m; i++) {
		for(int j=0; j<n; j++) {
			if (str1[i] == str2[j]) {
				arr[i+1][j+1] = arr[i][j] + 1;
			} else {
				arr[i+1][j+1] = max(arr[i+1][j], arr[i][j+1]);
			}
		}
	}

	return arr[m][n];
}

int main() {
	int t;
	cin >> t;

	while(t--) {
		string str;
		cin >> str;

		string rev_str = str;
		reverse(begin(rev_str), end(rev_str));

		int lcs = find_lcs(str, str.length(), rev_str, rev_str.length());

		cout << str.length() - lcs << endl;
	}

	return 0;
}