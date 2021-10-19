#include<stdio.h>
int main()
{
	float a, b, c, d;
	printf("请分别输入三角形三边长：");
	scanf("%f%f%f", &a, &b, &c);
	d = (a + b + c) / 2;
	printf("三角形的面积是：%.2f", d);
	return 0;
}
