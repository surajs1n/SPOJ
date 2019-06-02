#include <bits/stdc++.h>

using namespace std;

int main() {
	int t;
	cin >> t;

	while(t--) {
		int n, m, temp;
		vector<int> a;
		vector<int> b;
		cin >> n >> m;
		
		for(int i=0; i<n; i++) {
            cin >> temp;
			a.push_back(temp);
		}

		for (int i=0; i<m; i++) {
			cin >> temp;
			b.push_back(temp);
		}

		sort(a.begin(), a.end());
		sort(b.begin(), b.end());

		int i = 0;
		int j = 0;

		while(i<n && j<m) {
			if(a[i] < b[j]) {
				i++;
			} else {
				j++;
			}
		}

		if(i == n) {
            cout << "MechaGodzilla" << endl;
		} else {
            cout << "Godzilla" << endl;
		}
	}

	return 0;
}