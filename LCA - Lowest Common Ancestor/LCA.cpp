#include <bits/stdc++.h>

using namespace std;

int main () {
	int t; int parent[1005] = {0};
	cin >> t;
	for(int tt=1; tt<=t; tt++) {
		cout << "Case " << tt << ":" << endl;
		int num;
		cin >> num;

		for(int i=1; i<=num; i++) {
			int temp;
			cin >> temp;
			while(temp--) {
				int b;
				cin >> b;
				parent[b] = i;
			}
		}

		int q, a, b;
		cin >> q;
		while(q--) {
			cin >> a >> b;
			stack<int> first_stk, second_stk;
			first_stk.push(a);
			second_stk.push(b);

			while(parent[a] != a) {
				first_stk.push(parent[a]);
				a = parent[a];
			}

			while(parent[b] != b) {
				second_stk.push(parent[b]);
				b = parent[b];
			}

			int top;
			while(!first_stk.empty() && !second_stk.empty() && first_stk.top() == second_stk.top()) {
				top = first_stk.top();
				first_stk.pop(); second_stk.pop();
			}

			cout << top << endl;
		}
	}	
	return 0;
}