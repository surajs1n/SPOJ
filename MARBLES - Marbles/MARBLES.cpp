#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;

    vector<int> prime_number;
    for(int i=2; i<=10000; i++) {
        int is_prime = true;
        for(int j=2; j<=sqrt(i); j++) {
            if (i%j == 0) {
                is_prime = false;
                break;
            }
        }

        if (is_prime) {
            prime_number.push_back(i);
        }
    }

    // for(int i=0; i<prime_number.size(); i++) {
    //     cout << prime_number[i] << endl;
    // }

    while(t--) {
        int n,k;
        cin >> n >> k;

        int upper_right = n-1;
        int upper_left;
        int down_right;
        int down_left;
        if (k-1 > n-k) {
            upper_left = k;
            down_right = n-k;
            down_left  = 1;
        } else {
            upper_left = n-k+1;
            down_right = k-1;
            down_left  = 1; 
        }

        // fill-up the map;
        map<int, int> prime_map;
        while(upper_left <= upper_right) {
            int number = upper_left;
            int i=0;
            while(number != 1 && i<prime_number.size() && prime_number[i] <= number) {
                while(number%prime_number[i] == 0) {
                    if (prime_map.find(prime_number[i]) == prime_map.end()) {
                        prime_map[prime_number[i]] = 1;
                    } else {
                        prime_map[prime_number[i]] = prime_map[prime_number[i]] + 1;
                    }

                    number /= prime_number[i];
                }
                i++;
            }

            if (i>=prime_number.size() && number != 1) {
                if (prime_map.find(number) == prime_map.end()) {
                    prime_map[number] = 1;
                } else {
                    prime_map[number] = prime_map[number] + 1;
                }
            }

            upper_left++;
        }

        while(down_left <= down_right) {
            int number = down_left;
            int i=0;
            while(number != 1 && i<prime_number.size() && prime_number[i] <= number) {
                while(number%prime_number[i] == 0) {
                    prime_map[prime_number[i]] -= 1;
                    number /= prime_number[i];
                }
                i++;
            }

            if (i >= prime_number.size() && number!=1) {
                prime_map[prime_number[i]] -= 1;
            }

            down_left++;
        }

        long long result = 1;
        map<int, int> :: iterator t;
        for(t = prime_map.begin(); t!=prime_map.end(); t++) {
            int n = t->first;
            int times = t->second;

            while(times--) {
                result *= n;
            }
        }

        cout << result << endl;   
    }

    return 0;
}