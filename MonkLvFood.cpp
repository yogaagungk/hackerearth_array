#include <bits/stdc++.h>
using namespace std;

int main()
{
	int in, top=-1, queri;
	cin>>in;
	int arr[in];
	
	for(int i=0;i<in;i++){
		arr[i]=0;
		cin>>queri;
		if(queri==1){
			if(arr[top]!=0 && top>=0){
				cout<<arr[top]<<endl;
				top--;
			}else cout<<"No Food"<<endl;
		}else if(queri==2){
			cin>>arr[++top];
		}
	}
	return 0;
}
