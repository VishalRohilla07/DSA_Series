#include<unordered_map>
#include<utility>
int highestFrequency(int arr[], int n) {
    // Write your code here
    unordered_map<int, int> frequency;
    
    for(int i = 0; i < n; i++) {
        frequency[arr[i]]++;
    }
    
    int key = 0;
    int value = 0;
    
    for(int i = 0; i < n; i++) {
        if(frequency[arr[i]] > value) {
            key = arr[i];
            value = frequency[arr[i]];
        }
    }
    
    return key;
    
}
// Time Complexity : O(n) 