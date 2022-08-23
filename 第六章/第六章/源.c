#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//1.用筛选法求100之内的素数。
//筛选法是指埃拉托色尼（Eratosthenes）筛选，埃拉托色尼是古希腊的著名数学家。
//他采取的方法是，先写下1到1000的全部整数，然后逐个判断它们是否素数，找出一个非素数，就把它挖掉，最后剩下的就是素数。
//素数是指除了被1和他本身整除以外不被任何数整除
//int main() {
//
//	int arr[100] ;
//	int i = 2; //因为1既不是质数也不是合数 所以我从2开始
//	for (i = 2; i < 100; i++) {
//		arr[i] = i;
//	}
//	for (i = 2; i < 100; i++) {
//		
//		int j = i + 1;
//		if(arr[i]!=0)//避免arr[i]==0
//		for (j; j < 100; j++) {
//			if (arr[i] != arr[j])//避免arr[i]==0且arr[j]==0
//				if (arr[j] % arr[i] == 0)
//					arr[j] = 0;
//		}
//	}
//	for (i = 2; i < 100; i++) {
//		if(arr[i]!=0)
//		printf("%d ", arr[i]);
//	}
//}

//2.用选择法对10个整数排序。

//int main() {
//	int arr[10] = { 49,38,65,97,76,13,27,49,30,10 };
//	int i = 0;
//	int index = 0;
//	int tmp = 0;
//	for (i = 0; i < 10; i++) {
//		int j = i + 1;
//		index = i;
//		for (j; j < 10; j++) {
//			if (arr[index] > arr[j]) {
//				index = j;
//			}
//		}
//		tmp = arr[i];
//		arr[i] = arr[index];
//		arr[index] = tmp;
//	}
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//}

//3.求一个3x3的整型矩阵对角线元素之和。
//1 2 3
//4 5 6
//7 8 9

//int main() {
//	int arr[3][3] = { 1,2,3,4,5,6,7,8,9 };
//	int sum = 0;
//	int i = 0;
//	int j = 0;
//	//一条对角线
//	for (i; i < 3; i++,j++) {
//		sum += arr[i][j];
//	}
//	for (i = 0, j = 2; i <3; j--, i++) {
//		sum += arr[i][j];
//	}
//	printf("%d ", sum);
//}

//4.有一个已排好序的数组，要求输入一个数后，按原来排序的规律将它插入数组中。
//int main() {
//	//int arr[11] = { 9,8,7,6,5,4,3,2,1,0 };//要插入的数组
//	int arr[11] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
//	int num = 0;//准0备插的数
//	int flag = 0;//跳出循环
//	int tmp = 0;
//	int i = 0;
//	scanf("%d", &num);
//	if (arr[0] > arr[1])
//	{
//		for (i = 0; i < 11; i++) {
//			if (arr[i] < num) {
//				int j = 11 - 2;
//				for (j; j >= i; j--) {
//					arr[j + 1] = arr[j];
//				}
//				arr[i] = num;
//				flag = 1;
//			}
//			else if (i == 10) {
//				arr[i] = num;
//			}
//			if (flag == 1)
//				break;
//
//		}
//	}
//	else
//	{
//		for (i = 0; i < 11; i++) {
//			if (arr[i] > num) {
//				int j = 11 - 2;
//				for (j; j >= i; j--) {
//					arr[j + 1] = arr[j];
//				}
//				arr[i] = num;
//				flag = 1;
//
//			}
//			else if (i == 10) {
//				arr[i] = num;
//			}
//			if (flag == 1)
//				break;
//		}
//		for (i = 0; i < 11; i++) {
//			printf("%d  ", arr[i]);
//		}
//	}
//
//}

//5.将一个数组中的值按逆序重新存放。例如，原来顺序为8, 6, 5, 4, 1.要求改为1, 4,5, 6, 8.
//int main() {
//	int arr[5] = { 8,6,5,4,1 };
//	int tmp = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int right = sz - 1;
//	int left = 0;
//	int i = 0;
//	while (left <= right) {
//		tmp = arr[left];
//		arr[left] = arr[right];
//		arr[right] = tmp;
//		left++;
//		right--;
//	}
//
//	for (i = 0; i < sz; i++) {
//		printf("%d ", arr[i]);
//}
//}
//


