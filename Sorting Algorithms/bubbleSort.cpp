#include <bits/stdc++.h>
using namespace std;

void bubblesort(int arr[], int n){
	int i,j;
	bool swapped=false;
	
	for(int i=0;i<n;i++){
		for(int j=0;j<n-i-1;j++){
			if(arr[j]>arr[j+1]){
				swap(arr[j],arr[j+1]);
				swapped=true;
			}
		}
		if(swapped==false)
			break;
	}
	
}

int main() {
	int arr[] ={64,35,25,52,2,10,11};
	
	int n= sizeof(arr)/sizeof(arr[0]);
	bubblesort(arr,n);
	
	cout<<"Sorted Array : "<<endl;
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
	
	
	return 0;
}

// Time Complexity:

// Worst Case Time Complexity [ Big-O ]: O(n2)
// Best Case Time Complexity [Big-omega]: O(n)
// Average Time Complexity [Big-theta]: O(n2)

// Space Complexity: O(1)
