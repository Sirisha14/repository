#include<bits/stdc++.h>
using namespace std;
int reverse_array(int l,int r,int arr[])
{
	if(l>=r)
	return 0;
	swap(arr[l],arr[r]);
	reversearray(l+1,r-1,arr);
}
int main()
{
	int n;
	cin>>n;
	cout"<<enter array elements";
	int a[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	reverse_array(0,n-1,a1);
	cout<<"reverse array :";
	for(int i=0;i<n;i++)
	{
		cout<<a1[i]<<" ";
	}
}
