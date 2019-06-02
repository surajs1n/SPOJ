#include <bits/stdc++.h>

using namespace std;

char arr[10000][200];
int main() {
	string str;
	int col;
	cin >> col;

    
	while(col) {
		cin >> str;
        for(int i=0; i<str.length(); i++) {
        	int row = i/col;

        	if (row%2 == 0) {
                arr[row][i%col] = str[i];
        	} else {
                arr[row][(col-(i%col)-1)%col] = str[i];
        	}
        }

        // for(int i=0; i<str.length()/col; i++) {
        // 	for(int j=0; j<col; j++) {
        // 		cout << arr[i][j] << " ";
        // 	} cout << endl;
        // }

        for(int i=0; i<col; i++) {
        	for(int j=0; j<str.length()/col; j++) {
        		cout << arr[j][i] ;
        	} 
        } cout << endl;

		cin >> col;
	}	
}