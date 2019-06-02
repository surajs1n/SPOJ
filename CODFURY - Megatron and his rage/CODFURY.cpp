#include <bits/stdc++.h>

using namespace std;

int main() {
	int t;
	cin >> t;

	while(t--) {
		long long n, total;
		vector<long long> planet;

		cin >> n >> total;
		for(int i=0; i<n; i++) {
			long long temp;
			cin >> temp;
			planet.push_back(temp);
		}

		vector<long long> sum;
		sum.push_back(planet[0]);

		for(int i=1; i<n; i++) {
			sum.push_back(planet[i] + sum[i-1]);
		}

		int max_planet = -1;
		long long max_planet_min_autobot = 10000000000000000ll;

		int low = 0;
		int high = planet.size()-1;
		bool found = false;
		while(low <= high) {
			int mid = (low + high)/2;
			//cout << mid << endl;
			for(int i=0; i<n-mid; i++) {
				if ((sum[i+mid] - sum[i] + planet[i] <= total) && ((mid > max_planet) || ((mid == max_planet) && ( max_planet_min_autobot >= sum[i+mid] - sum[i] + planet[i])))) {
					max_planet = mid;
					max_planet_min_autobot = sum[i+mid] - sum[i] + planet[i];
					found = true;
				} 
			}

			if (found) {
				low = mid+1;
			} else {
				high = mid-1;
			}

			found = false;
		}

		if (max_planet_min_autobot == 10000000000000000ll) {
			cout << "0 0" << endl;
		} else {
			cout << max_planet_min_autobot << " " << max_planet+1 << endl;	
		}
	}
	return 0;
}