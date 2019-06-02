#include <bits/stdc++.h>

using namespace std;

bool find_diff(int a, int b) {
	int count = 0;
	while(a && b) {
		if (a%10 != b%10) {
			count++;
		}
		a/=10; b/=10;
	}

	if (count == 1) {
		return true;
	} 

	return false;
}

int main() {
	ios_base::sync_with_stdio(false);
	// generate primes
	vector<int> prime_number;
	for(int i=1001; i<=9999; i++) {
		bool is_prime = true;
		for(int j=2, sq = sqrt(i)+1; j<=sq; j++) {
			if(i%j == 0) {
				is_prime = false;
				break;
			}
		}

		if (is_prime) {
			prime_number.push_back(i);
		}
	}

	// for(int i=0; i<prime_number.size(); i++) {
	// 	cout << prime_number[i] << "\t";
	// } cout << endl;

	map<int, vector<int>> prime_graph;
	for(int i=0; i<prime_number.size()-1; i++) {
		for(int j=i+1; j<prime_number.size(); j++) {
			bool does_have_one_diff = find_diff(prime_number[i], prime_number[j]);
			if (does_have_one_diff) {
				if (prime_graph.find(prime_number[i]) != prime_graph.end()) {
					prime_graph.find(prime_number[i])->second.push_back(prime_number[j]);
				} else {
					vector<int> v; v.push_back(prime_number[j]);
					prime_graph[prime_number[i]] = v;
				}

				if (prime_graph.find(prime_number[j]) != prime_graph.end()) {
					prime_graph.find(prime_number[j])->second.push_back(prime_number[i]);
				} else {
					vector<int> v; v.push_back(prime_number[i]);
					prime_graph[prime_number[j]] = v;
				}
				
				
			}
		}
	}

	// map<int, vector<int> > :: iterator it;
	// for(it = prime_graph.begin(); it!= prime_graph.end(); it++) {
	// 	int number = it->first;
	// 	vector<int> v = it->second;
	// 	cout << number << " => ";
	// 	for(int i=0; i<v.size(); i++) {
	// 		cout << v[i] << " , ";
	// 	} cout << endl;
	// }

	int t;
	cin >> t;
	while(t--) {
		int a,b;
		cin >> a >> b;
		queue<pair<int,int> > nodes_queue;

		bool is_traversed[10000] = {0};

		nodes_queue.push(make_pair(a, 0));
		int result = 0;
		while(!nodes_queue.empty()) {
			int number       = nodes_queue.front().first;
			int number_count = nodes_queue.front().second;
			is_traversed[number] = true;
			nodes_queue.pop();

			if (number == b) {
				result = number_count;
				break;
			}

			vector<int> v = prime_graph.find(number)->second;
			for(int i=0; i<v.size(); i++) {
				if (!is_traversed[v[i]]) {
					nodes_queue.push(make_pair(v[i], number_count+1));
				}
			}

		}

		cout << result << endl;
	}

	return 0;
}