#include <iostream>
#include <cstdio>
#include <climits>
#include <algorithm>
#include <utility>
using namespace std;

int main() {
	int n, k, l, c, d, p, nl, np;
	scanf("%d %d %d %d %d %d %d %d", &n, &k, &l, &c, &d, &p, &nl, &np);

	int amount_of_drink = k * l;
	int num_of_limes = c * d;
	int amount_of_salt = p;

	int num_of_toast_per_drink = amount_of_drink / nl;
	int num_of_toast_per_slice = num_of_limes;
	int num_of_toast_per_salt = p / np;

	printf("%d\n", min(num_of_toast_per_salt, min(num_of_toast_per_slice, num_of_toast_per_drink)) / n);

	return 0;

}