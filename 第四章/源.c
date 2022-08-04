#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//写出下面各个逻辑表达式的值 a=3,b=4,c=5
//int main() {
//	int a = 3, b = 4, c = 5, x = 0, y = 0;
//	printf("%d\n", a + b > c && b == c);
//	//C语言中非零为真
//	printf("%d\n", a || b + c && b - c);
//	printf("%d\n", !(a > b) &&!c || 1);
//	printf("%d\n", !(c=5) && (y=b)&&0);
//	printf("%d\n", !(a + b) + c - 1 && b + c / 2);
//
//}

//有三个整数，有键盘输入，输出其中最大的数
//int main() {
//	int a = 0, b = 0, c = 0;
//	printf("请输入三个数:>");
//	scanf("%d%d%d", &a, &b, &c);
//	if (b<c)
//		b = c;
//	if (a < b)
//		a = b;
//	printf("%d", a);
//}

//从键盘上输入一个小于1000的正数，要求输出他的平方根（如果平方根不是正数
//，则输出起整数部分，要求在输入数据后先对其进行检查是否为小于10000的正数 
//若不是，则要求重新输入
//#include<math.h>
//int main() {
//	int num = 0;
//	while (1) {
//		printf("请输入一个不小于10000的数:>");
//		scanf("%d", &num);
//		if (num >= 10000)
//		{
//			printf("%.0f", sqrt(num));
//			break;
//
//		}
//		else
//			printf("\n输入错误 请重新输入\n");
//	}
//}

//有一个函数 当x < 1  y = x; 当1 <= x < 10时 y = 2x - 1;当x>=10时 y=3x-11
//int main() {
//	//我默认输入的都为整数
//	int x = 0;
//	printf("请输入一个数:>");
//	scanf("%d", &x);
//	if (x < 1)
//		printf("%d", x);
//	else if (x >= 10)
//		printf("%d", 3 * x - 11);
//	else
//		printf("%d", 2 * x - 1);
//}

//有人编写了以下两个程序, 请分析它们是否能实现题目要求。
// 不要急于上机运行程序, 先分析两个程序的逻辑, 
// 画出它们的流程图，分析它们的运行情况。
// 然后，上机运行程序, 观察和分析结果
//有一个函数，
//#include <stdio.h>
//
//int main()
//{
//    int x, y;
//    printf("enter x:");
//    scanf("%d", &x);
//    y = -1;
//    if (x != 0)
//        if (x > 0)
//            y = 1;
//        else
//            y = 0;
//    printf("x=%d,y=%d\n", x, y);
//    return 0;
//}
//#include <stdio.h>
//
//int main()
//{
//    int x, y;
//    printf("enter x:");
//    scanf("%d", &x);
//    y = 0;
//    if (x >= 0)
//        if (x > 0) y = 1;
//        else y = -1;
//    printf("x=%d,y=%d\n", x, y);
//    return 0;
//}
//悬空else  与离它最近的且未配对的if进行配对

//给出一百分制成绩，要求输出成绩等级‘A’‘B’‘C’‘D’‘E’。 
//90分以上为‘A’，80～89分为‘B’，70～79分为‘C’，
//60～69分为‘D’，60分以下为‘E’。
/*int main() {
	int score = 0,g = 0;
	while (1) {
		printf("请输入你的分数:>");
		scanf("%d", &score);
		if (score >= 0)
			break;
		printf("\n输入错误，请重新输入\n");
	}
	g = score / 10;
	switch (g)
	{
	case 9:
		printf("A");
		break;
	case 8:
		printf("B");
		break;
	case 7:
		printf("C");
		break;
	case 6:
		printf("D");
		break;
	default:
		printf("E");
		break;
	}
}*/

//int main() {
//	int score = 0;
//	while (1) {
//		printf("请输入你的分数:>");
//		scanf("%d", &score);
//		if (score >= 0)
//			break;
//		printf("\n输入错误，请重新输入\n");
//	}
//	if (score >= 90)
//		printf("A");
//	else if (score >= 80)
//		printf("B");
//	else if (score >= 70)
//		printf("C");
//	else if (score >= 60)
//		printf("D");
//	else
//		printf("E");
//}

