#include <stdio.h>


//int main() {
//	int i = 1;
//	int k = 1;
//	int n = 0;
//	scanf("%d", &n);
//	while (i <= n) {
//		k = i * k;
//		i++;
//	}
//	printf("%d ", k);
//	return 0;
//}
int main() {
	int i = 0;
	int n = 0;
	int k = 1;
	scanf("%d", &n);
	for (i = 1; i <= n; i++) {
		k = k * i;
	}
	printf("k=%d\n", k);
	return 0;
}