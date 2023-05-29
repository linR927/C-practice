#include <stdio.h>
#include <string.h>

struct Book {
	char name[20];
	short price;
};

int main() {
	struct Book b1 = {"c", 55};
	struct Book *pd = &b1;
	printf("%s\n", (*pd).name);//利用pb打印出书名
	//printf("%s\n", *pd->name);//另一种写法
	printf("%p\n", (*pd).name);//地址
	printf("书名：%s\n", b1.name);
	printf("价格：%d\n", b1.price);
	strcpy(b1.name, "c++");
	printf("书名：%s\n", b1.name);//strcpy-string copy-字符串拷贝-库函数-string.h
	b1.price = 25;
	printf("修改后的价格：%d\n", b1.price);
}