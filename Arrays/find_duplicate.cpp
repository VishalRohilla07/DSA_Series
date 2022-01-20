#include<iostream>
using namespace std;

int duplicate(int arr[],int n){
    int answer = 0;
    for(int i =0; i<n;i++){
        answer = answer ^ arr[i];
    }
    for(int i=0; i<=n-2;i++){
        answer = answer ^ i;
    }
    return answer;


}

int main(){
    int t;
    cin >>t;
    while(t--){
        int arr[100];
        int n ;
        cin>> n;
        for(int i = 0 ; i<n;i++){
            cin>> arr[i];
        }
        cout<<duplicate(arr,n);
    }
    return 0;
}
