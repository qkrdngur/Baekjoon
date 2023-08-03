#include <iostream>
#include <stack>
#include <vector>
using namespace std;

stack<int> s;
vector<int> arr;

int main() {

	ios_base::sync_with_stdio(0);
	cin.tie(NULL);


	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		int num;
		cin >> num;
		arr.push_back(num);
	}
	int idx = arr.size();
	while (idx--) {
		int cul = arr[idx];
		while (!s.empty() && s.top() <= cul)
		{
			s.pop();
		}

		if (!s.empty() && s.top() > cul) 
		{
			arr[idx] = s.top();
		}
		else
		{
			arr[idx] = -1;
		}

		s.push(cul);
	}
	for (int i = 0; i < arr.size(); i++) {
		cout << arr[i] << " ";
	}
	return 0;
}