#include <bits/stdc++.h>

using namespace std;

int main() {
	int t;
	cin >> t;

    for(int c=1; c<=t; c++) {
    	bool flag = false;  // on homosexual found
    	int m, n;
    	cin >> n >> m;
    	vector<int> adj_list[2005];
    	while(m--) {
    		int a, b;
    		cin >> a >> b;
    		adj_list[a].push_back(b);
    		adj_list[b].push_back(a);
    	}

    	int color[n+1] = {0}; // 0 : not assigned , -1 : red , 1 : green

    	for(int i=1; i<=n; i++) {
    		if (color[i] == 0) {
    			color[i] = 1;
    		}

    		vector<int> v = adj_list[i];
    		for(int j=0; j<v.size(); j++) {
    			if (color[v[j]] == 0) {
    				color[v[j]] = (color[i] == 1) ? -1 : 1;
    			} else if (color[i] + color[v[j]] != 0) {
    				flag = true;
    				break;
    			}
    		}

    		if (flag) {
    			break;
    		}
    	}

    	cout << "Scenario #" << c << ":" << endl;
    	if (flag) {
    		cout << "Suspicious bugs found!" << endl;
    	} else {
    		cout << "No suspicious bugs found!" << endl;
    	}
    }

	return 0;
}