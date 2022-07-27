#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<math.h>
//（6)将100~200之间的素数输出。
//（7)求两个数m和n的最大公约数。
//（8)求方程式ax2 + bx + c = 0的根。分别考虑：
//①有两个不等的实根；
//②有两个相等的实根。

//（1)有两个瓶子A和B, 分别盛放醋和酱油，要求将它们互换（即A瓶原来盛醋，现改酱油，B瓶则相反）。
//int main() {
//	char A = 'A';//	A为醋
//	char B = 'B';// B为酱油
//	char C = '0';//空瓶子
//	printf("A是%c\n", A);
//	printf("B是%c\n", B);
//	C = A;
//	A = B;
//	B = C;
//	printf("A是%c\n", A);
//	printf("B是%c\n", B);
//}
//这道题就是交换两个变量的值
 
//在不设置额外变量的情况下 交换整形A 和整形B的值
//方法一:
//int main() {
//	int a = 10;
//	int b = 20;
//	printf("A是%d\n", a);
//	printf("B是%d\n", b);
//	printf("交换后\n");
//	a = a + b;
//	b = a - b;
//	a = a - b;
//	printf("A是%d\n", a);
//	printf("B是%d\n", b);
//}
//方法二
//int main() {
//	int a = 10;
//	int b = 20;
//	printf("A是%d\n", a);
//	printf("B是%d\n", b);
//	printf("交换后\n");
//	a = a ^ b;
//	b = a ^ b;
//	a = a ^ b;
//	printf("A是%d\n", a);
//	printf("B是%d\n", b);
//}

//（2)依次将10个数输入，要求输出其中最大的数。
//int main() {
//	int arr[10] = { 0 };
//	int i = 0;
//	printf("请输入十个数\n");
//	//循环输入十个数
//	for (; i < 10; i++) {
//	scanf("%d", &arr[i]);
//	}
//	//拿一个数与剩下的数进行比较
//	for (i = 0; i < 10; i++) {
//		int j = 0;
//		for (; j < 9; j++) {
//			//如果这个数小于后一个数 直接跳出循环进入下一个
//			if (arr[i] < arr[j + 1])
//				break;
//		}
//		//如果这个数比剩余数都大就输出
//		if (j == 9)
//		{
//			printf("Max is %d", arr[i]);
//			break;
//		}
//
//	}
//}

//（3)有3个数a, b, c, 要求按大小顺序把它们输出。
//int main() {
//	int a = 10;
//	int b = 20;
//	int c = 15;
//	int tmp = 0;
//	if (a < b) {
//		tmp = a;
//		a = b;
//		b = tmp;
//	}
//	if (a < c)
//	{
//		tmp = a;
//		a = c;
//		c = tmp;
//	}
//	if (b < c) {
//		tmp = b;
//		b = c;
//		c = tmp;
//	}
//	printf("%d %d %d", a, b, c);
//	return 0;
//}

//（4)求1 + 2 + 3 + ·· + 100.
//int main() {
//	int count = 0;
//	int i = 0;
//	for (i = 1; i <= 100; i++) {
//		count += i;
//	}
//	printf("%d", count);
//}
//int main() {
//	int i = 1;
//	int j = 100;
//	int count = 0;
//	for (; i <= 50; i++) {
//		count = count+i + j;
//		j--;
//	}
//		printf("%d", count);
//
//}

//（5)判断一个数n能否同时被3和5整除。
//int main() {
//	int n = 0;
//	printf("将判断您输入的数是否同时被3和5整除:>");
//	scanf("%d", &n);
//	if (n % 3 == 0 && n % 5 == 0) 
//		printf("%d能被3和5整除", n);
//	
//	else
//		printf("%d不能被3和5整除", n);
//}

//（6)将100~200之间的素数输出。
//方法一
//int main() {
//	int j = 0;
//	int i =100;
//	for (; i <= 200; i++) {
//		for (j = 2; j < i; j++) {
//			if (i % j == 0)
//				break;
//		}
//		if (i == j) {
//			printf("%d ", i);
//		}
//	}
//}
//
//方法二
//int main() {
//	int j = 0;
//	int i =100;
// int count=0;
//	for (; i <= 200; i++) {
//		for (j = 2; j <=(i/2); j++) {
//			if (i % j == 0)
//				break;
//		}
//		if ((i/2) < j) {
//			printf("%d ", i);
//			count++;
//		}
//	}
//	printf("%d", count);
//}
//方法三
//#include<math.h>
//int main() {
//	int j = 0;
//	int i =100;
//	int count = 0;
//	for (; i <= 200; i++) {
//		for (j = 2; j <=sqrt(i); j++) {
//			if (i % j == 0)
//				break;
//		}
//		if (sqrt(i)<j) {
//			printf("%d ", i);
//			count++;
//		}
//	}
//	printf("%d", count);
//}

//（7)求两个数m和n的最大公约数。
//int main() {
//	int m = 0;
//	int n = 0;
//	int ret = 0;
//	scanf("%d%d", &m, &n);
//	if (n > m) {
//		m = m ^ n;
//		n = m ^ n;
//		m = m ^ n;
//	}
//	while ( m % n!=0) {
//		ret = m % n;
//		m = n;
//		n = ret;
//	}
//	printf("最大公约数是%d", n);
//}

//（8)求方程式ax2 + bx + c = 0的根。分别考虑：
//①有两个不等的实根；
//②有两个相等的实根。

int main() {
	double a = 0.0,b = 0.0,c = 0.0;
	double d = 0.0;
	printf("我将判断二元一次方程有几个根，请依次输入a,b,c:>");
	scanf("%lf%lf%lf", &a, &b, &c);
	d = (b * b) - (4 * a * c);
	if (d > 0) {
		printf("有两个不相等的实根");
		printf("x1 is %.2lf,x2 is %.2lf", (-b + sqrt(d)) / (2 * a), (-b - sqrt(d)) / (2 * a));
	}
	else if (d == 0)
	{
		printf("有两个相同的实根");
		printf("%0.2lf", (-b) / (2 * a));
	}
	else 
		printf("没有实根");

}