//给一个不多于5位的正整数 要求:
//求出是几位数
//分别输出每一位数字
//按照逆序输出各个数字

//int main() {
//	int num = 0;
//	int n = 0;//计算几位数
//	printf("请输入一个数字:>");
//	scanf("%d", &num);
//
//	while (num)
//	{
//		printf("%d ", num % 10);
//		n++;
//		num /= 10;
//	}
//	printf("\n它是一个%d位数",n);
//}

//
//企业发放的奖金根据企业的当年利润决定。 
//当利润I低于或等于100000元时，奖金可提成10% ；
//利润大于100000元，小于200000元（100000 < I≤200000）时
//，低于100000元的部分按10% 提成，高于100000元的部分，
//可提成7.5 % ；
// 利润大于200000元，小于400000元（200000 < I≤400000）时，
//低于200000元的部分仍按上述办法提成（下同），高于200000元的部分按5% 
//提成。 利润大于400000元，小于600000元（400000 < I≤600000）时，高于400000元的部分按3% 提成。

//int main() {
//	//i为利润 j为奖金+提成
//	double i = 0.0, j = 0.0;
//	int g = 0;
//	double salary1, salary2, salary3, salary4, salary5;
//	printf("请输入你的利润:>");
//	scanf("%lf", &i);
//	salary1 = 100000.0 * 0.1;
//	salary2 = (200000.0 - 100000.0) * 0.075 + salary1;
//	salary3 = (400000.0 - 200000.0) * 0.05 + salary2;
//	salary4 = (600000.0 - 400000.0) * 0.03 +  salary3;
//	salary5 = (100000.0 - 600000.0) * 0.015 + salary4;
//	switch (g = (int)i / 100000)
//	{
//	case 0:
//		j = i + i * 0.1;
//		break;
//	case 1:
//		j = (i - 100000.0) * 0.075 + salary1;
//		break;
//	case 2:
//	case 3:
//		j = (i - 200000.0) * 0.05 + salary2;
//		break;
//	case 4:
//	case 5:
//		j = (i - 400000) * 0.03 + salary3;
//		break;
//	case 6:
//	case 7:
//	case 8:
//	case 9:
//		j = (i - 600000) * 0.015 + salary4;
//		break;
//	default:
//		j = (i - 1000000) * 0.01 + salary5;
//		break;
//	}
//	printf("总工资为:%.3lf", j);
//}

//int main() {
//	double i = 0.0, j = 0.0;
//	int g = 0;
//	double salary1, salary2, salary3, salary4, salary5;
//	printf("请输入你的利润:>");
//	scanf("%lf", &i);
//	salary1 = 100000.0 * 0.1;
//	salary2 = (200000.0 - 100000.0) * 0.075 + salary1;
//	salary3 = (400000.0 - 200000.0) * 0.05 + salary2;
//	salary4 = (600000.0 - 400000.0) * 0.03 + salary3;
//	salary5 = (100000.0 - 600000.0) * 0.015 + salary4;
//	if (i <= 100000)
//		printf("%.3lf", j = i * 0.1);
//	else if (i <= 200000)
//		printf("%.3lf", j = (i - 100000) * 0.075 + salary1);
//	else if(i<=400000)
//		printf("%.3lf", j = (i - 200000) * 0.05 + salary2);
//	else if(i<=600000)
//		printf("%.3lf", j = (i - 400000) * 0.03 + salary3);
//	else if(i<=1000000)
//		printf("%.3lf", j = (i - 600000) * 0.015 + salary4);
//	else
//	{
//		printf("%.3lf", j = (i - 1000000) * 0.01 + salary5);
//	}
//
//	
//}

