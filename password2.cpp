#include <stdio.h>
#include <string.h>

int main() {
	int i = 0;
	char password[20] = {0};
	for (i = 0; i < 3; i++) {
		printf("���������룺");
		scanf("%s", password);
		//if (password == "123456") ==���������ж������ַ����Ƿ���ȣ�Ӧ��ʹ��һ���⺯��-strcmp
		if (strcmp(password, "123456") == 0) {
			printf("��¼�ɹ�\n");
			break;
		} else {
			printf("�������\n");
		}
	}
	if (i == 3) {
		printf("��¼ʧ��\n");
	}
	return 0;
}