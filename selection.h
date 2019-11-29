#pragma once
int selection_find(int arr[], int a)
{
	int temp=0;
	int index=0;
	int i;
	for (i = 0; i < a; i++) {
		if (temp < arr[i]) { index = i; temp = arr[i]; }
	}
	arr[index] = arr[a-1];
	arr[a - 1] = temp;
	return 0;
}
int selection(int arr[], int a) {
	int i;
	for (i = a; i > 0; i--) { selection_find(arr, i); }
	return 0;
}