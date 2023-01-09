#include <bits/stdc++.h>
#include <algorithm>
#include <string>
using namespace std;

int arr[1048577];
int tmp[1048577];
int n, limit;

void merge(int start, int middle, int end) {

	if (end - start > n / limit) { // 정렬해야하는 원소의 수 > 하나의 묶음에 있는 원소의 수 -> 단계수에 따라 달라짐.
		return;
	}
		
	int left, cur, right;
	left = right = start;
	cur = middle;

	while (left < middle && cur < end)
		if (arr[left] < arr[cur])
			tmp[right++] = arr[left++];
		else
			tmp[right++] = arr[cur++];

	while (left < middle)
		tmp[right++] = arr[left++];
	while (cur < end)
		tmp[right++] = arr[cur++];

	for (int i = start; i < end; i++)
		arr[i] = tmp[i];
}

void merge_sort(int start, int end) {
	if (start == end - 1)
		return;

	int middle = (start + end) / 2;
	merge_sort(start, middle);
	merge_sort(middle, end);
	merge(start, middle, end);
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);

	cin >> n;

	for (int i = 0; i < n; i++)
		cin >> arr[i];

	cin >> limit;

	merge_sort(0, n); // 합병 정렬

	for (int i = 0; i < n; i++)
		cout << arr[i] << " ";

	return 0;
}
