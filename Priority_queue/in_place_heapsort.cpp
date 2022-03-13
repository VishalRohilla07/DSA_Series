void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}
void minHeapify(int *arr, int n, int index) {
    int curr = index;
    int leftChildIndex = 2 * index + 1;
    int rightChildIndex = 2 * index + 2;
    
    if(leftChildIndex < n and arr[leftChildIndex] < arr[curr]) {
        curr = leftChildIndex;
    } 
    
    if(rightChildIndex < n and arr[rightChildIndex] < arr[curr]) {
        curr = rightChildIndex;
    }
    
    if(curr != index) {
        swap(&arr[curr], &arr[index]); 
        minHeapify(arr, n, curr);
    }
}
void heapSort(int arr[], int n) {
    // Write your code
    int count = n - 1; 
    
    while(count >= 0){
    	minHeapify(arr, n, count);
        count--;
    }
    
    count = 0;
    while(count < n) {
        swap(&arr[0], &arr[n - count - 1]);
        minHeapify(arr, n - count - 1, 0);
        count++;
    }   
}
// Time Complexity : O(nlogn)
// Auxillary Space : O(1)