#include<bits/stdc++.h>

#define INF 1000000007

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	int t;
	cin >> t;
	while(t--) {
		int a, b;
		cin >> a >> b;

		int W = b - a;

		int n;
		vector<int> value;
		vector<int> weight;
		value.push_back(0); weight.push_back(0);

		cin >> n;
		for(int i=0; i<n; i++) {
			int v, w;
			cin >> v >> w;
			value.push_back(v);
			weight.push_back(w);
		}

		int arr[W+1][n+1] = {0};

		for(int i=0; i<W+1; i++) {
			for(int j=0; j<n+1; j++) {
				if (j==0) {
					arr[i][j] = INF;
				} else if (i==0) {
					arr[i][j] = 0;
				} else {
					int up_value;
					if (i-weight[j] >= 0) {
						up_value = arr[i-weight[j]][j] + value[j];
					} else {
						up_value = INF;
					}
					int side_value = arr[i][j-1];

					arr[i][j] = min(up_value, side_value);
				}
				//cout << arr[i][j] << " ";
			} //cout << endl;
		}

		int result = arr[W][n];

		if (result != INF ) {
			cout << "The minimum amount of money in the piggy-bank is " << result << "." << endl;
		} else {
			cout << "This is impossible." << endl;
		}
	}

	return 0;
}