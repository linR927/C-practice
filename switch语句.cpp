#include <stdio.h>
#include <string.h>


//
//int main() {
//	int day = 0;
//	scanf("%d", &day);
//	switch (day) { //只能是整型
//		case 1:
//			printf("星期一\n");
//			break;
//		case 2:
//			printf("星期二\n");
//			break;
//		case 3:
//			printf("星期三\n");
//			break;
//		case 4:
//			printf("星期四\n");
//			break;
//		case 5:
//			printf("星期五\n");
//			break;
//		case 6:
//			printf("星期六\n");
//			break;
//		case 7:
//			printf("星期天\n");
//			break;
//	}
//	return 0;
//}
//int main() {
//	int day = 0;
//	printf("星期几：");
//	scanf("%d", &day);
//	switch (day) { //只能是整型
//		case 1:
//			if (day == 1)
//				printf("nan\n");
//		case 2:
//		case 3:
//		case 4:
//		case 5:
//			printf("工作日\n");
//			break;
//		case 6:
//		case 7:
//			printf("休息日\n");
//			break;
//		default:
//			printf("输入错误\n");
//			break;
//	}
//	return 0;
//}
int main() {
	int n = 1;
	int m = 2;
	switch (n) {
		case 1:
			m++;//m=3
		case 2:
			n++;//n=2
		case 3:
			switch (n) {
				case 1:
					n++;//不执行
				case 2:
					m++;//m=4
					n++;//n=3
					break;//只结束当前的switch
			}//case3并没有break，可继续执行case4
		case 4:
			m++;//m=5
			break;
		default:
			break;
	}
	printf("m=%d,n=%d", m, n);
	return 0;
}











