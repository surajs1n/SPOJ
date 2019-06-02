#include <bits/stdc++.h>

using namespace std;

int main() {
	string str1, str2;

	while(cin >> str1 >> str2) {
		int hash1[30] = {0}, hash2[30] = {0};

		for(int i=0; i<str1.length(); i++) {
			hash1[str1[i] - 'a']++;
		}

		for(int i=0; i<str2.length(); i++) {
			hash2[str2[i] - 'a']++;
		}

		for(int i=0; i<27; i++) {
			int m = min(hash1[i], hash2[i]);
			while(m--) {
				cout << char(i+'a');
			}
		} cout << endl;
	}

	return 0;
}