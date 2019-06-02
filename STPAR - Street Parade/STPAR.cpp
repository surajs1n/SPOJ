#include <bits/stdc++.h>

using namespace std;

int main() {
	int n;
	cin >> n;
	while(n) {
		vector<int> v;
		for(int i=0; i<n; i++) {
			int temp;
			cin >> temp;
			v.push_back(temp);
		}

		stack<int> s;

		int number = 1;
		for(int i=0; i<n; ) {
			if (number == v[i]) {
				number++;
				i++;
			} else if (!s.empty() && number == s.top()) {
				number++;
                s.pop();
			} else {
                s.push(v[i]);
                i++;
			}
		}

		bool flag = true;
		while(!s.empty()) {
			int top_element = s.top();
			s.pop();
			if( top_element != number) {
				flag = false;
				break;
			} else {
				number++;
			}
		}

		if (flag) {
			cout << "yes" << endl;
		} else {
			cout << "no" << endl;
		}

		cin >> n;
	}

	return 0;
}