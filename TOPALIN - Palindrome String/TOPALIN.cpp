#include <bits/stdc++.h>

using namespace std;

int main() {
	string str;
	cin >> str;

    map < char, vector<int> > character_map;
    map < char, vector<int> > :: iterator it;
    for(int i=0; i<str.length(); i++) {
    	char ch = str[i];
  
        it = character_map.find(ch);
        if(it != character_map.end()) {
        	it->second.push_back(i);
        } else {
        	vector<int> v;
        	v.push_back(i);
        	character_map[ch] = v;
        }

    }

    int start = 0;
    int end = str.length() - 1;
    int count = 0;
    while(start < end) {
    	if(str[start] == str[end]) {
    		start++; end--;
    	} else {
    		int startSize = character_map.find(str[start])->second.size();
    		int endSize   = character_map.find(str[end])->second.size();

    		if(startSize < endSize) {
                vector<int> v = character_map.find(str[start])->second;
                for(int i=0; i<v.size(); i++) {
                	str[v[i]] = str[end];
                }

                count += v.size();
    		} else {
    			vector<int> v = character_map.find(str[end])->second;
    			for(int i=0; i<v.size(); i++) {
    				str[v[i]] = str[start];
    			}

    			count += v.size();
    		}
    	}
    }

    cout << count << endl;
	return 0;
}