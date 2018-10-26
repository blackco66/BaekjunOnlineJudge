///#3780

#include<iostream>
using namespace std;

struct comp {
public:
	int comp_num;
	comp *parent_comp = NULL;
}A[20001];

inline void measure_length(int i) {
	int it = i;
	int length = 0;
	while (A[it].parent_comp != NULL) {
		int temp = A[it].parent_comp->comp_num;
		length += it > temp ? it - temp : temp - it;
		it = temp;
	}
	printf("%d\n", length);
}

int main() {
	int t; scanf("%d", &t);
	for (int tc = 0; tc < t; tc++) {
		int num_of_comps; scanf("%d", &num_of_comps);
		for (int i = 1; i <= num_of_comps; i++) {
			A[i].comp_num = i;
		}
		char sign;
		scanf("%c", &sign);
		while (true) {
			if (sign == 'E') {
				int center_i; scanf("%d", &center_i);
				measure_length(center_i);
			}
			else if (sign == 'I') {
				int center_i, center_j; scanf("%d %d", &center_i, &center_j);
				A[center_i].parent_comp = &A[center_j];
			}
			else if (sign == 'O')break;
			scanf("%c", &sign);
		}
	}

	return 0;
}