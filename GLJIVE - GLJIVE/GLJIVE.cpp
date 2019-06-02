#include <bits/stdc++.h>

using namespace std;

int main() {

	vector<int> v;
	v.push_back(0);

	int ten = 10;
	while(ten--) {
		int temp;
		cin >> temp;
		v.push_back(temp);
	}

	int s1 = 0;
	int s2 = v[1];

	int answer;
	int index = 2;
	do {
		s1 = s2;
		s2 = s1 + v[index];
		if (s2 <= 100) {
			answer = s2;
		} else if (s1 <= 100 && 100 < s2) {
			if (s2 - 100 <= 100 - s1) {
				answer = s2;
			} else {
				answer = s1;
			}
		} else if (s1 > 100) {
			break;
		}

		index++;
	} while(index<=10); 

	cout << answer << endl;

	return 0;
}