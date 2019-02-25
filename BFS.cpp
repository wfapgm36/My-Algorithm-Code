#include <iostream>
#include <queue>
#include <vector>

// 너비 우선 탐색(Breadth First Search, BFS)은 탐색을 할 때 너비를 우선으로
// 탐색을 수행하는 탐색 알고리즘입니다.
// 특히 '맹목적인 탐색'을 하고자 할 때 사용할 수 있는 탐색 기법입니다.
// 너비 우선 탐색은 '최단 경로'를 찾아준다는 점에서 최단 길이를 보장해야 할 때
// 많이 사용됩니다. 준비물은 큐(Queue)입니다.

using namespace std;

int number = 7;
int c[7];
vector<int> a[8];

void bfs(int start) {
	queue<int> q;
	q.push(start);
	c[start] = true;
	while (!q.empty()) {
		int x = q.front();
		q.pop();
		printf("%d ", x);
		for (int i = 0; i < a[x].size(); i++) {
			int y = a[x][i];
			if (!c[y]) {
				q.push(y);
				c[y] = true;
			}
		}
	}
}

int main(void) {
	a[1].push_back(2);
	a[2].push_back(1);

	a[1].push_back(3);
	a[3].push_back(1);

	a[2].push_back(3);
	a[3].push_back(2);

	a[2].push_back(4);
	a[4].push_back(2);

	a[2].push_back(5);
	a[5].push_back(2);

	a[3].push_back(6);
	a[6].push_back(3);

	a[4].push_back(5);
	a[5].push_back(4);

	a[6].push_back(7);
	a[7].push_back(6);

	bfs(1);
	return 0;
}