#include <stdio.h>
#include <string.h>

struct Book {
	char name[20];
	short price;
};

int main() {
	struct Book b1 = {"c", 55};
	struct Book *pd = &b1;
	printf("%s\n", (*pd).name);//����pb��ӡ������
	//printf("%s\n", *pd->name);//��һ��д��
	printf("%p\n", (*pd).name);//��ַ
	printf("������%s\n", b1.name);
	printf("�۸�%d\n", b1.price);
	strcpy(b1.name, "c++");
	printf("������%s\n", b1.name);//strcpy-string copy-�ַ�������-�⺯��-string.h
	b1.price = 25;
	printf("�޸ĺ�ļ۸�%d\n", b1.price);
}