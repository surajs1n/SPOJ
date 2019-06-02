#include <bits/stdc++.h>
#define INF 1000000000;

using namespace std;

int main() {
	int t;
	cin >> t;

	while(t--) {
		int n , m;
		cin >> n >> m;
		int count[205][205];
		bool hash[205][205] = {0};
		queue<pair<pair<int,int>, int> > cord_count_queue;

		for(int i=0; i<205; i++) {
			for(int j=0; j<205; j++) {
				count[i][j] = INF;
			}
		}

		for(int i=0; i<n; i++) {
			string str;
			cin >> str;
			for(int j=0; j<str.length(); j++) {
				if (str[j] == '1') {
					cord_count_queue.push(make_pair(make_pair(i,j), 0));
					hash[i][j] = 1;
				} else {
					hash[i][j] = 0;
				}
			}
		}

		while(!cord_count_queue.empty()) {
			pair<pair<int, int> , int> cord_count = cord_count_queue.front(); cord_count_queue.pop();
			int x = cord_count.first.first;
			int y = cord_count.first.second;
			int c = cord_count.second;
			count[x][y] = c;

			if (x-1>=0 && count[x-1][y] > c + 1 && hash[x-1][y] == 0) {
				cord_count_queue.push(make_pair(make_pair(x-1, y), c+1));
				hash[x-1][y] = 1;
			}

			if (x+1<n  && count[x+1][y] > c + 1 && hash[x+1][y] == 0) {
				cord_count_queue.push(make_pair(make_pair(x+1, y), c+1));
				hash[x+1][y] = 1;
			} 

			if (y-1>=0 && count[x][y-1] > c + 1 && hash[x][y-1] == 0) {
				cord_count_queue.push(make_pair(make_pair(x, y-1), c+1));
				hash[x][y-1] = 1;
			}

			if (y+1<m  && count[x][y+1] > c + 1 && hash[x][y+1] == 0) {
				cord_count_queue.push(make_pair(make_pair(x, y+1), c+1));
				hash[x][y+1] = 1;
			}

		}

		for(int i=0; i<n; i++) {
			for(int j=0; j<m; j++) {
				cout << count[i][j] << " ";
			} cout << endl;
		}

	}

	return 0;
}