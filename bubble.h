#pragma once

int bubble_switch(int arr[], int a) {

	int i;
	int temp;
	for (i = 0; i < a-1; i++)//����i-1,��Ϊ��i��������λ�������������±�
	{
		if (arr[i] > arr[i + 1])
		{
			temp = arr[i];
			arr[i] = arr[i + 1];
			arr[i + 1] = temp;
		}
	}
	return 0;
}
int bubble(int arr[], int a)
{
	int i;
	for (i = a; i > 0; i--) {
		bubble_switch(arr, i);
	}
	return 0;
}