//6.输出以下的杨辉三角形（要求输出10行）。
//1
//11
//121
//1331
//14641
//...
//int main() {
//	int arr[10][10] = { 0 };
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < 10; i++) {
//		for (j = 0; j <= i; j++) {
//			if (i == j || j == 0) {
//				arr[i][j] = 1;
//			}
//			else {
//				arr[i][j] = arr[i - 1][j - 1] + arr[i - 1][j];
//			}
//			printf("%-3d", arr[i][j]);
//
//	}
//		printf("\n");
//	}
//	
//}

//7.输出“魔方阵”。所谓魔方阵是指这样的方阵，它的每一行、每一列和对角线之和均
//相等。例如，三阶魔方阵为
//
//要求输出
//1~n的自然数构成的魔方阵。
//8 1 6
//3 5 7
//4 9 2

/*魔方阵的排列规律如下：
魔方阵的生成方法为：在第0行中间置1，对从2开始的其余n2−1个数依次按下列规则存放：
 
8 1 6
3 5 7
4 9 2

魔方阵计算规律(行，列以1开始)：

1.将"1"放在第一行，中间一列；

2.从2开始至N*N各数按如下规律： 每一个数存放的行比上一个数的行减1；每一个数存放的列比上一个数的列加1；

3.当一个数行为1，下一个数行为N;

4.当一个数列数为N,下一个数列数为1，行数减1；

5.若按上述规则确定的位置有数字，或上一个数位第1行第N列，

下一个数字位置为上一个数的正下方（即行数减1，列数不变）；*/
//int main() {
//	int arr[15][15] = { 0 };
//	int row = 0;//记录行
//	int col = 0;//记录列
//	int pre_row = 0;//前一个数的行
//	int pre_col = 0;//前一个数的列
//	int k = 0;
//	int n = 3;
//	while (1) {
//		printf("请输入您所需的阶数（1-15以内奇数）:>");
//		scanf("%d", &n);
//		if (n % 2 != 0)
//			break;
//	}
//	col = n/ 2;
//	arr[0][col] = 1;
//	for (k = 2; k <= n * n; k++) {
//		row--; col++;
//		if (row < 0)
//			row = n - 1;
//		if (col > n - 1)
//			col = 0;
//		if (arr[row][col] != 0) {
//			row = pre_row + 1;
//			col = pre_col;
//	  }
//		arr[row][col] = k;
//		pre_row = row;
//		pre_col = col;
//	}
//
//
//	for (row = 0; row < n; row++) {
//		for (col = 0; col < n; col++) {
//			printf("%-4d", arr[row][col]);
//		}
//		printf("\n");
//	}
//}
// 





//




//8.找出一个二维数组中的鞍点，即该位置上的元素在该行上最大、在该列上最小。也
//可能没有鞍点。
//1 2 3
//4 8 6
//7 8 9

//首先先找出该行最大的一个数
//然后找这个数所在列的最小一个数
//如果相等，则是靶点
//如果不相等，找第二行最大的数
//int main() {
//	int arr[50][50] = { 1,5,8,3,9,5 };
//	int max = 0;
//	int min = 0;
//	int col = 0;//列数
//	int row = 0;//行数
//	int i = 0;
//	int k = 0;
//	int j = 0;
//	while (1) {
//		printf("请输入行数 列数（1--50以内）:>");
//		scanf("%d %d", &row, &col);
//		if (col <= 50 && row <= 50)
//			break;
//	}
//	for (i = 0; i < row; i++) {
//		for (j = 0; j < col; j++) {
//			printf("请输入第%d行 第%d列数据:>", i + 1, j + 1);
//			scanf("%d", &arr[i][j]);
//		}
//	}
//		for (i = 0; i < row; i++) {
//			for (j = 0; j < col; j++) {
//				if (max < arr[i][j])
//					max = arr[i][j];
//			}
//			j--;
//			min = max;
//			for (k = 0; k < row; k++) {
//				if (min > arr[k][j])
//					min = arr[k][j];
//			}
//			if (max == min)
//				break;
//		}
//		if (max == min)
//			printf("靶点为%d", arr[i][j]);
//		else
//			printf("无靶点");
//	}

//9.有15个数按由大到小顺序存放在一个数组中，输入一个数，要求用折半查找法找出
//该数是数组中第几个元素的值。如果该数不在数组中，则输出“无此数”。

//int main() {
//	int arr[15] = { 29,27,25,23,21,19,17,15,13,11,9,7,5,3,1 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//13
//	int left = 0;
//	int right = sz-1;
//	int mid = sz/2;
//	int k = 0;
//	printf("请输入您要查找的数:>");
//	scanf("%d", &k);
//
//	while (left <= right) {
//		if (arr[mid] > k) {
//			left = mid + 1;
//			mid = (left + right) / 2;
//		}
//		else if (arr[mid] < k) {
//			right = mid - 1;
//			mid = (left + right) / 2;
//		}
//		else {
//			//printf("找到了，下标为%d,是%d", mid, arr[mid]);
//		printf("该元素是数组中第%d个元素，下标为%d", mid+1,mid);
//
//			return 0;
//		}
//	}
//	printf("没找到");
//
//}

//10.有一篇文章，共有3行文字，每行有80个字符。要求分别统计出其中英文大写字
//母、小写字母、数字、空格以及其他字符的个数。
//int main() {
//	char str[3][80]={0};
//	int up, low, num, space, oth;
//	int i = 0;
//	int j = 0;
//	up = low = num = space = oth = 0;
//	for (i = 0; i < 3; i++) {
//		//gets(str);//scanf不读取空格 gets在vs中没有定义
//		gets_s(str[i], 80);//scanf不读取空格
//
//		for (j = 0; j < 80; j++) {
//			if (str[i][j] >= 'A' && str[i][j] <= 'Z')
//				up++;
//			else if (str[i][j] >= 'a' && str[i][j] <= 'z')
//				low++;
//
//			else if (str[i][j] >= '0' && str[i][j] <= '9')
//				num++;
//			else
//				oth++;
//		}
//	}
//	printf("\n");
//	printf("大写字母：%d个\n", up);
//	printf("小写字母：%d个\n", low);
//	printf("数字    ：%d个\n", num);
//	printf("空格    ：%d个\n", space);
//	printf("其他字符：%d个\n", oth);
//}

//输出以下图案
//* * * * *
// * * * * *
//  * * * * *
//   * * * * *
//	  * * * * *

//int main() {
//	int n = 0;
//	int m = 0;
//	int i, j;
//	printf("请输入一行多少个*\n");
//	scanf("%d", &n);
//	printf("请输入打印几行\n");
//	scanf("%d", &m);
//	for (i = 0; i < m; i++) {
//		for (j = 0; j < i; j++) {
//			printf(" ");
//		}
//		for (j = 0; j < n; j++) {
//			printf("* ");
//		}
//		printf("\n");
//	}
//}

//12.有一行电文，已按下面规律译成密码：
//A→Z
//b→y
//C→X
//：
//·..
//即第1个字母变成第26个字母，第i个字母变成第（26 - i -
//1)个字母，非字母字符不
//变。要求编程序将密码译回原文，并输出密码和原文。

//#include <stdio.h>
//int main() {
//
//	char str[20];
//	gets_s(str, 20);
//	int i = 0;
//	for (i = 0; str[i] != '\0'; i++) {
//		if (str[i] >= 'A' && str[i] <= 'Z') {
//			str[i] =  90- str[i] + 65;
//		}
//		if (str[i] >= 'a' && str[i] <= 'z') {
//			str[i] = 122 - str[i] + 97;
//		}
//	}
//	printf("%s", str);
//}

//13.编一程序，将两个字符串连接起来，不要用strcat函数。
//自制my_strcat
#include<assert.h>
//char* my_strcat(char* str1, const char* str2) {
//	assert(str1!=NULL);
//	assert(str2!= NULL);
//	char* ret = str1;
//	while (*str1 != '\0') {
//		str1++;
//    }
//	while (*str1++ = *str2++) {
//		
//	}
//	return ret;
//}
//int main() {
//	char str1[100] = "I am";
//	char str2[] = " student";
//	printf("%s", my_strcat(str1, str2));
//}

//14.编一个程序，将两个字符串s1和s2比较，若
//s1 > s2
//，输出一个正数；若
//s1 = s2
//，输
//出0; 若s
//s1 < s2
//	s2, 输出一个负数。不要用strcpy函数。两个字符串用
//	s函数读入。输出
//	的正数或负数的绝对值应是相比较的两个字符串相应字符的ASCII码的差值。例如，
//	＂A”
//	与
//	＂C
//	相比，由于
//	＂A < C
//	，应输出负数，同时由于＇A\'与＇C\'的ASCII码差值为2,因此应输出
//	＂－2”
//	”。同理：
//	＂And
//	和
//	＂Aid
//	比较，根据第2个字符比较结果，
//	＂n
//	比

//自制my_strcmp
//int my_strcmp(const char* str1, const char* str2) {
//	assert(str1);
//	assert(str2);
//	while (str1 != '\0' && str2 != '\0') {
//	if(*str1!=*str2)
//		return *str1 - *str2;
//		str1++;
//		str2++;
//	}
//	if (*str1 == *str2)
//		return 0;
//}
//int main() {
//	char str1[20];
//	char str2[20];
//	gets(str1);
//   gets(str2);
//	printf("%d", my_strcmp(str1, str2));
//}

//	15.编写一个程序，将字符数组s2中的全部字符复制到字符数组s1中。不用strcpy函
//	数。复制时，＼0	也要复制过去。	＇后面的字符不复制。

//自制my_strcpy
//char* my_strcpy(char* str1, const char* str2) {
//	assert(str1);
//	assert(str2);
//	char* ret = str1;
//	while (*str1++ = *str2++)
//	{
//	}
//	return ret;
//}
//int main() {
//	char str1[100] = "I am";
//	char str2[] = " student";
//	printf("%s", my_strcpy(str1, str2));
//}