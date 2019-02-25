#include <stdio.h>

// Insertion Sort
// 삽입 정렬은 위 문제를 풀 때 각 숫자를 적절한 위치에 삽입하는 방법으로 문제 해결
// 다른 정렬 방식들은 무조건 위치를 바꾸는 방식이었다면 삽입 정렬은 '필요할 때만'위치를 변경
// 자신보다 작은 것을 만날 때 그 위치에 원소를 삽입하면 된다.

int main(void) {
	int i, j, temp;
	int array[10] = { 1, 10, 5, 8, 7, 6, 4, 3, 2, 9 };
	for (i = 0; i < 9; i++) {
		j = i;
		while (j >= 0 && array[j] > array[j + 1]) {
			temp = array[j];
			array[j] = array[j + 1];
			array[j + 1] = temp;
			j--;
		}
	}
	for (i = 0; i < 10; i++) {
		printf("%d ", array[i]);
	}
	return 0;
}