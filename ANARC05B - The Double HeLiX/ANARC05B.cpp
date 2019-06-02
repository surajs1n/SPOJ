#include<bits/stdc++.h>
#define MAX 1000000
using namespace std;


int main() {
	ios_base::sync_with_stdio(false);

	int m,n;
	while(1) {
		cin >> m;
		if (m==0) {
			break;
		}

		vector<int> arrA, arrB;
		arrA.push_back(0); arrB.push_back(0);
		vector<int> sumA, sumB;
		sumA.push_back(0); sumB.push_back(0);

		for(int i=0; i<m; i++) {
			int temp;
			cin >> temp;
			arrA.push_back(temp);
		} arrA.push_back(MAX);

		cin >> n;
		for(int i=0; i<n; i++) {
			int temp;
			cin >> temp;
			arrB.push_back(temp);
		} arrB.push_back(MAX);

		for(int i=1; i<=m+1; i++) {
			sumA.push_back(sumA[i-1] + arrA[i]);
		}

		for(int i=1; i<=n+1; i++) {
			sumB.push_back(sumB[i-1] + arrB[i]);
		}

		// for(int i=0; i<=m+1; i++) {
		// 	cout << arrA[i] << "\t";
		// } cout << endl;

		// for(int i=0; i<=m+1; i++) {
		// 	cout << sumA[i] << "\t";
		// } cout << endl;

		// for(int i=0; i<=n+1; i++) {
		// 	cout << arrB[i] << "\t";
		// } cout << endl;

		// for(int i=0; i<=n+1; i++) {
		// 	cout << sumB[i] << "\t";
		// } cout << endl;

		int pre_point_A = 0, pre_point_B = 0;
		int cur_point_A, cur_point_B;
		int i=1, j=1;

		int result = 0;
		while(i<=m+1 || j<=n+1) {
			if (arrA[i] == arrB[j]) {
				cur_point_A = i; cur_point_B = j;
				result += max(sumA[cur_point_A] - sumA[pre_point_A], sumB[cur_point_B] - sumB[pre_point_B]);
				pre_point_A = cur_point_A;
				pre_point_B = cur_point_B;
				i++; j++;
			} else if (arrA[i] > arrB[j]) {
				j++;
			} else {
				i++;
			}
		}

		result -= MAX;
		cout << result << endl;
	}

	return 0;
}