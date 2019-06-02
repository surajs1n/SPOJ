#include <bits/stdc++.h>

using namespace std;

string print_expression(int n) {
	string result="";
		bool binary_exp[70] = {0};

		int i = -1;
		while(n) {
			binary_exp[++i] = n&1;
			n /= 2;
		}

		// for(int i=69; i>=0; i--) {
		// 	cout << binary_exp[i];
		// }

		i = 69;
		while(i>=0 && !binary_exp[i]) {
			i--;
		}

		if (i==1) {
			result.append("2");
		} else if (i==0) {
			result.append("2(0)");
		} else {
			result.append("2(");
			result.append(print_expression(i));
			result.append(")");
		}

		for(--i; i>=0; i--) {
			if(binary_exp[i]) {
				result.append("+");
				if (i==1) {
					result.append("2");
				} else if (i==0) {
					result.append("2(0)");
				} else {
					result.append("2(");
					result.append(print_expression(i));
					result.append(")");
				}
			}
		}

	return result;
}

int main() {
	vector<int> v;
	v.push_back(137); v.push_back(1315); v.push_back(73); v.push_back(136); 
	v.push_back(255); v.push_back(1384); v.push_back(16385); 
	// int n;
	// cin >> n;

	// for(int i=0; i<n; i++) {
	// 	int temp;
	// 	cin >> temp; 
	// 	cout << temp << "=" << print_expression(temp) << endl;
	// }

	for(int i=0; i<v.size(); i++) {
		cout << v[i] << "=" << print_expression(v[i]) << endl;
	}

	return 0;
}

/** Answer attached
137=2(2(2)+2+2(0))+2(2+2(0))+2(0)
1315=2(2(2+2(0))+2)+2(2(2+2(0)))+2(2(2)+2(0))+2+2(0)
73=2(2(2)+2)+2(2+2(0))+2(0)
136=2(2(2)+2+2(0))+2(2+2(0))
255=2(2(2)+2+2(0))+2(2(2)+2)+2(2(2)+2(0))+2(2(2))+2(2+2(0))+2(2)+2+2(0)
1384=2(2(2+2(0))+2)+2(2(2+2(0)))+2(2(2)+2)+2(2(2)+2(0))+2(2+2(0))
16385=2(2(2+2(0))+2(2)+2)+2(0)
*/