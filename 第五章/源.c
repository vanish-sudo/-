#define _CRT_SECURE_NO_WARNINGS 1






//2.请补充例5.7程序，分别统计当“f
//“fabs(t) >= 1e-6”
//“fabs(t) >= 1e-8
//”时执行循环体的次数。
# include <stdio.h>
# include <math.h>

//int main()
//{
//	int sign = 1;
//	double pi = 0.0, term = 1.0, n = 1.0;
//	int count = 0;//计算循环体进行了多少次
//	/*while (fabs(term) >= 1e-6)*/
//	while (fabs(term) >= 1e-8)
//	{
//		pi += term;
//		n += 2;
//		sign = -sign;
//		term = sign / n;
//		count++;
//	}
//	pi *= 4;
//	printf("pi的近似值是%10.8f\n", pi);
//	printf("pi的近似值是%d\n", count);
//	return 0;
//}
//


/*http://t.csdn.cn/uPnVJ*/
//3.输入两个正整数m和n, 求其最大公约数和最小公倍数。
//解题思路：最大公因数，也称最大公约数、最大公因子，指两个或多个整数共有约数中最大的一个；
//最小公倍数是指两个或多个整数公有的倍数叫做它们的公倍数，其中除0以外最小的一个公倍数就叫
//做这几个整数的最小公倍数。
//最小公倍数 = 两整数的乘积÷最大公约数 ， 所以怎么求最大公约数是关键。
//int main() {
//	int n = 0;//输入时较大的一个数
//	int m = 0;//输入时娇小的一个数
//	int p1 = 0;//存放最大公约数
//	int p2 = 0;//存放最大公倍数
//	scanf("%d%d", &n, &m);
//		//交换
//	if (n < m) {
//		n = m ^ n;
//		m = m ^ n;
//		n = m ^ n;
//	}
//	p2 = n * m;
//	//辗转相除求最大公约数
//	while (n % m) {
//		p1 = n % m;
//		n = m;
//		m = p1;
//	}
//	p2 /= p1;
//	printf(" 的最大公约数为%d", p1);
//	printf(" 的最小公倍数为%d", p2);
//}

//4.输入一行字符，分别统计出其中英文字母、空格、数字和其他字符的个数。
//int main() {
//	char arr = 0;
//	int a = 0;//计算英文字母数量
//	int b = 0;//计算空格数量
//	int c = 0;//计算数字数量
//	int d = 0;//计算其他字符数量
//
//	while ((arr = getchar()) != '\n') {
//		if ((arr >= 'a' && arr <= 'z') || (arr >= 'A' && arr <= 'Z')) {
//			a++;
//			continue;
//		}
//		else if (arr==' ') {
//			b++;
//			continue;
//		}
//		else if (arr >= '0' && arr <= '9')
//		{
//			c++;
//			continue;
//		}
//		d++;
//	}
//	printf("英文字母的个数为：%d\n", a);
//	printf("空格的个数为： %d\n", b);
//	printf("数字的个数为： %d\n", c);
//	printf("其他字符的个数为： %d\n", d);
//
//}

http://t.csdn.cn/dZE4y
//5.求Sn = a + aa + aaa + ..· + aa···a之值，其中a是一个数字，n表示a的位数，n由键盘输入。
// 例如：2 + 22 + 222 + 2222 + 22222（此时n = 5)
//
//
//int main() {
//	int n = 0;
//	int a = 0;
//	int i = 0;
//	int sum = 0;
//	int tmp = 0;
//	printf("请输入a的值:>");
//	scanf("%d", &a);
//	printf("\n请输入n的值:>");
//	scanf("%d", &n);
//	tmp = a;
//	while (n--) {
//		sum = sum + tmp;
//		tmp = (tmp * 10) + a;
//	}
//printf("%d",sum);
//}

//http://t.csdn.cn/GcMpK
//求1!+2!+3!+.....+20!
// 方法一
//int main() {
//	int n = 0;
//	int i = 0;
//	int sum = 0;
//	int value = 1;
//	printf("请输入n:>");
//	scanf("%d", &n);
//	i = n;
//	for (i; i > 0; i--) {
//		int j = i;
//		value = 1;
//		for (j; j>0; j--) {
//			value *= j;
//		}
//		sum = sum + value;
//	}
//	printf("%d\n", sum);
//}

//方法二
//int main()
//{
//
//	int n = 0;
//	int ret = 1;
//	int sum = 0;
//	for (n = 1; n <= 20; n++)
//	{
//		ret = ret * n;
//		sum = sum + ret;
//	}
//	printf("%d\n", sum);
//
//
//}

