#define _CRT_SECURE_NO_WARNINGS 1






//2.�벹����5.7���򣬷ֱ�ͳ�Ƶ���f
//��fabs(t) >= 1e-6��
//��fabs(t) >= 1e-8
//��ʱִ��ѭ����Ĵ�����
# include <stdio.h>
# include <math.h>

//int main()
//{
//	int sign = 1;
//	double pi = 0.0, term = 1.0, n = 1.0;
//	int count = 0;//����ѭ��������˶��ٴ�
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
//	printf("pi�Ľ���ֵ��%10.8f\n", pi);
//	printf("pi�Ľ���ֵ��%d\n", count);
//	return 0;
//}
//


/*http://t.csdn.cn/uPnVJ*/
//3.��������������m��n, �������Լ������С��������
//����˼·�����������Ҳ�����Լ����������ӣ�ָ����������������Լ��������һ����
//��С��������ָ���������������еı����������ǵĹ����������г�0������С��һ���������ͽ�
//���⼸����������С��������
//��С������ = �������ĳ˻������Լ�� �� ������ô�����Լ���ǹؼ���
//int main() {
//	int n = 0;//����ʱ�ϴ��һ����
//	int m = 0;//����ʱ��С��һ����
//	int p1 = 0;//������Լ��
//	int p2 = 0;//�����󹫱���
//	scanf("%d%d", &n, &m);
//		//����
//	if (n < m) {
//		n = m ^ n;
//		m = m ^ n;
//		n = m ^ n;
//	}
//	p2 = n * m;
//	//շת��������Լ��
//	while (n % m) {
//		p1 = n % m;
//		n = m;
//		m = p1;
//	}
//	p2 /= p1;
//	printf(" �����Լ��Ϊ%d", p1);
//	printf(" ����С������Ϊ%d", p2);
//}

//4.����һ���ַ����ֱ�ͳ�Ƴ�����Ӣ����ĸ���ո����ֺ������ַ��ĸ�����
//int main() {
//	char arr = 0;
//	int a = 0;//����Ӣ����ĸ����
//	int b = 0;//����ո�����
//	int c = 0;//������������
//	int d = 0;//���������ַ�����
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
//	printf("Ӣ����ĸ�ĸ���Ϊ��%d\n", a);
//	printf("�ո�ĸ���Ϊ�� %d\n", b);
//	printf("���ֵĸ���Ϊ�� %d\n", c);
//	printf("�����ַ��ĸ���Ϊ�� %d\n", d);
//
//}

http://t.csdn.cn/dZE4y
//5.��Sn = a + aa + aaa + ..�� + aa������aֵ֮������a��һ�����֣�n��ʾa��λ����n�ɼ������롣
// ���磺2 + 22 + 222 + 2222 + 22222����ʱn = 5)
//
//
//int main() {
//	int n = 0;
//	int a = 0;
//	int i = 0;
//	int sum = 0;
//	int tmp = 0;
//	printf("������a��ֵ:>");
//	scanf("%d", &a);
//	printf("\n������n��ֵ:>");
//	scanf("%d", &n);
//	tmp = a;
//	while (n--) {
//		sum = sum + tmp;
//		tmp = (tmp * 10) + a;
//	}
//printf("%d",sum);
//}

//http://t.csdn.cn/GcMpK
//��1!+2!+3!+.....+20!
// ����һ
//int main() {
//	int n = 0;
//	int i = 0;
//	int sum = 0;
//	int value = 1;
//	printf("������n:>");
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

//������
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

//������е�ˮ�ɻ���

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

//����1000���ڵ�����
//int main() {
//	int i = 0;
//	for (i = 1; i <= 1000; i++) {
//		int sum = 0;
//		int j = 0;
//		int comma = 0;//���ƶ���
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


//��һ���������� ���������ǰ20��֮��
//
//int main() {
//	double sum=0;
//	double mother = 1.0;
//	double tmp = 1.0;
//	double son = 2.0;
//	double i = 1;
//	for (i; i <= 20; i++) {
//		//���ӵ���ǰһ��ķ��ӷ�ĸ��� ��ĸ����ǰһ��ķ���
//		sum += son / mother;
//		tmp = son;
//		son += mother;
//		mother = tmp;
//	}
//	printf("%lf", sum);
//}


//���100m�߶���������
//int main() {
//
//	double h = 100.0;
//	double sumh =100.0;
//	int i = 1;
//	for (i = 2; i <= 10; i++) {
//		h = h / 2;
//		sumh += 2 * h;
//}
//	printf("��10�����ʱ������%lf��\n", sumh);
//	printf("��10�����ʱ����%lf��\n", h);
//}



http://t.csdn.cn/OtaxK
//���ӳ�������

//int main() {
//	int x1 = 0;//ǰһ����ʣ����
//	int x2 = 1;//��ǰ��ʣ����
//	int day = 10;
//	for (day; day>1; day--) {
//		x1 = 2*(x2 + 1);
//		x2 = x1;
//	}
//	printf("��һ����ժ����Ϊ��%d",x1);
//}

//�ݹ�
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

 
//��ӡ����
//int main() {
//	int n = 4;//�����ϰ�����
//	//��ӡ�ϰ벿��
//	int i = 0;
//	for (i = 1; i <= n; i++) {
//		int j = 0;
//		//��ӡ�ո� 3  2  1 0
//		for (j = i; j <= n - 1; j++) {
//			printf(" ");
//		}
//		//��ӡ*
//		for (j = 1; j <= 2 * i - 1; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//
//	//��ӡ�°벿��
//	for (i = 1; i <= n - 1; i++) {
//		//��ӡ�ո� 1 2 3
//		int j = 0;
//		for (j = 1; j <= i; j++) {
//			printf(" ");
//		}
//		//��ӡ*
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
	printf("A�Ķ�����%c\n", A);
	printf("B�Ķ�����%c\n", B);
	printf("C�Ķ�����%c\n", C);
	
}