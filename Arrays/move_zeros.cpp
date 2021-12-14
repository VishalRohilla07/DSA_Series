#include<iostream>
#include<vector>
using namespace std;

void moveZero(int a[], int n){
  int i =0;
  for(int j =0;j<n;j++){

    if(a[j] !=0){
      swap(a[j],a[i]);
      i++;
    }}
  }

int main(){
  int A[] = { 6, 0, 8, 2, 3, 0, 4, 0, 1 };
  moveZero(A,9);
  for (int i = 0; i <9; i++) {
        printf("%d ", A[i]);
    }
  return 0;
}