///#11279

#include <iostream>
#include <functional>
#include <queue>
using namespace std;

int main() {
	priority_queue<int> maxheap;
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		int input;
		scanf("%d", &input);
		if (input == 0) {
			if (maxheap.empty())printf("0\n");
			else {
				printf("%d\n", maxheap.top());
				maxheap.pop();
			}
		}
		else maxheap.push(input);
	}
	return 0;
}