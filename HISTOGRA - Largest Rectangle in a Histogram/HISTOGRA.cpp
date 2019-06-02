#include<bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);

	int n, i;
	while(1) {
		cin >> n;
		if (n == 0) {
			break;
		}

		vector<long long> v;
		for(int i=0; i<n; i++) {
			long long temp;
			cin >> temp;
			v.push_back(temp);
		}

		long long answer = -1;
		stack<int> index_list;
		for (i=0; i<n; ) {
			if ( index_list.empty() || v[index_list.top()] <= v[i] ) {
				index_list.push(i);
				i++;
			} else {
				int top_index = index_list.top(); index_list.pop();
				long long temp_max = (index_list.empty())? (v[top_index] * i) : (v[top_index] * (i - index_list.top() -1));

				if (temp_max > answer) {
					answer = temp_max;
				}
			}
		}

		while(!index_list.empty()) {
			int top_index = index_list.top(); index_list.pop();
			long long temp_max = (index_list.empty())? (v[top_index] * i) : (v[top_index] * (i - index_list.top() -1));

			if (temp_max > answer) {
				answer = temp_max;
			}
		}

		cout << answer << endl;
	}

	return 0;
}