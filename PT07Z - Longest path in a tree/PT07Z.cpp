#include <bits/stdc++.h>

using namespace std;

int main() {
	int n;
	cin >> n;
	vector<int> v[n+1];

	int i,j;
	int temp = n;
	while(--temp) {
		cin >> i >> j;
		v[i].push_back(j);
		v[j].push_back(i);
	}

	int hash_a[n+1] = {0};
	queue<pair<int,int> > q;
	q.push(make_pair(1,0));
	
	int max_count = -1;
	int max_count_node = 0;
	while(!q.empty()) {
		pair<int,int> node = q.front(); q.pop();
		hash_a[node.first] = 1;
		if (node.second > max_count) {
			max_count = node.second;
			max_count_node = node.first;
		}
		vector<int> adj_list = v[node.first];
		for(int i=0; i<adj_list.size(); i++) {
			if (hash_a[adj_list[i]] == 0) {
				//cout << " adding this to que " << adj_list[i] << " " << node.second+1 << endl;
				q.push(make_pair(adj_list[i], node.second+1));
			}
		}
	}

	//cout << max_count << " , " << max_count_node << endl;

	int hash_b[n+1] = {0};
	queue<pair<int,int> > que;
	que.push(make_pair(max_count_node,0));
	
	int count = -1;
	int count_node = 0;
	while(!que.empty()) {
		pair<int,int> node = que.front(); que.pop();
		hash_b[node.first] = 1;
		if (node.second > count) {
			count = node.second;
			count_node = node.first;
		}
		vector<int> adj_list = v[node.first];
		for(int i=0; i<adj_list.size(); i++) {
			if (hash_b[adj_list[i]] == 0) {
				//cout << " adding this to que " << adj_list[i] << " " << node.second+1 << endl;
				que.push(make_pair(adj_list[i], node.second+1));
			}
		}
	}

	cout << count << endl;

	return 0;
}