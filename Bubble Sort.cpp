#include <stdio.h>

// Bubble Sort
// 옆에 있는 값과 비교하여 더 작은 값을 반복적으로 앞으로 보내는 정렬 방법
// 버블 정렬은 정렬 알고리즘 중에서 구현은 가장 쉽지만 가장 비효율적인 알고리즘
// O(N^2)

int main(void) {
	int i, j, temp;
	int array[10] = { 1, 10, 5, 8, 7, 6, 4, 3, 2, 9 };
	for (i = 0; i < 10; i++) {
		for (j = 0; j < 9 - i; j++) {
			if (array[j] > array[j + 1]) {
				temp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = temp;
			}
		}
	}
	for (i = 0; i < 10; i++) {
		printf("%d ", array[i]);
	}

	return 0;
}