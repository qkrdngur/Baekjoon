#include <iostream>
#include <vector>
#include <math.h>
using namespace std;

vector<int> v;
int main() {
	int n, k;
	int arr[10];
	int count = 0;

	cin >> n >> k;

	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}

	for (int i = n - 1; i >= 0; i--) {
		while (k >= arr[i]) // 목표값보다 배열안에 값이 작을때만 돌게
		{
			k -= arr[i]; // i수 만큼 k에서 빼주고
			count++;
		}
	}

	cout << count;
}