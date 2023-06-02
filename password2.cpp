#include <stdio.h>
#include <string.h>

int main() 
{
	int i = 0;
	char password[20] = {0};
	for (i = 0; i < 3; i++)
	{
		printf("请输入密码：");
		scanf("%s", password);
		//if (password == "123456") ==不能用来判断两个字符串是否相等，应该使用一个库函数-strcmp
		if (strcmp(password, "123456") == 0) 
		{
			printf("登录成功\n");
			break;
		} 
		else 
		{
			printf("输入错误\n");
		}
	}
	if (i == 3)
	{
		printf("登录失败\n");
	}
	return 0;
}
