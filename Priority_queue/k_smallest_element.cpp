#include<queue>
vector<int> kSmallest(int arr[], int n, int k) {
    // Write your code here
    priority_queue<int> pq;
    
    for(int i = 0; i < k; i++) {
        pq.push(arr[i]);
    }
    
    int index = 0;
    for(int i = k; i < n; i++) {
        if(arr[i] < pq.top()) {
            pq.pop();
            pq.push(arr[i]);
        } else {
            continue;
        }
    }
    
    // Total Time taken O(nlogk)
    
    vector<int> answer;
    for(; !pq.empty(); ) {
        answer.push_back(pq.top());
        pq.pop();
    }
    // This will yield a k sized set of smallest number sorted in descending order 
    // This takes O(k) time and O(k) space
    
    return answer;
}

// Time Complexity : O((nlogk)
// Auxillary Space : O(k)