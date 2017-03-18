#include <bits/stdc++.h>
using namespace std;

int main()
{
	int T, N, K,X1, X2, Y;
	scanf("%d", &T);
	while(T>0){
		scanf("%d %d", &N, &K);
		K = K%N;
		X1 = N-K;
		X2 = X1;
        int A[X1];
		while(X2--){
			scanf("%d", &A[X1-X2-1]);
		}
		while(K--){
			scanf("%d", &Y);
			printf("%d ", Y);
		}
		X2=X1;
		while(X2--){
			printf("%d ", A[X1-X2-1]);
		}
		printf("\n");
		T--;
	}
	return 0;
}