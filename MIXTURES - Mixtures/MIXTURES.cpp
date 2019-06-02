#include <iostream>
#include <stdlib.h>
#include <vector>
#include <limits>

#define INF 1000000007

using namespace std;


int main() {
	ios_base::sync_with_stdio(false);

	int n;
	while(cin>>n) {
		vector<int> v;
		int hash[105][105];

		for(int i=0; i<n; i++) {
			for(int j=0; j<n; j++) {
				hash[i][j] = INF;
			}
		}

		for(int i=0; i<n; i++) {
			int temp;
			cin >> temp;
			v.push_back(temp);
		}

		vector<int> sum;
		sum.push_back(v[0]);
		for(int i=1; i<n; i++) {
			sum.push_back((v[i] + sum[i-1]));
		}

		// for(int i=0; i<n; i++) {
		// 	cout << v[i] << " " << sum[i] << endl;
		// }

		for(int len=0; len<n; len++) {
			for(int i=0; i<n-len; i++) {
				if (i == i+len) {
					hash[i][i+len] = 0;
				} else if (i + 1 == i+len) {
					hash[i][i+len] = v[i]*v[i+1];
				} else { 
					for(int j=i; j<i+len; j++) {
						int prod = ((100 + sum[j]-sum[i] + v[i])%100) * ((100 + sum[i+len] - sum[j+1] + v[j+1])%100);
						//cout << i << "  " << j << " " << i+len << " " << prod << endl;

						hash[i][i+len] = min(hash[i][i+len], hash[i][j]+ hash[j+1][i+len] + prod);
					}
				}
			}
		}
		
		cout << hash[0][n-1] << endl;
	}
	return 0;
}