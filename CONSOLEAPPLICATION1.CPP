/*易错程序*/
#include <stdio.h>

void main1()
{
	int num = 10;
	printf("%f", num);
}
void main2()
{
	unsigned char chnum1 = 255;
	printf("%d\n", chnum1 + 1);
	//对chnum1做运算后就变成了int型
	unsigned char chnum2 = 255 + 1;
	printf("%d", chnum2);
}
void main3()
{
	unsigned int num = -1;
	for (int i = 1; i < num; i++)
	{
		printf("%d\n", i);
	}
}
void main4()
{
	char ch = -7;
	printf("%p", &ch);
}
int main()
{
	main3();
	main2();
	main1();

}