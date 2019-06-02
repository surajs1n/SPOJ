#include <bits/stdc++.h>

using namespace std;

int arr_first[6250005], arr_second[6250005];

struct Number
{
	int number;
	int count;
}arr_first_count[6250005], arr_second_count[6250005];
int first_length = 0, second_length = 0;

int main() {
	ios_base::sync_with_stdio(false);
	int n;
	int arr_a[2505], arr_b[2505], arr_c[2505], arr_d[2505];

	cin >> n;
	for(int i=0; i<n; i++) {
		cin >> arr_a[i] >> arr_b[i] >> arr_c[i] >> arr_d[i];
	}

	int length = 0;
	for(int i=0; i<n; i++) {
		for(int j=0; j<n; j++) {
			arr_first[length++] = arr_a[i] + arr_b[j];
		}
	}

	length = 0;
	for(int i=0; i<n; i++) {
		for(int j=0; j<n; j++) {
			arr_second[length++] = arr_c[i] + arr_d[j];
		}
	}

	sort(arr_first, arr_first+length);
	sort(arr_second, arr_second+length);

	int last = arr_first[0];
	int count = 1;
	int i = 1;
	while(i < length) {
		if ( last == arr_first[i] ) {
			count++;
		} else {
			arr_first_count[first_length].number = last;
			arr_first_count[first_length].count  = count;
			first_length++;

			last = arr_first[i];
			count = 1;
		}
		i++;
	}

	arr_first_count[first_length].number = last;
	arr_first_count[first_length].count  = count;
	first_length++;

	last = arr_second[0];
	count = 1;
	i = 1;
	while(i < length) {
		if (last == arr_second[i]) {
			count++;
		} else {
			arr_second_count[second_length].number = last;
			arr_second_count[second_length].count  = count;
			second_length++;

			last = arr_second[i];
			count = 1;
		}
		i++;
	}

	arr_second_count[second_length].number = last;
	arr_second_count[second_length].count  = count;
	second_length++;

	int low = 0;
	int high = second_length - 1;
	long long result = 0;

	while(low < first_length && high >= 0) {
		if (arr_first_count[low].number + arr_second_count[high].number == 0) {
			result += (1ll * arr_first_count[low].count * arr_second_count[high].count);
			high--; low++;
		} else if (arr_first_count[low].number + arr_second_count[high].number > 0) {
			high--;
		} else {
			low++;
		}
	}

	cout << result << endl;

	return 0;
}