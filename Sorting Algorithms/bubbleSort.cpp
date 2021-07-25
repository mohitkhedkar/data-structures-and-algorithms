#include <bits/stdc++.h>
using namespace std;

void swap(int *xp, int *yp){
	int temp = *xp;
	*xp = *yp;
	*yp = temp;
	
}

void bubblesort(int arr[], int n){
	int i,j;
	bool swapped=false;
	
	for(int i=0;i<n;i++){
		for(int j=0;j<n-i-1;j++){
			if(arr[j]>arr[j+1]){
				swap(&arr[j],&arr[j+1]);
				swapped=true;
			}
		}
		if(swapped==false)
			break;
	}
	
}

int main() {
	int arr[] ={64,35,25,12,2,10,11};
	
	int n= sizeof(arr)/sizeof(arr[0]);
	bubblesort(arr,n);
	
	cout<<"Sorted Array : "<<endl;
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
	
	
	return 0;
}
