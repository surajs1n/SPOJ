#include <bits/stdc++.h>

using namespace std;

int main() {
	int s[105];
	int n;

	cin >> n;

	for(int i=0; i<n; i++) {
		cin >> s[i];
	}

	vector<int> first_result;
	vector<int> second_result;
	for(int a=0; a<n; a++) {
		for(int b=0; b<n; b++) {
			for(int c=0; c<n; c++) {
				first_result.push_back(s[a]*s[b] + s[c]);
			}
		}
	}

	for(int d=0; d<n; d++) {
		if (s[d]) {
			for(int e=0; e<n; e++) {
				for(int f=0; f<n; f++) {
					second_result.push_back((s[f] + s[e]) * s[d]);	
				}
			}
		}
	}

	sort(first_result.begin(), first_result.end());
	sort(second_result.begin(), second_result.end());

	vector<pair<int, int> > first_list;
	vector<pair<int, int> > second_list;

	int last = first_result[0];
	int last_count = 1;
	int first_list_length = first_list.size();
	for(int i=1; i<first_list_length; i++) {
		if (last == first_result[i]) {
			last_count++;
		} else {
			first_list.push_back(make_pair(last, last_count));

			last = first_result[i];
			last_count = 1;
		}
	}
	first_list.push_back(make_pair(last, last_count));

	last = second_result[0];
	last_count = 1;
	int second_list_length = first_list.size();
	for(int i=1; i<second_list_length; i++) {
		if (last == second_result[i]) {
			last_count++;
		} else {
			second_list.push_back(make_pair(last, last_count));

			last = second_result[i];
			last_count = 1;
		}
	}
	second_list.push_back(make_pair(last, last_count));

	// for(int i=0; i<first_list.size(); i++) {
	// 	cout << first_list[i].first << " " << first_list[i].second << endl;
	// } cout << endl;

	// for(int i=0; i<second_list.size(); i++) {
	// 	cout << second_list[i].first << " " << second_list[i].second << endl;
	// } cout << endl;

	long long answer = 0;
	int i=0;
	int j=0;
	while(i<first_list_length && j<second_list_length) {
		if (first_list[i].first == second_list[j].first) {
			//cout << first_list[i].number << " " << first_list[i].numberCount << " " << second_list[j].numberCount << endl;
			answer += (1ll *first_list[i].second * second_list[j].second);
			i++; j++;
		} else if (first_list[i].first < second_list[j].first) {
			i++;
		} else {
			j++;
		}
	}

	cout << answer << endl;

	return 0;
}