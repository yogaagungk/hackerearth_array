#include <bits/stdc++.h>
using namespace std;

int main()
{
	int in, max, cek=0, rsl=0;
	cin>>in>>max;
	int arr[in];
	for(int i=0;i<in;i++){
		cin>>arr[i];
	}
	for(int i=0;i<in;i++){
		if(arr[i]<=max) rsl++;
		else if(arr[i]>max) cek++;
		if(cek==2) break;	
	}
	cout<<rsl<<endl;
	return 0;
}
