#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin >> n;
	int arr[n];
	int prod =1;
	for (int i=0;i<n;i++){
		cin >> arr[i];
		prod*=arr[i];
	}
	for (int j=0;j<n;j++)
	{
		arr[j]=prod/arr[j];
	}

	for(int k=0;k<n;k++){
		cout << arr[k] << " ";
	}
	return 0;
}
