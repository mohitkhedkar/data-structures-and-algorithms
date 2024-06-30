/*
Time Complexity  = O(n^2)
space complexity = O(1)
*/
#include<bits/stdc++.h>
using namespace std;

void bubbleSort(int arr[], int n) {

	for (int i = n - 1; i >= 0; i--) {
		for (int j = 0; j <= i - 1; j++) {
			if (arr[j] > arr[j + 1]) {
				int temp = arr[j + 1];
				arr[j + 1] = arr[j];
				arr[j] = temp;
			}
		}
	}

	cout << "After Using bubble sort: " << "\n";
	for (int i = 0; i < n; i++) {
		cout << arr[i] << " ";
	}
	cout << "\n";

}

int main() {

	int arr[] = {2, 54, 85, 6, 1};
	int n = sizeof(arr) / sizeof(arr[0]);

	for (int i = 0; i < n; i++)	{
		cout << arr[i] << " ";
	}
	cout << endl;

	bubbleSort(arr, n);
	return 0;
}

