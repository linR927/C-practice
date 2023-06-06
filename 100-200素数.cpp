#include <stdio.h>
#include <math.h>

int main() {
	int i = 0;
	int count = 0;
	for (i = 101; i <= 200; i += 2 ) {
		int j = 0;
//		for (j = 2; j < i; j++) {
		for (j = 2; j < sqrt(i); j++) {
			if (i % j == 0)
				break;
		}
		if (j > sqrt(i)) {
			//if (j == i) {
			count++;
			printf("%d ", i);
		}
	}
	printf("\n%d", count);
	return 0;
}