#include <stdio.h>

// 선택 정렬
// 가장 작은 것을 선택해서 제일 앞으로 보내는 알고리즘

int main(void) {
	int i, j, min, index, temp;
	int array[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
	for (i = 0; i < 10; i++) {
		min = 9999;
		for (j = i; j < 10; j++) {
			if (min > array[j]) {
				min = array[j];
				index = j;
			}
		}
		temp = array[i];
		array[i] = array[index];
		array[index] = temp;
	}
	for (i = 0; i < 10; i++) {
		printf("%d ", array[i]);
	}
	return 0;
}