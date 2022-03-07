#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;

vector<int> removeDuplicates(int *arr, int n) {
	unordered_map<int, bool> myMap;
	vector<int> input;
	for(int i=0; i<n; i++){
	    if(myMap.count(arr[i]) < 1){
	        myMap[arr[i]] = true;
	        input.push_back(arr[i]);
	    }
	}
	return input;
}

int main() {
	int n;
	cin >> n;
	int arr[n] = {0};
	for (int i = 0; i < n; i++) {
	    cin>>arr[i];
	}
	vector<int> v = removeDuplicates(arr, n);
    for(int i=0; i<v.size(); i++){
        cout<<v.at(i)<<" ";
    }
}