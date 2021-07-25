#include <bits/stdc++.h>
using namespace std;

void selectionSort(int arr[], int n){
    int min_index;
    for(int i=0;i<n;i++){
        min_index=i;
        for(int j=i+1;j<n;j++)
            if(arr[j]<arr[min_index])
                min_index=j;

			swap(arr[min_index],arr[i]);
    }
}


int main() {
    int arr[] = {65,25,12,11,22};
    int n= sizeof(arr)/sizeof(arr[0]);
    selectionSort(arr,n);
    cout<<"Sorted Array : "<<endl;
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}

    return 0;
}
