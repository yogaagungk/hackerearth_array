#include <bits/stdc++.h>
using namespace std;

int main()
{
	int sz, in;
	scanf("%d %d", &sz, &in);
	
	int arr[sz+1];
	int que;
	for(int i=1;i<=sz;i++){
		scanf("%d", &arr[i]);
	}
	for(int i=0;i<in;i++){
		scanf("%d", &que);
		if(que==1){
			int a;
			scanf("%d", &a);
			arr[a] = !arr[a];
		}else if(que==0){
			int a,b;
			scanf("%d %d", &a, &b);
			if(arr[b]==0) printf("EVEN\n");
			else printf("ODD\n");
		}
	}
	return 0;
}
