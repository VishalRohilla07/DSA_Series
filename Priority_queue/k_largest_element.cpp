#include<queue>
#include<vector>
vector<int> kLargest(int input[], int n, int k){
    /* Don't write main().
     * Don't read input, it is passed as function argument.
     * Return output and don't print it.
     * Taking input and printing output is handled automatically.
     */
    
    priority_queue<int, vector<int>, greater<int>> pq;
    
    for(int i = 0; i < k; i++) {
        pq.push(input[i]);
    }
    // This forms a k sized set in min heap
    
    for(int i = k; i < n; i++) {
        if(input[i] > pq.top()) {
            pq.pop();
            pq.push(input[i]);
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
    
    // This will yield a k sized set of smallest number sorted in ascending order 
    // This takes O(k) time and O(k) space
    return answer;
	
}

// Time Complexity : O(nlogk)
// Auxillary Space : O(k)