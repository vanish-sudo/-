#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//д����������߼����ʽ��ֵ a=3,b=4,c=5
//int main() {
//	int a = 3, b = 4, c = 5, x = 0, y = 0;
//	printf("%d\n", a + b > c && b == c);
//	//C�����з���Ϊ��
//	printf("%d\n", a || b + c && b - c);
//	printf("%d\n", !(a > b) &&!c || 1);
//	printf("%d\n", !(c=5) && (y=b)&&0);
//	printf("%d\n", !(a + b) + c - 1 && b + c / 2);
//
//}

//�������������м������룬�������������
//int main() {
//	int a = 0, b = 0, c = 0;
//	printf("������������:>");
//	scanf("%d%d%d", &a, &b, &c);
//	if (b<c)
//		b = c;
//	if (a < b)
//		a = b;
//	printf("%d", a);
//}

//�Ӽ���������һ��С��1000��������Ҫ���������ƽ���������ƽ������������
//����������������֣�Ҫ�����������ݺ��ȶ�����м���Ƿ�ΪС��10000������ 
//�����ǣ���Ҫ����������
//#include<math.h>
//int main() {
//	int num = 0;
//	while (1) {
//		printf("������һ����С��10000����:>");
//		scanf("%d", &num);
//		if (num >= 10000)
//		{
//			printf("%.0f", sqrt(num));
//			break;
//
//		}
//		else
//			printf("\n������� ����������\n");
//	}
//}

//��һ������ ��x < 1  y = x; ��1 <= x < 10ʱ y = 2x - 1;��x>=10ʱ y=3x-11
//int main() {
//	//��Ĭ������Ķ�Ϊ����
//	int x = 0;
//	printf("������һ����:>");
//	scanf("%d", &x);
//	if (x < 1)
//		printf("%d", x);
//	else if (x >= 10)
//		printf("%d", 3 * x - 11);
//	else
//		printf("%d", 2 * x - 1);
//}

//���˱�д��������������, ����������Ƿ���ʵ����ĿҪ��
// ��Ҫ�����ϻ����г���, �ȷ�������������߼�, 
// �������ǵ�����ͼ���������ǵ����������
// Ȼ���ϻ����г���, �۲�ͷ������
//��һ��������
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
//����else  �������������δ��Ե�if�������

