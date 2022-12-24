#include <iostream>
using namespace std;

int arr[10001];

void bubble(int start, int end)
{
	for (int i = start; i <= end; i++) // 0 ~ num - 1 까지
	{
		for (int j = end; j > i; j--) // num - 1 ~ start
		{
			if (arr[j] < arr[j - 1])
				swap(arr[j], arr[j - 1]);
		}
	}
}

int main()
{
	int num;
	cin >> num;
	
	for (int i = 0; i < num; i++)
	{
		cin >> arr[i];
	}

	bubble(0, num - 1);

	for (int i = 0; i < num; i++)
	{
		cout << arr[i] << endl;
	}
}
