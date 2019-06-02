#include <bits/stdc++.h>

using namespace std;

int main() {
	int m, n;
	cin >> m >> n;

	while(m && n) {
		vector<int> m_arr, n_arr;

		for(int i=0; i<m; i++) {
			int temp;
			cin >> temp;
			m_arr.push_back(temp);
		}

		for(int i=0; i<n; i++) {
			int temp;
			cin >> temp;
			n_arr.push_back(temp);
		}

		sort(m_arr.begin(), m_arr.end());
		sort(n_arr.begin(), n_arr.end());

		if (m_arr[0] < n_arr[1]) {
			cout << "Y" << endl;
		} else {
			cout << "N" << endl;
		}

		cin >> m >> n;
	}	


	return 0;	
}