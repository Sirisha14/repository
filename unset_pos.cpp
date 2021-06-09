#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,p;
	cin>>n;
	cin>>p;
	n=n^(1<<(p-1));
	cout<<n<<endl;
}
