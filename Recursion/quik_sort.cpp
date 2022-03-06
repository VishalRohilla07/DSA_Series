void swap(int *a, int *b) {
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

int partition(int *arr, int start, int end) {
    int pivot = arr[end];
    int j = start;
    int i = start - 1;
    
    while(j < end) {
        if(arr[j] < pivot) {
            i++;
            swap(&arr[j],&arr[i]);
            
        }
        j++;
    }
    swap(&arr[i + 1], &arr[j]);
    
    return i + 1;
    
}

void quickSort(int input[], int start, int end) {
    // base case 
	if(start >= end) {
        return;
    }
    int pivot = partition(input, start, end);
    
    quickSort(input, start, pivot - 1);
    quickSort(input, pivot + 1, end);
}

void quickSort(int input[], int size) {
  /* Don't write main().
     Don't read input, it is passed as function argument.
     Change in the given array itself.
     Taking input and printing output is handled automatically.
  */
    quickSort(input, 0, size - 1);

}