//int main() {
//	double k1 = 0.0;
//	double k2 = 0.0;
//	double k3 = 1.0;
//	int i = 0;
//	for (i=1; i <= 100; i++) {
//		k1 += i;
//	}
//	for (i=1; i <= 50; i++) {
//		k2 +=  pow(i,2);
//	}
//	for (i = 2; i <= 10; i++)
//	{
//		k3 =k3+ 1.0 /i;
//	}
//	printf("%lf\n", k1+k3+k2);
//}

//输出所有的水仙花数

//int main() {
//	int i = 100;
//	
//	for (i=100; i <= 999; i++) {
//		int n = 1;
//		int tmp = i;
//		int sum = 0;
//		while (tmp /= 10) {
//			n++;
//		}
//		tmp = i;
//		while (tmp) {
//			sum =sum+ (int)pow(tmp % 10,n);
//			 tmp/= 10;
//		}
//		if (sum == i)
//			printf("%d ", i);
//	}
//}

//查找1000以内的完数
//int main() {
//	int i = 0;
//	for (i = 1; i <= 1000; i++) {
//		int sum = 0;
//		int j = 0;
//		int comma = 0;//控制逗号
//		for (j = i; j > 0; j--) {
//			if (i % j == 0 && i != j) {
//				sum += j; 
//			}
//		}
//		if (sum == i) {
//			printf("%d its factors are ", i);
//			for (j = 1; j < i; j++) {
//				if (i % j == 0)
//				{
//					if (comma!=0)
//					{
//						printf(",");
//					}	
//					printf("%d", j);	
//					comma = 1;
//				}
//			}
//			printf("\n");
//		}
//	}
//}


//有一个分数序列 求出这数列前20项之和
//
//int main() {
//	double sum=0;
//	double mother = 1.0;
//	double tmp = 1.0;
//	double son = 2.0;
//	double i = 1;
//	for (i; i <= 20; i++) {
//		//分子等于前一项的分子分母相加 分母等于前一项的分子
//		sum += son / mother;
//		tmp = son;
//		son += mother;
//		mother = tmp;
//	}
//	printf("%lf", sum);
//}


//求从100m高度自由落下
//int main() {
//
//	double h = 100.0;
//	double sumh =100.0;
//	int i = 1;
//	for (i = 2; i <= 10; i++) {
//		h = h / 2;
//		sumh += 2 * h;
//}
//	printf("第10次落地时共经过%lf米\n", sumh);
//	printf("第10次落地时反弹%lf米\n", h);
//}



http://t.csdn.cn/OtaxK
//猴子吃桃问题

//int main() {
//	int x1 = 0;//前一天所剩桃子
//	int x2 = 1;//当前所剩桃子
//	int day = 10;
//	for (day; day>1; day--) {
//		x1 = 2*(x2 + 1);
//		x2 = x1;
//	}
//	printf("第一天所摘桃数为：%d",x1);
//}

//递归
//int sumPeach(int day) {
//	if (day == 10)
//		return 1;
//	
//	return 2 * (sumPeach(day+1) + 1);
//}
//
//int main() {
//	printf("%d", sumPeach(1));
//}

 
//打印菱形
//int main() {
//	int n = 4;//控制上半行数
//	//打印上半部分
//	int i = 0;
//	for (i = 1; i <= n; i++) {
//		int j = 0;
//		//打印空格 3  2  1 0
//		for (j = i; j <= n - 1; j++) {
//			printf(" ");
//		}
//		//打印*
//		for (j = 1; j <= 2 * i - 1; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//
//	//打印下半部分
//	for (i = 1; i <= n - 1; i++) {
//		//打印空格 1 2 3
//		int j = 0;
//		for (j = 1; j <= i; j++) {
//			printf(" ");
//		}
//		//打印*
//		for (j = 1; j <= 2 * (n - i) - 1; j++) {
//			printf("*");
//		}
//		printf("\n");
//	}
//}

int main() {
	char A;
	char B;
	char C;
	char opponent;
	for (opponent = 'X'; opponent <= 'Z'; opponent++) {
		if (opponent != 'X' && opponent != 'Z')
			C = opponent;
	}
	for (opponent = 'X'; opponent <= 'Z'; opponent++) {
		if (opponent != 'X' && opponent != C) {
			A = opponent;
		}
	}
	for (opponent = 'X'; opponent <= 'Z'; opponent++) {
		if (opponent != A && opponent != C) {
			B = opponent;
		}
	}
	printf("A的对手是%c\n", A);
	printf("B的对手是%c\n", B);
	printf("C的对手是%c\n", C);
	
}