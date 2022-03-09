#include<unordered_map>
#include<utility>
void printIntersection(int arr1[], int arr2[], int n, int m) {
    // Write your code here
    unordered_map<int, int> map;
    
    for(int i = 0; i < n; i++) {
        map[arr1[i]]++;
    }
    
    for(int i = 0; i < m; i++) {
      	if(map[arr2[i]]) {
            cout << arr2[i] << endl;
            map[arr2[i]]--;
        } else {
            continue;
        }
    }  
}

// Time Complexity : O(n)
// Auxillary Space : O(n)