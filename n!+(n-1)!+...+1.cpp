#include <stdio.h>

int main() {
	int i = 0;
	int n = 0;
	int m = 0;
	scanf("%d", &m);
	int k = 1;
	int sum = 0;
	for (n = 1; n <= m; n++) {
		k = 1;
		for (i = 1; i <= n; i++) {
			k = k * i;
		}
		sum = sum + k;
	}
	printf("sum=%d\n", sum);
	return 0;
}