#include <bits/stdc++.h>
using namespace std;

int main()
{
	int T;
	cin>>T;
	int N, K, A[1000005];
	
	while(T>0){
		int min;
		cin>>N>>K;
		for(int i=0;i<N;i++){
			cin>>A[i];
			if(i==0) min = A[i];
			else if(A[i]<min) min = A[i];
		}
		int outt;
		if((K-min) < 0) outt = 0;
		else outt = K-min;
		cout<<outt<<endl;
		T--;
	}
	return 0;
}
