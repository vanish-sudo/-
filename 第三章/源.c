#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//1.假如我国国民生产总值的年增长率为7%, 计算10年后我国国民生产总值与现在相
//比增长多少百分比。计算公式为
//p = (1 + r)^n  r为年增长率，n为年数，
//p为与现在相比的倍数。
//#include<math.h>
//int main() {
//	double p = 0.0;// p为与现在比的倍数
//	double r = 0.07;//年增长率
//	int n = 10;//年数
//	p = pow(1 + r, n);
//	printf("%.2lf", p);
//	return 0;
//}


//2.存款利息的计算。有1000元，想存5年，可按以下5种办法存：
//（1)一次存5年期。
//（2)先存2年期，到期后将本息再存3年期。
//（3)先存3年期，到期后将本息再存2年期。
//（4)存1年期，到期后将本息再存1年期，连续存5次。
//（5)存活期存款。活期利息每一季度结算一次。
//2017年的银行存款利息如下：
//1年期定期存款利息为1.5 %;
//2年期定期存款利息为2.1 %;
//3年期定期存款利息为2.75 %;
//5年期定期存款利息为3%;
//活期存款利息为0.35 % (活期存款每一季度结算一次利息）。
//	如果r为年利率，n为存款年数，则计算本息和的公式如下：
//	1年期本息和：
//	P = 1000 * (1 + r)
//	n年期本息和：
//	P = 1000 * (1 + n * r);
//存n次1年期的本息和：
//P = 1000 * (1 + r)^n;
//活期存款本息和：
//P = 1000 * (1 + r / 4)^(4*n).
//说明：1000*(1+r/4)是一个季度的本息和。
// 
//#include<math.h>
//int main() {
//   double money = 1000.0;//本金
//	double salary = 0.0;//未满五年本息和
//	double p = 0.0;//本息和
//	double r = 0.0;//利率
//	float n = 0.0;//存款年数
//	printf("一次存5年期。\n");
//	r = 0.03;
//	n = 5.0;
//	p = money * (1 + n * r);
//	printf("年本息和为%lf\n", p);
//
//	printf("先存2年再存3年。\n");
//	r = 0.021;
//	n = 2.0;
//	salary = money * (1 + n * r);
//	r = 0.0275;
//	n = 3.0;
//	p = salary * (1 + n * r);
//	printf("年本息和为%lf\n", p);
//
//	printf("先存3年再存2年。\n");
//	r = 0.0275;
//	n = 3.0;
//	salary = money * (1 + n * r);
//	r = 0.021;
//	n = 2.0;
//	p = salary * (1 + n * r);
//	printf("年本息和为%lf\n", p);
//
//	printf("存1年期，到期后将本息再存1年期，连续存5次\n");
//	r = 0.015;
//	n = 5.0;
//	p = money * (pow(1+r,n));
//	printf("年本息和为%lf\n", p);
//
//	printf("存活期存款。活期利息每一季度结算一次。\n");
//	r = 0.0035;
//	n = 5.0;
//	p = money * (pow(1 + r/4, 4.0*n));
//	printf("年本息和为%lf\n", p);
//
//	return 0;
//
//}

//3.购房从银行贷了一笔款d, 准备每月还款额为p, 月利率为r, 计算多少月能还清。设
//d为300 000元，p为6000元，r为1% .对求得的月份取小数点后一位，对第2位按四舍五
//入处理。
//公式自己百度题目
//#include<math.h>
//int main() {
//	double d = 300000.0;//贷款金额
//	float p = 6000.0;//每月还款金额
//	float r = 0.01;//月利率
//	float m = 0.0;//还款完成月数
//	m = (log10(p) - log10(p - d * r)) / log10(1.0 + r);
//	printf("%.2f\n", m);
//	printf("四舍五入 所得月数为:>");
//	printf("%.1f", m);
//	return 0;
//}

//	4.分析下面的程序：
//#include<stdio.h>
//int main()
//{
//	   char c1, c2;
//		 c1 = 197;
//		c2 = 198;
//		printf("cl = %c, c2 = %c\n",c1, c2);
//		printf("cl = %d, c2 = %d\n", c1, c2);
//		return 0;
//	}
//（1)运行时会输出什么信息？为什么？
// a  b
// 97 98
//（2)如果将程序第4, 5行改为
//cl = 197;
//c2 = 198;
//运行时会输出什么信息？为什么？
// ? ?
// 197 198
// 由于char类型无符号类型有0-2^8 
// 而有符号类型取值范围为-128--127
// 而且char类型是根据ASCII码表对应的
// ASCII码表没有超过127的字符
// 而且197 198也超过了char类型的最大范围 导致溢出
// 
//（3)如果将程序第3行改为 int c1 int c2;运行时会输出什么信息？为什么
// a  b
// 97 98
//因为char类型是站一个字节的整形








