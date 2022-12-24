#include <iostream>
#include <algorithm>
using namespace std;

int arr[1001];
int tmp[1001];

void merge(int start, int end)
{
	int middle = (start + end) / 2;

	int lidx = start;
	int ridx = middle;

	for (int i = start; i < end; i++)
	{
		if (ridx == end)
			tmp[i] = arr[lidx++];
		else if (lidx == middle)
			tmp[i] = arr[ridx++];
		else if (arr[lidx] < arr[ridx])
			tmp[i] = arr[lidx++];
		else
			tmp[i] = arr[ridx++];
	}

	for (int i = start; i < end; i++)
		arr[i] = tmp[i];
}

void merge_sort(int start, int end)
{
	if (end - start == 1)
		return;

	int middle = (start + end) / 2;
	merge_sort(start, middle);
	merge_sort(middle, end);
	merge(start, end);
}

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int num;
	int limit;

	cin >> num >> limit;

	for (int i = 0; i < num; i++)
	{
		cin >> arr[i]; // 0 ~ (num - 1)
	}

	merge_sort(0, num);

	cout << arr[num - limit] << endl;
}
