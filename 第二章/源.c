#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<math.h>
//��6)��100~200֮������������
//��7)��������m��n�����Լ����
//��8)�󷽳�ʽax2 + bx + c = 0�ĸ����ֱ��ǣ�
//�����������ȵ�ʵ����
//����������ȵ�ʵ����

//��1)������ƿ��A��B, �ֱ�ʢ�Ŵ׺ͽ��ͣ�Ҫ�����ǻ�������Aƿԭ��ʢ�ף��ָĽ��ͣ�Bƿ���෴����
//int main() {
//	char A = 'A';//	AΪ��
//	char B = 'B';// BΪ����
//	char C = '0';//��ƿ��
//	printf("A��%c\n", A);
//	printf("B��%c\n", B);
//	C = A;
//	A = B;
//	B = C;
//	printf("A��%c\n", A);
//	printf("B��%c\n", B);
//}
//�������ǽ�������������ֵ
 
//�ڲ����ö������������� ��������A ������B��ֵ
//����һ:
//int main() {
//	int a = 10;
//	int b = 20;
//	printf("A��%d\n", a);
//	printf("B��%d\n", b);
//	printf("������\n");
//	a = a + b;
//	b = a - b;
//	a = a - b;
//	printf("A��%d\n", a);
//	printf("B��%d\n", b);
//}
//������
//int main() {
//	int a = 10;
//	int b = 20;
//	printf("A��%d\n", a);
//	printf("B��%d\n", b);
//	printf("������\n");
//	a = a ^ b;
//	b = a ^ b;
//	a = a ^ b;
//	printf("A��%d\n", a);
//	printf("B��%d\n", b);
//}

//��2)���ν�10�������룬Ҫ�����������������
//int main() {
//	int arr[10] = { 0 };
//	int i = 0;
//	printf("������ʮ����\n");
//	//ѭ������ʮ����
//	for (; i < 10; i++) {
//	scanf("%d", &arr[i]);
//	}
//	//��һ������ʣ�µ������бȽ�
//	for (i = 0; i < 10; i++) {
//		int j = 0;
//		for (; j < 9; j++) {
//			//��������С�ں�һ���� ֱ������ѭ��������һ��
//			if (arr[i] < arr[j + 1])
//				break;
//		}
//		//����������ʣ������������
//		if (j == 9)
//		{
//			printf("Max is %d", arr[i]);
//			break;
//		}
//
//	}
//}

//��3)��3����a, b, c, Ҫ�󰴴�С˳������������
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

//��4)��1 + 2 + 3 + ���� + 100.
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

//��5)�ж�һ����n�ܷ�ͬʱ��3��5������
//int main() {
//	int n = 0;
//	printf("���ж�����������Ƿ�ͬʱ��3��5����:>");
//	scanf("%d", &n);
//	if (n % 3 == 0 && n % 5 == 0) 
//		printf("%d�ܱ�3��5����", n);
//	
//	else
//		printf("%d���ܱ�3��5����", n);
//}

//��6)��100~200֮������������
//����һ
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
//������
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
//������
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

//��7)��������m��n�����Լ����
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
//	printf("���Լ����%d", n);
//}

//��8)�󷽳�ʽax2 + bx + c = 0�ĸ����ֱ��ǣ�
//�����������ȵ�ʵ����
//����������ȵ�ʵ����

int main() {
	double a = 0.0,b = 0.0,c = 0.0;
	double d = 0.0;
	printf("�ҽ��ж϶�Ԫһ�η����м�����������������a,b,c:>");
	scanf("%lf%lf%lf", &a, &b, &c);
	d = (b * b) - (4 * a * c);
	if (d > 0) {
		printf("����������ȵ�ʵ��");
		printf("x1 is %.2lf,x2 is %.2lf", (-b + sqrt(d)) / (2 * a), (-b - sqrt(d)) / (2 * a));
	}
	else if (d == 0)
	{
		printf("��������ͬ��ʵ��");
		printf("%0.2lf", (-b) / (2 * a));
	}
	else 
		printf("û��ʵ��");

}