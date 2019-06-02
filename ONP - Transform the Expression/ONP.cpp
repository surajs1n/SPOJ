#include <bits/stdc++.h>

using namespace std;

int main() {

	int t;
	cin >> t;

	while(t--) {
		string exp, temp;
		cin >> temp;
		exp = "(";
		exp.append(temp);
		exp.append(")");
		//cout << exp << endl;

		string result = "";
		stack <char> stk;

		for(int i=0; i<exp.length(); i++) {
			if (exp[i] >= 'a' && exp[i] <= 'z') {
				result += exp[i];
			} else {
				if (exp[i] == '(') {
					stk.push(exp[i]);
				} else if (exp[i] == ')') {
					while(!stk.empty() && stk.top() != '(') {
						result += stk.top();
						stk.pop();
					}

					if (!stk.empty() && stk.top() == '(') {
						stk.pop();
					}
				} else if (exp[i] == '^') {
					stk.push(exp[i]);
				} else if (exp[i] == '/') {
					while(!stk.empty() && (stk.top() == '^')) {
						result += stk.top();
						stk.pop();
					}
					stk.push(exp[i]);
				} else if (exp[i] == '*') {
					while(!stk.empty() && (stk.top() == '^') || (stk.top() == '/')) {
						result += stk.top();
						stk.pop();
					}
					stk.push(exp[i]);
				} else if (exp[i] == '-') {
					while(!stk.empty() && (stk.top() == '^') || (stk.top() == '/') || (stk.top() == '*')) {
						result += stk.top();
						stk.pop();
					}
					stk.push(exp[i]);
				} else if (exp[i] == '+') {
					while(!stk.empty() && (stk.top() == '^') || (stk.top() == '/') || (stk.top() == '*') || (stk.top() == '-')) {
						result += stk.top();
						stk.pop();
					}
					stk.push(exp[i]);
				}
			}
		} 

		cout << result << endl;		
	}
	return 0;
}