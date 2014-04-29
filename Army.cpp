#include <iostream>
#include <cstdio>
#include <climits>
#include <algorithm>

using namespace std;

int d[101];

int main() {
	int n, a, b;
	scanf("%d", &n);
	for (int i = 1; i < n; i++) {
		scanf("%d\n", &d[i]);
	}
	scanf("%d %d", &a, &b);

	int res = 0;
	for (int i = a; i < b; i++) {
		res += d[i];
	}
	printf("%d\n", res);
	return 0;
}