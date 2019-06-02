#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	int n;
	cin >> n;
	while(n--) {
		double a, b, c, d;
		cin >> a >> b >> c >> d;

		double sum = a + b + c + d;
		cout << setprecision( 2 ) << fixed << sqrt((sum - 2*a) * (sum - 2*b) * (sum - 2*c) * (sum - 2*d))/4 << endl;
	}

	return 0;
}