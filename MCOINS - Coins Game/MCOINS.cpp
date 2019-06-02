#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);

	int l, m, n;
	cin >> l >> m >> n;

	bool arr[1000105] = {0};

	for(int i=1; i<=1000000; i++) {
		bool result = false;
		if (i-1 >= 0 && !result) {
			result = !arr[i-1];
		} 

		if (i-m >= 0 && !result) {
			result = !arr[i-m];
		} 

		if (i-l >= 0 && !result) {
			result = !arr[i-l];
		}

		arr[i] = result;

		//cout << arr[i] << " ";
	}

	while(n--) {
		int num;
		cin >> num;

		if (arr[num]) {
			cout << "A";
		} else {
			cout << "B";
		}
	}

	return 0;
}