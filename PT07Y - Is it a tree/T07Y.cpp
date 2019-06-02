#include <bits/stdc++.h>

using namespace std;

int main() {
	int n, m;
	cin >> n >> m;

	if (m == n-1) {
		int hash[n+1] = {0};
		vector<int> v[n+1]; 
		while(m--) {
			int i,j;
			cin >> i >> j;
			v[i].push_back(j);
			v[j].push_back(i);
		} 

		queue<int> q;
		q.push(1);

		while(!q.empty()) {
			int node = q.front(); q.pop();
			hash[node] = 1;
			vector<int> adj_nodes = v[node];
			for(int i=0; i<adj_nodes.size(); i++) {
				if(!hash[adj_nodes[i]]) {
					q.push(adj_nodes[i]);
				}
			}
		}

		int flag = true;
		for(int i=1; i<=n; i++) {
			if (hash[i]==0) {
				flag = false;
				break;
			}
		}

		if (flag) {
			cout << "YES" << endl;
		} else {
			cout << "NO" << endl;
		}
	} else {
		cout << "NO" << endl;
	}
}