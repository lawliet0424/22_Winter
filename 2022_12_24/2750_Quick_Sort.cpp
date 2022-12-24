#include <iostream>
using namespace std;

int arr[1001];

void quick_Sort(int start, int end)
{
	if (start >= end) // 해당 배열에 원소가 아무것도 없을 때이다.
		return;

	int pivot = start;
	int left = start + 1;
	int right = end;

	while (left <= right)
	{
		while (arr[pivot] >= arr[left] && left <= end)
			left++;
		while (arr[pivot] <= arr[right] && right > start)
			right--;

		if (left > right)
			swap(arr[pivot], arr[right]);
		else
			swap(arr[left], arr[right]);
	}
	// right는 pivot이다.

	quick_Sort(start, right - 1);
	quick_Sort(right + 1, end);
}

int main()
{
	int num;
	cin >> num;
	
	for (int i = 0; i < num; i++)
	{
		cin >> arr[i];
	}

	quick_Sort(0, num - 1);

	for (int i = 0; i < num; i++)
	{
		cout << arr[i] << endl;
	}
}
