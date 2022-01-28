#include <iostream>
#include <string>
#include <stack>
using namespace std;

int countBracketReversals(string str){
	int len = str.size();
	if(len%2) 
		return -1;
	
	stack<char> s;
	for(int i=0; i<len; i++){
		if(str[i] == '}' && !s.empty()){
			if(s.top() == '{')
				s.pop();
			else
				s.push(str[i]);
		}else
			s.push(str[i]);
	}
	int count_left = s.size();
	int n = 0;
	while(!s.empty() && s.top() == '{'){
		s.pop();
		n++;
	}
	
	return (count_left/2 + n%2);
}

int main() {
    string input;
    cin >> input;
    cout << countBracketReversals(input);
}