//输入四个整数 从小到大排列
//int main() {
//	int i = 1;
//	int arr[4] = { 0 };
//	int tmp = 0;
//	for (i = 0; i < 4; i++) {
//		printf("请输入第%d个数", i + 1);
//		scanf("%d", &arr[i]);
//	}
//	for (i = 0; i < 4; i++) {
//		int j = 0;
//		for (j = 0; j < 3; j++) {
//			if (arr[j] > arr[j + 1])
//			{
//				tmp = arr[j];
//				arr[j] = arr[j+1];
//				arr[j+1] = tmp;
//			}
//
//		}
//	}
//	for (i = 0; i < 4; i++) {
//		printf("%d", arr[i]);
//	}
//}
//

//4个圆塔  圆心(2,2)(-2,2)(-2,-2)(2,-2)
//半径为1 输入任意坐标  不在塔范围内输出0 在塔范围内输出10m
//int main() {
//	int x = 0; int y = 0;
//	printf("请输入x:>");
//	scanf("%d", &x);
//	printf("请输入y:>");
//	scanf("%d", &y);
//	if ((y <= 3 && y >= 1) || (y <= -1 && y >= -3)) {
//		if ((x >= 1 && x <= 3) || (x <= -1 && x >= -3)) {
//			printf("建筑高度为10m");
//			return 0;
//		}
//	}
//	printf("建筑高度为0");
//	return 0;
//}

//求解一元二次方程
//1.考虑a=0 
//2.德尔塔等于0 有两个相等的实根
//3.德尔塔大于0 有两个不等实根
//4.德尔塔小于0,有俩个共轭复根
//(应当以p+qi和p-qi形式输出复根)其中p=-b/2a
//q=根号下德尔塔/2a

//#include<math.h>
//int main() {
//	double a = 0, b = 0.0, c = 0.0;
//	double x1, x2, disc,p,q;
//	printf("请依次输入一元二次方程的a,b,c:>");
//	scanf("%lf%lf%lf", &a, &b, &c);
//	if (a == 0) {
//		printf("这不是一元二次方程");
//		return 0;
//	}
//	disc = b * b - 4 * a * c;
//	if (disc < 0) {
//		p = -b / 2 * a;
//		q = sqrt(-disc) / 2 * a;
//		printf("第一个共轭复根为%.3lf+%.3lfi\n", p, q);
//		printf("第一个共轭复根为%.3lf-%.3lfi\n", p, q);
//	}
//	else {
//		x1 = (-b + sqrt(disc)) / (2 * a);
//		x2 = (-b - sqrt(disc)) / (2 * a);
//		if (x1 == x2)
//		{
//			printf("有两个相等的实根:x1=x2=%.3lf\n", x1);
//		}
//		else {
//			printf("有两个不相等实根:x1=%.3lf,x2=%.3lf\n", x1, x2);
//		}
//	}
//}

//#include<math.h>
//int main() {
//	double a = 0, b = 0.0, c = 0.0;
//	double x1, x2, disc, p, q;
//	printf("请依次输入一元二次方程的a,b,c:>");
//	scanf("%lf%lf%lf", &a, &b, &c);
//	if (a == 0) {
//		printf("这不是一元二次方程");
//		return 0;
//	}
//	disc = b * b - 4 * a * c;
//	if (disc < 0) {
//		p = -b / 2 * a;
//		q = sqrt(-disc) / 2 * a;
//		printf("第一个共轭复根为%.3lf+%.3lfi\n", p, q);
//		printf("第一个共轭复根为%.3lf-%.3lfi\n", p, q);
//	}
//	else {
//		
//		if (fabs(disc)<pow(10,-6))
//		{
//			x1 = (-b + sqrt(disc)) / (2 * a);
//			printf("有两个相等的实根:x1=x2=%.3lf\n", x1);
//		}
//		else {
//			x1 = (-b + sqrt(disc)) / (2 * a);
//			x2 = (-b - sqrt(disc)) / (2 * a);
//			printf("有两个不相等实根:x1=%.3lf,x2=%.3lf\n", x1, x2);
//		}
//	}
//}