//5.用下面的scanf函数输入数据，
//使a = 3, ，b = 7, x = 8.5
//y = 71.82, cl = 'A',c2='a'.在键盘上应如何输入？
//#include<stdio.h>
//
//int main()
//{
//	int a, b;
//	float x,y;
//	char c1 ,c2;
//	scanf("a = %db = %d", &a, &b);
//	scanf("%f%e",&x,&y);
//	scanf("%c%c",&c1,&c2);
//	printf("a=%d,b=%d\n", a, b);
//	printf("x=%f,y=%f\n", x, y);
//	printf("c1=%c,c2=%c\n", c1, c2);
//	return 0;
//}
//题目已经给出了代码，考查的是scanf函数的输入
//给出了三个scanf 分别是是a = % b = % d、 % f % e、 % c % c
//1、第一个和第二个 % d的之间除了格式控制外还有普通字符，所以要原样输出。输入的是a = 3b = 7而不是3 7注意不能有空格或者其他字符。
//2、输入完第一个scanf后要先输入一个空格在输出 % f的值，否则f % f的值会到上一个 % d里去。
//3、 %e的格式其实可以直接输入小数形式，它会自动转化为 %e格式。
//4、特别注意： %c格式中空格或者其他非法字符都算作有效字符输入，像 %c%c这种输入不能有空额或者其他字符。
//所以直接输入 a = 3b = 7 8.5 71.82Aa就可以


//6.请编程序将“China”译成密码，密码规律是：用原来的字母后面第4个字母代替原来
//的字母。例如，字母“A”后面第4个字母是“E”，用“E”代替“A”。因此，“China”应译为
//Glmre请编一程序，用赋初值的方法使cl, c2, c3, c4, c5这5个变量的值分别为＇C','h''i'n''a'
//，经过运算，使c1, c2, c3, c4, c5分别变为
//＇G\',\'1\',\'m\',\'r\',\'e\'
//＇。分别用 putchar函数和printf函数输出这5个字符。
//#include<stdio.h>
//int main() {
//	char c1=0, c2=0, c3=0, c4=0, c5=0;
//	scanf("%c%c%c%c%c", &c1, &c2, &c3, &c4, &c5);
//	putchar(c1 + 4);
//	putchar(c2 + 4);
//	putchar(c3 + 4);
//	putchar(c4 + 4);
//	putchar(c5 + 4);
//	printf("\n%c%c%c%c%c", c1 + 4, c2 + 4, c3 + 4, c4 + 4, c5 + 4);
//}

//7.设圆半径r = 1.圆柱高h = 3
//，求圆周长、圆面积、圆球表面积、圆球体积、圆柱体
//积。用scanf输入数据，输出计算结果，输出时要求有文字说明，取小数点后2位数字。请
//编程序。
//圆周长公式 = 2πr，圆面积 = πr²，圆球表面积 = 4πr²，圆球体积 = 4πR³ / 3，圆柱体积 = πr²h。
//#include<stdio.h>
//#define PI 3.14
//int main() {
//	float r = 1.0;//半径
//	float h = 3.0;//高
//	double area = 0;//面积
//	double perimeter = 0.0;//圆周长
//	double Sphere_Surface_Are=0.0;//圆球表面积
//	double Sphere_Volume=0.0;//圆球体积
//	double Cylinder_Volume=0.0;//圆柱体积
//	area = PI * r * r;
//	perimeter = 2 * PI * r;
//	Sphere_Surface_Are = 4 * PI * r;
//	Sphere_Volume = (4 * PI * r) / 3;
//	Cylinder_Volume = PI * r * r * r * h;
//	printf("圆面积为%.2lf\n", area);
//	printf("圆周长为%.2lf\n", perimeter);
//	printf("圆球表面积为%.2lf\n", Sphere_Surface_Are);
//	printf("圆球面积为%.2lf\n", Sphere_Volume);
//	printf("圆柱体积为%.2lf\n", Cylinder_Volume);
//
//}

//8.编程序，用getchar 函数读入两个字符给c1和c2, 然后分别用putchar 函数和 printf
//函数输出这两个字符。思考以下问题：
//（1)变量c1和c2应定义为字符型、整型还是二者皆可？
//（2)要求输出c1和c2值的ASCII码，应如何处理？用putchar 函数还是printf函数？
//（3)整型变量与字符变量是否在任何情况下都可以互相代替？如：
//char cl, c2;与int cl, c2;是否无条件地等价
#include<stdio.h>
int main() {
	int c1 = 0;
	int c2 = 0;
	c1 = getchar();
	c2 = getchar();
	putchar(c1);
	putchar(c2);
	printf("\n%c %c", c1, c2);
}
//（1)变量c1和c2应定义为字符型、整型还是二者皆可？
//两者皆可
//（2)要求输出c1和c2值的ASCII码，应如何处理？用putchar 函数还是printf函数？
// 用printf函数 将格式改为%d
//（3)整型变量与字符变量是否在任何情况下都可以互相代替？如：int c1 int c2与 char c1 char c2 是否无条件等价
//不可以 char类型的范围在-128到127之间，而int类型在 -2^32到2^32-1之间
//如果范围在他们俩的共有的范围则可以无条件互相代替 如果超出共有范围则不能共同代替
