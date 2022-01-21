#include <iostream>
using namespace std;

int findDuplicate(int *arr, int n){
    int answer = 0;
    for(int i =0; i<n;i++){
        answer = answer ^ arr[i];
    }
    for(int i=0; i<=n-2;i++){
        answer = answer ^ i;
    }
    return answer;
}

int main()
{
	int t;
	cin >> t;
	
	while (t--)
	{
		int size;
		cin >> size;
		int *input = new int[size];

		for (int i = 0; i < size; i++)
		{
			cin >> input[i];
		}

		cout << findDuplicate(input, size) << endl;
	}

	return 0;
}