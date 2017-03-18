#include <bits/stdc++.h>
using namespace std;

int main()
{
    int size;
    scanf("%d", &size);
    
    int arr1[size], arr2[size];
    for(int i=0;i<size;i++){
        scanf("%d", &arr1[i]);
    }
    for(int i=0;i<size;i++){
        scanf("%d", &arr2[i]);
    }
    for(int i=0;i<size;i++){
        printf("%d ", arr1[i]+arr2[i]);
    }
	printf("\n");
    return 0;
}
