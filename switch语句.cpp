#include <stdio.h>
#include <string.h>


//
//int main() {
//	int day = 0;
//	scanf("%d", &day);
//	switch (day) { //ֻ��������
//		case 1:
//			printf("����һ\n");
//			break;
//		case 2:
//			printf("���ڶ�\n");
//			break;
//		case 3:
//			printf("������\n");
//			break;
//		case 4:
//			printf("������\n");
//			break;
//		case 5:
//			printf("������\n");
//			break;
//		case 6:
//			printf("������\n");
//			break;
//		case 7:
//			printf("������\n");
//			break;
//	}
//	return 0;
//}
//int main() {
//	int day = 0;
//	printf("���ڼ���");
//	scanf("%d", &day);
//	switch (day) { //ֻ��������
//		case 1:
//			if (day == 1)
//				printf("nan\n");
//		case 2:
//		case 3:
//		case 4:
//		case 5:
//			printf("������\n");
//			break;
//		case 6:
//		case 7:
//			printf("��Ϣ��\n");
//			break;
//		default:
//			printf("�������\n");
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
					n++;//��ִ��
				case 2:
					m++;//m=4
					n++;//n=3
					break;//ֻ������ǰ��switch
			}//case3��û��break���ɼ���ִ��case4
		case 4:
			m++;//m=5
			break;
		default:
			break;
	}
	printf("m=%d,n=%d", m, n);
	return 0;
}











