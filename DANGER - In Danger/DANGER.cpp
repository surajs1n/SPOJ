#include<bits/stdc++.h>

using namespace std;

long long power(long long a, int b) {
	if(b==0)
		return 1;

	return a * power(a, b-1);
}

int main() {
	string str;
	while(1) {
		cin >> str;

		if (str.compare("00e0") == 0) {
			break;
		}

		long long ans = (str[0] - '0') * 10 + (str[1] - '0');
		int p = str[3] - '0';

		while(p--) {
			ans *= 10;
		}

		//cout << ans << " :: ";

		long long temp = ans;
		int count = 0;
		while(temp) {
			count++;
			temp /= 2;
		}

		cout << 2*(ans - power(2, count-1)) + 1 << endl;
	}
}