//����һ�ٷ��Ƴɼ���Ҫ������ɼ��ȼ���A����B����C����D����E���� 
//90������Ϊ��A����80��89��Ϊ��B����70��79��Ϊ��C����
//60��69��Ϊ��D����60������Ϊ��E����
/*int main() {
	int score = 0,g = 0;
	while (1) {
		printf("��������ķ���:>");
		scanf("%d", &score);
		if (score >= 0)
			break;
		printf("\n�����������������\n");
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
//		printf("��������ķ���:>");
//		scanf("%d", &score);
//		if (score >= 0)
//			break;
//		printf("\n�����������������\n");
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

//��һ��������5λ�������� Ҫ��:
//����Ǽ�λ��
//�ֱ����ÿһλ����
//�������������������

//int main() {
//	int num = 0;
//	int n = 0;//���㼸λ��
//	printf("������һ������:>");
//	scanf("%d", &num);
//
//	while (num)
//	{
//		printf("%d ", num % 10);
//		n++;
//		num /= 10;
//	}
//	printf("\n����һ��%dλ��",n);
//}

//
//��ҵ���ŵĽ��������ҵ�ĵ������������ 
//������I���ڻ����100000Ԫʱ����������10% ��
//�������100000Ԫ��С��200000Ԫ��100000 < I��200000��ʱ
//������100000Ԫ�Ĳ��ְ�10% ��ɣ�����100000Ԫ�Ĳ��֣�
//�����7.5 % ��
// �������200000Ԫ��С��400000Ԫ��200000 < I��400000��ʱ��
//����200000Ԫ�Ĳ����԰������취��ɣ���ͬ��������200000Ԫ�Ĳ��ְ�5% 
//��ɡ� �������400000Ԫ��С��600000Ԫ��400000 < I��600000��ʱ������400000Ԫ�Ĳ��ְ�3% ��ɡ�

//int main() {
//	//iΪ���� jΪ����+���
//	double i = 0.0, j = 0.0;
//	int g = 0;
//	double salary1, salary2, salary3, salary4, salary5;
//	printf("�������������:>");
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
//	printf("�ܹ���Ϊ:%.3lf", j);
//}

//int main() {
//	double i = 0.0, j = 0.0;
//	int g = 0;
//	double salary1, salary2, salary3, salary4, salary5;
//	printf("�������������:>");
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

//�����ĸ����� ��С��������
//int main() {
//	int i = 1;
//	int arr[4] = { 0 };
//	int tmp = 0;
//	for (i = 0; i < 4; i++) {
//		printf("�������%d����", i + 1);
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

//4��Բ��  Բ��(2,2)(-2,2)(-2,-2)(2,-2)
//�뾶Ϊ1 ������������  ��������Χ�����0 ������Χ�����10m
int main() {
	float x = 0.0; float y = 0.0; float r = 2.0;
	printf("������x:>");
	scanf("%f", &x);
	printf("������y:>");
	scanf("%f", &y);
	if ((y < 3.0 && y >= 1.0) || (y <= -1.0 && y > -3.0)) {
		if ((x >= 1.0 && x < 3.0) || (x <= -1.0 && x > -3.0)) {
			printf("�����߶�Ϊ10m");
			return 0;
		}
	}
	printf("�����߶�Ϊ0");
	return 0;
}

//���һԪ���η���
//1.����a=0 
//2.�¶�������0 ��������ȵ�ʵ��
//3.�¶�������0 ����������ʵ��
//4.�¶���С��0,�����������
//(Ӧ����p+qi��p-qi��ʽ�������)����p=-b/2a
//q=�����µ¶���/2a

//#include<math.h>
//int main() {
//	double a = 0, b = 0.0, c = 0.0;
//	double x1, x2, disc,p,q;
//	printf("����������һԪ���η��̵�a,b,c:>");
//	scanf("%lf%lf%lf", &a, &b, &c);
//	if (a == 0) {
//		printf("�ⲻ��һԪ���η���");
//		return 0;
//	}
//	disc = b * b - 4 * a * c;
//	if (disc < 0) {
//		p = -b / 2 * a;
//		q = sqrt(-disc) / 2 * a;
//		printf("��һ�������Ϊ%.3lf+%.3lfi\n", p, q);
//		printf("��һ�������Ϊ%.3lf-%.3lfi\n", p, q);
//	}
//	else {
//		x1 = (-b + sqrt(disc)) / (2 * a);
//		x2 = (-b - sqrt(disc)) / (2 * a);
//		if (x1 == x2)
//		{
//			printf("��������ȵ�ʵ��:x1=x2=%.3lf\n", x1);
//		}
//		else {
//			printf("�����������ʵ��:x1=%.3lf,x2=%.3lf\n", x1, x2);
//		}
//	}
//}

//#include<math.h>
//int main() {
//	double a = 0, b = 0.0, c = 0.0;
//	double x1, x2, disc, p, q;
//	printf("����������һԪ���η��̵�a,b,c:>");
//	scanf("%lf%lf%lf", &a, &b, &c);
//	if (a == 0) {
//		printf("�ⲻ��һԪ���η���");
//		return 0;
//	}
//	disc = b * b - 4 * a * c;
//	if (disc < 0) {
//		p = -b / 2 * a;
//		q = sqrt(-disc) / 2 * a;
//		printf("��һ�������Ϊ%.3lf+%.3lfi\n", p, q);
//		printf("��һ�������Ϊ%.3lf-%.3lfi\n", p, q);
//	}
//	else {
//		
//		if (fabs(disc)<pow(10,-6))
//		{
//			x1 = (-b + sqrt(disc)) / (2 * a);
//			printf("��������ȵ�ʵ��:x1=x2=%.3lf\n", x1);
//		}
//		else {
//			x1 = (-b + sqrt(disc)) / (2 * a);
//			x2 = (-b - sqrt(disc)) / (2 * a);
//			printf("�����������ʵ��:x1=%.3lf,x2=%.3lf\n", x1, x2);
//		}
//	}
//}