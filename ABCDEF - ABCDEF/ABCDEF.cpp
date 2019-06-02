#include <bits/stdc++.h>

using namespace std;

struct numberCount {
	int number;
	int numberCount;
} first_list[1000005], second_list[1000005];

int first_length = 0, second_length = 0;

int main() {
	int s[105];
	int n;

	cin >> n;

	for(int i=0; i<n; i++) {
		cin >> s[i];
	}

	int first_result[1000005];
	int second_result[1000005];

	int first_index = 0;
	for(int a=0; a<n; a++) {
		for(int b=0; b<n; b++) {
			for(int c=0; c<n; c++) {
				first_result[first_index++] = s[a]*s[b] + s[c];
			}
		}
	}

	int second_index = 0;
	for(int d=0; d<n; d++) {
		if (s[d]) {
			for(int e=0; e<n; e++) {
				for(int f=0; f<n; f++) {
					second_result[second_index++] = (s[f] + s[e]) * s[d];	
				}
			}
		}
	}

	sort(first_result, first_result+first_index);
	sort(second_result, second_result+second_index);

	int last = first_result[0];
	int last_count = 1;
	for(int i=1; i<first_index; i++) {
		if (last == first_result[i]) {
			last_count++;
		} else {
			first_list[first_length].number = last;
			first_list[first_length].numberCount = last_count;

			first_length++;
			last = first_result[i];
			last_count = 1;
		}
	}

	first_list[first_length].number = last;
	first_list[first_length].numberCount = last_count;
	first_length++;

	last = second_result[0];
	last_count = 1;
	for(int i=1; i<second_index; i++) {
		if (last == second_result[i]) {
			last_count++;
		} else {
			second_list[second_length].number = last;
			second_list[second_length].numberCount = last_count;

			second_length++;
			last = second_result[i];
			last_count = 1;
		}
	}

	second_list[second_length].number = last;
	second_list[second_length].numberCount = last_count;
	second_length++;

	// for(int i=0; i<first_length; i++) {
	// 	cout << first_list[i].number << " " << first_list[i].numberCount << endl;
	// } cout << endl;

	// for(int i=0; i<second_length; i++) {
	// 	cout << second_list[i].number << " " << second_list[i].numberCount << endl;
	// } cout << endl;

	long long answer = 0;
	int i=0;
	int j=0;
	while(i<first_length && j<second_length) {
		if (first_list[i].number == second_list[j].number) {
			//cout << first_list[i].number << " " << first_list[i].numberCount << " " << second_list[j].numberCount << endl;
			answer += (1ll *first_list[i].numberCount * second_list[j].numberCount);
			i++; j++;
		} else if (first_list[i].number < second_list[j].number) {
			i++;
		} else {
			j++;
		}
	}

	cout << answer << endl;

	return 0;
}