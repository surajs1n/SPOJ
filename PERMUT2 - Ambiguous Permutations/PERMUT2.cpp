#include <bits/stdc++.h>

using namespace std;

bool cmp (pair<int, int> &a, pair<int, int> &b) {
	if (a.first < b.first) {
		return true;
	}

	return false;
}

int main() {

	int n;
	cin >> n;

	while(n) {
		vector<int> v;
		vector<pair<int, int> > p;
		for(int i=0; i<n; i++) {
			int temp;
			cin >> temp;
			v.push_back(temp);
			p.push_back(make_pair(temp, i+1));
		}

		sort(p.begin(), p.end(), cmp);

		int flag = true;
		for(int i=0; i<v.size(); i++) {
			if (v[i] != p[i].second) {
				flag = false;
				break;
			}
		}

		if (flag) {
			cout << "ambiguous" << endl;
		} else {
			cout << "not ambiguous" << endl;;
		}

		cin >> n;
	}

	return 0;
}