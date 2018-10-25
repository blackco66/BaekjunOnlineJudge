///#1927

#include <iostream>
#include <functional>
#include <queue>
using namespace std;

int main() {
	priority_queue<int, vector<int>, greater<int>> minheap;
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		int input;
		scanf("%d", &input);
		if (input == 0) {
			if (minheap.empty())printf("0\n");
			else {
				printf("%d\n", minheap.top());
				minheap.pop();
			}
		}
		else minheap.push(input);
	}
	return 0;
}