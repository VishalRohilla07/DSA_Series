#include <bits/stdc++.h> 
using namespace std;

void pairSum(int input[], int size, int x) {
    sort(input,input+size);
    float y=x/2;
    for(int i=size-1; input[i]>=ceil(y);i--){
      for(int j=i-1;j>=0;j--)
      {
        if(input[i]+input[j]==x)
        cout<<input[j]<<" "<<input[i]<<endl;
        }
    }
}

int main() {
	int size;
	int x;

	cin>>size;
	int *input=new int[1+size];	
	
	for(int i=0;i<size;i++)
		cin>>input[i];
	cin>>x;
	pairSum(input,size,x);
		
	return 0;
}