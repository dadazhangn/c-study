#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <conio.h>
#include <windows.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#include <assert.h>
//int main() {
//	int input = 0;
//	printf("ע������\n");
//	printf("д��ҵ(0/1) >:");
//	scanf("%d", &input);
//	if (input == 1)
//		printf("����ѧϰ\n");
//	else
//		printf("��\n");
//
//}
//int main(){
//	int i = 0;
//	printf("�������\n");
//	while (i < 200){
//		printf("ѧϰ:%d\n",i);
//		i++;
//	}
//	if (i>=200)
//		printf("�ɹ�\n");
//	return 0;
//}
//int add(int x, int y){
//	int z = x + y;
//	return z;
//}
//int main(){
//	int num1 = 100;
//	int num2 = 200;
//	int a = 4;
//	int b = 5;
//	int sum = 0;
//	sum = add(num1, num2);
//	//sum = add(a, b);
//	printf("%d\n", sum);
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	while (i < 10){
//		printf("%d ", arr[i]);
//		i++;
//	}
//	return 0;
//}
//��λ������
//int main()
//{
//	int a = 1;
//	int b = a << 2;
//	int c = a >> 3;
//	printf("%d\n", a);
//	printf("%d\n", b);
//	printf("%d\n", c);
//	return 0;
//}
//��������Ԫ�ظ���
//int main()
//{
//	int arr[10];
//	int i;
//	i = sizeof(arr) / sizeof(arr[0]);
//	printf("i=%d\n", i);
//	return 0;
//}
//����������
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int max = 0;
//	max = (a > b ? a : b);
//	printf("%d\n", max);
//	return 0;
//}
//�ú����ж���������С(��bug)
//int max(int x, int y){
//	int z = (x > y ? x : y);
//	return z;
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	printf("������һ������");
//	scanf("%d\n", &a);
//	printf("��������һ������");
//	scanf("%d\n", &b);
//	int x = max(a, b);
//	printf("��������%d\n", x);
//	return 0;
//}
//static�ؼ������ξֲ�����
//void test(){
//	static int a = 1;//a��һ����̬�ľֲ�����
//	a++;
//	printf("%d\n", a);
//}
//int main(){
//	int i = 0;
//	while (i < 5){
//		test();
//		i++;
//	}
//	return 0;
//}
//static�ؼ�������ȫ�ֱ���
//int main()
//{
//	extern int g_val;
//	printf("%d\n", g_val);
//	return 0;
//}
//�����ⲿ����
//extern add(int, int);
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int sum = add(a, b);
//	printf("sum=%d\n", sum);
//	return 0;
//}
//#define���Զ����ʶ������
//#define max 100
//#define �����
//int Max(int x, int y)
//{
//	if (x > y)
//		return x;
//	else
//		return y;
//}
//#define MAX(x,y) (x>y?x:y)
//int main()
//{
//	int a = 10;
//	int b = 20;
//	//����
//	int max = Max(a, b);
//	printf("max=%d\n", max);
//	//��Ķ���
//	max = MAX(a, b);
//	printf("max=%d\n", max);
//	return 0;
//}
//ָ��
//int main()
//{
//	int a = 10;
//	int* p = &a;
//	printf("%p\n", &a);
//	printf("%p\n", p);
//	*p = 20;
//	printf("%d\n", a);
//	return 0;
//}
//int main()
//{
//	char ch = 'w';
//	char* pc = &ch;
//	*pc = 'o';
//	printf("%d\n", sizeof(pc));
//	printf("%c\n", ch);
//	return 0;
//}
//int main()
//{
//	int a = 10;
//	int* p = &a;
//	double b = 3.14;
//	double* pb = &b;
//	*pb = 6.4;
//	printf("%lf\n", b);
//	printf("%lf\n", *pb);
//	printf("%p\n", p);
//	*p = 20;
//	printf("%d\n", a);
//	return 0;
//}
//�ṹ��
//struct Book{
//	char name[50];
//	short price;
//};
//int main()
//{
//	struct Book b1 = { "�ҵ�����", 56 };
//	struct Book* pb = &b1;
//	//printf("%s\n", pb->name);
//	//printf("%d\n", pb->price);
//	strcpy(b1.name, "C++");
//	printf("%s\n", (*pb).name);
//	printf("%d\n", (*pb).price);
//	//printf("������%s\n", b1.name);
//	//printf("�۸�%dԪ\n", b1.price);
//	//b1.price = 20;
//	//printf("�ĺ�%d\n", b1.price);
//	return 0;
//}
//if���
//int main()
//{
//	int age = 10;
//	if (age < 18)
//	{
//		printf("δ����\n");
//		printf("ѧϰ\n");
//	}
//	else {
//		if (18 <= age && age < 28)
//			printf("����\n");
//		else if (age >= 28 && age < 50)
//			printf("׳��\n");
//		else if (age >= 50 && age < 90)
//			printf("����\n");
//		else
//			printf("�ϲ���\n");
//	}
//	return 0;
//}
//���1��100����
//int main()
//{
//	int i = 1;
//	while (i <= 100){
//		if (i % 2 == 1)
//			printf("%d ", i);
//		//i+=2;
//		i++;
//	}
//	return 0;
//}
//switch���
//int main()
//{
//	int day = 0;
//	scanf("%d", &day);
//	switch (day)
//	{
//	case 1:
//		printf("����һ\n");
//		break;
//	case 2:
//		printf("���ڶ�\n");
//		break;
//	case 3:
//		printf("������\n");
//		break;
//	default:
//		printf("�������\n");
//		break;
//	}
//	return 0;
//}
//whileѭ��
//int main()
//{
//	int i = 1;
//	while (i <= 10)
//	{
//		if (i == 5)
//			continue;
//		printf("%d ", i);
//		i++;
//	}
//	return 0;
//}
//int main()
//{
//	int ch = 0;
//	while ((ch = getchar()) != EOF)
//		putchar(ch);
//	return 0;
//}
//int main()
//{
//	char password[20] = { 0 };
//	int re = 0;
//	int ch = 0;
//	printf("����������:>");
//	scanf("%s", &password);
//	while ((ch=getchar())!='\n')//getchar()һֱ���ߣ�ֱ��\n
//	{
//		;
//	}
//	printf("��ȷ��(Y/N):>");
//	re = getchar();
//	if ('Y' == re){
//		printf("ȷ�ϳɹ�\n");
//	}
//	else
//	{
//		printf("����ȷ��\n");
//	}
//	return 0;
//}
//ֻ����������ַ�
//int main()
//{
//	int ch = 0;
//	while ((ch = getchar()) != EOF)
//	{
//		if (ch<'0' || ch>'9')
//			continue;
//		putchar(ch);
//	}
//	return 0;
//}
//forѭ��
//��ӡ1-10
//int main()
//{
//	for (int i = 1; i <= 10; i++){
//		if (5 == i)
//			continue;
//			//break;
//			printf("%d ", i);
//	}
//	return 0;
//}
//int main()
//{
//	for (;;)
//	{
//		printf("hh\n");
//	}
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	int k = 0;
//	for (i = 0, k = 0; k = 10; i++, k++)
//		k++;
//	return 0;
//}
//do while
//int main()
//{
//	int i = 1;
//	do{
//		if (5 == i)
//			continue;
//		printf("%d ", i);
//		i++;
//	} 
//	while (i <= 10);
//	return 0;
//}
//����n�Ľ׳�
//int main()
//{
//	int i = 1;
//	int ret = 1;
//	int n=0;
//	scanf("%d", &n);
//	for (i = 1; i <= n; i++)
//	{
//		ret *= i;
//	}
//	printf("ret=%d\n", ret);
//	return 0;
//}
//����1!+2!+....+10!
//int main()
//{
//	int i;
//	int ret = 1;
//	int sum = 0;
//	int n = 0;
//	for (n = 1; n <= 10; n++){
//		ret = 1;//��ȥret�ۻ�Ч��
//		for (i = 1; i <= n; i++)
//		{
//			ret *= i;
//		}
//		sum += ret;
//	}
//	printf("sum=%d\n", sum);
//	return 0;
//}
//Ч�ʸ���д��  ����1!+2!+....+10!
//int main()
//{
//	int ret = 1;
//	int sum = 0;
//	int n = 0;
//	for (n = 1; n <= 10; n++){
//		ret *= n;
//		sum += ret;
//	}
//	printf("sum=%d\n", sum);
//	return 0;
//}
//�����������в��Ҿ���ĳ������
//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int k = 7;
//	//��arr���������ҵ�7
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0; i < sz; i++)
//	{
//		if (k == arr[i])
//		{
//			printf("�ҵ�: �±�Ϊ%d\n", i);
//			break;
//		}
//	}
//	if (i == sz)
//		printf("�Ҳ���\n");
//	return 0;
//}
//�۰�(����)����ʵ��
//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int k = 7;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//
//	int left = 0;//���±�
//	int right = sz - 1;//���±�
//	while (left<=right)
//	{
//		int mid = (left + right) / 2;
//		if (arr[mid] > k)
//		{
//			right = mid - 1;
//		}
//		else if (arr[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else
//		{
//			printf("�ҵ�,�±�Ϊ��%d\n", mid);
//			break;
//		}
//	}
//	if (left>right)
//	{
//		printf("�Ҳ���\n");
//	}
//	return 0;
//}
//��ʾ����ַ��������ƶ������м���
//int main()
//{
//	char arr1[] = "hello stupdsheep!!!!!";
//	char arr2[] = "#####################";
//	int left = 0;
//	int right = strlen(arr1) - 1;
//
//	while (left<=right)
//	{
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		printf("%s\n", arr2);
//		left++;
//		right--;
//		Sleep(1000);//��Ϣһ��S��д��λ����<windows.h>
//		system("cls");//ִ��ϵͳ�����һ������-cls-�����Ļ<stdlib.h>
//		
//	}
//	printf("%s\n", arr2);
//	return 0;
//}
//ģ���û���¼�龰������ֻ�ܵ�½���Σ����������������룬������ȷ��ʾ��½�ɹ������ξ��������˳�����
//int main()
//{
//	int i = 0;
//	char password[20] = { 0 };
//	for (i = 0; i < 3; i++)
//	{
//		printf("����������:>");
//		scanf("%s", &password);//&
//		if (strcmp(password, "123456") == 0)//
//		{
//			printf("������ȷ,��¼�ɹ�!!!\n");
//			break;
//		}
//		else
//			printf("������������\n");
//	}
//	if (3 == i)
//		printf("�������������,�˳�����\n");
//	return 0;
//}
//����
//int main()
//{
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		if (i = 5)//�˴�Ϊ��ֵ
//			printf("%d ", i);
//	}
//	return 0;
//}
//���������Ӵ�С���
//int main()
//{
//	printf("������������:>\n");
//	int i = 0;
//	int m = 0;
//	int n = 0;
//	scanf("%d%d%d", &i, &m, &n);
//	if (i < m)
//	{
//		int tmp = i;
//		i = m;
//		m = tmp;
//	}
//	if (i < n)
//	{
//		int tmp = i;
//		i = n;
//		n = tmp;
//	}
//	if (m < n)
//	{
//		int tmp = m;
//		m = n;
//		n = tmp;
//	}
//	printf("%d >%d >%d", i, m, n);
//	return 0;
//}
//if��else if ֮��������ϵ��,��������if�е�������ʱ��,�Ż�ȥִ��else if
//
//���if�е������Ѿ�������, �Ͳ���ȥ�ж�else if�е�������
//
//����if�����һ��ʱ���Ż����ζ�ÿһ��if�䶼�����ж�, ����֮�䲻��Ӱ�졣
//
//
//��1-100��3�ı���������
//int main()
//{
//	for (int i = 1; i <= 100; i++)
//	{
//		if ((i % 3) == 0)
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}
//�������������������������Լ��(շת�����)
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int i = 0;
//	scanf("%d%d", &a, &b);
//	while (i = a%b)
//	{
//		i = a%b;
//		a = b;
//		b = i;
//	}
//	printf("���Լ��Ϊ:%d\n", b);
//	return 0;
//}
//��ӡ1000-2000��֮�������
//int main()
//{
//	//1���ܱ�4�������Ҳ��ܱ�100����������-��ͨ����
//	//2���ܱ�400����������-��������
//	int i = 0;
//	int count = 0;
//	for (i = 1000; i <= 2000; i++)
//	{
//		/*if (i % 4 == 0 && i % 100 != 0)
//		{
//			printf("%d ", i);
//			count++;
//		}
//		else if (i % 400 == 0)
//		{
//			printf("%d ", i);
//			count++;
//		}*/
//		if ((i % 4 == 0 && i % 100 != 0) || (i % 400 == 0))
//		{
//			printf("%d ", i);
//			count++;
//		}
//	}
//	printf("\ncount=%d\n", count);
//	return 0;
//}
//��ӡ100-200֮�������
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		//�Գ���
//		int j = 0;
//		for (j = 2; j < i; j++)
//		{
//			if (i%j == 0)
//			{
//				break;
//			}
//			//static �ؼ���
//		}
//
//		//1,2
//		if (j == i)
//		{
//			printf("%d ", i);
//			count++;
//		}
//	}
//	printf("\ncount=%d\n", count);
//	return 0;
//}
//�Գ����Ż�
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 101; i <= 200; i+=2)
//	{
//		//�Գ���
//		int j = 0;
//		for (j = 2; j <= sqrt(i); j++)
//		{
//			if (i%j == 0)
//			{
//				break;
//			}
//		}
//
//		//1,2
//		if (j >sqrt(i))
//		{
//			printf("%d ", i);
//			count++;
//		}
//	}
//	printf("\ncount=%d\n", count);
//	return 0;
//}
//1-100���������г��ֶ��ٸ�����9
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		//��λΪ9��ģ10Ϊ9
//		//ʮλΪ9������10��Ϊ9
//		if (i % 10 == 9)
//		{
//			count++;
//		}
//		if (i/10 == 9)
//		{
//			count++;
//		}
//		//ע��˴�����ifΪ���У���Ϊelse if ���Թ�99��ֻ����if����
//	}
//	printf("count=%d\n", count);
//	return 0;
//}
//�������
//��1/1-1/2+1/3-1/4����+1/99-1/100��ֵ
//int main()
//{
//	int i = 0;
//	double sum = 0;
//	int flag = 1;
//	for (i = 1; i <= 100; i++)
//	{
//		sum += flag*1.0 / i;
//		//sum += 1 / i;
//		//1+0+0+0����+0
//		//Ҫ�õ�С�������뱣֤����������һ�����Ǹ�����
//		//�򽫣�ȫ����ĸΪ����������-��ȫ����ĸΪż��������
//		flag = -flag;
//	}
//	printf("%lf\n", sum);
//	return 0;
//}
//��ʮ�������е����ֵ
//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int i = 0;
//	//int max = 0;//max���ܸ�ֵΪ�㣬�������ж��Ǹ������˴��жϴ���
//	int max = arr[0];//�ɽ�max��ֵΪ��������һԪ��
//	int sz = sizeof(arr)/sizeof(arr[0]);
//	for (/*i = 0*/i=1 ; i < sz; i++)
//	{
//		if (arr[i]>max)
//		{
//			max = arr[i];
//			//������Ԫ����max�Ƚϣ���Ԫ�ر�max���򽻻�����
//		}
//	}
//	printf("max = %d\n", max);
//	return 0;
//}
//9*9�˷��ھ���
//int main()
//{
//	int m = 0;
//	int n = 0;
//	int i = 0;
//	for (m = 1; m < 10; m++)//ȷ��9��
//	{
//		//��ӡһ��
//		for (n = 1; n <=m; n++)
//		{
//			i = n*m;
//			printf("%d * %d = %-2d ", m, n, i);
//			//%2d��ӡ��λ�������ո��룬�Ҷ���
//			//%-2d�����
//		}
//		printf("\n");
//	}
//	return 0;
//}
//��������Ϸʵ�� 1�����Ի�����һ������� 2��������
//void menu()
//{
//	printf("*********************\n");
//	printf("***1.play---0.exit***\n");
//	printf("*********************\n");
//}
////����msdn--΢����--������
//void game()
//{
//	//1������һ�������  rand()�����������������2��18
//	int ret = 0;
//	int guess = 0;
//	ret = rand()%100+1;//����1-100֮�������
//	//ʱ���
//	//printf("%d\n", ret);
//	//2��������
//	while (1)
//	{
//
//		printf("�������:>");
//		scanf("%d", &guess);
//
//		if (guess > ret)
//		{
//			printf("�´���\n");
//		}
//		else if (guess < ret)
//		{
//			printf("��С��\n");
//		}
//		else
//		{
//			printf("��ϲ�������¶���\n");
//			break;
//		}
//	}
//}
//int main()
//{
//	srand((unsigned int)time(NULL));
//	//��Ϸ���ٽ���һ��
//	int input = 0;
//	do
//	{
//		menu();
//		printf("��ѡ��>;");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			game();//��������Ϸ����
//			break;
//		case 0:
//			printf("�˳���Ϸ\n");
//			break;
//		default:
//			printf("ѡ�����\n");
//			break;
//		}
//	} while (input);
//
//	return 0;
//}
//
//�ػ�����
//goto���
//int main()
//{
//	char input[20] = { 0 };
//again:
//	system("shutdown -s -t 60");
//	printf("��ע����ĵ��Խ���һ����֮��ػ������룺������ȡ���ػ���������>;\n");
//	scanf("%s", &input);
//	if (strcmp(input, "������") == 0)
//	{
//		system("shutdown -a");
//	}
//	else
//		goto again;
//	return 0;
//}
//��
//int main()
//{
//	char input[20] = { 0 };
//	while (1){
//		system("shutdown -s -t 60");
//		printf("��ע����ĵ��Խ���һ����֮��ػ������룺������ȡ���ػ���������>;\n");
//		scanf("%s", &input);
//		if (strcmp(input, "������") == 0)
//		{
//			system("shutdown -a");
//			break;
//		}
//	}
//	return 0;
//}
//break��Ƕ��ѭ��  return 0 ����
//�Զ��庯��
//int get_max(int x, int y)
//{
//	return (x > y) ? (x): (y);
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int max = get_max(a, b);
//	printf("max=%d\n", max);
//	return 0;
//}
//���������������ͱ�������
//void Swap1(int x, int y)
//{
//	int tmp1 = 0;
//	tmp1 = x;
//	x = y;
//	y = tmp1;
//}
//void Swap2(int* x, int* y)
//{
//	int tmp2 = 0;
//	tmp2 = *x;
//	*x = *y;
//	*y = tmp2;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	printf("a=%d ,b=%d\n", a, b);
//	//Swap1(a, b); 
//	Swap2(&a, &b);
//	printf("a=%d ,b=%d\n", a, b);
//}
//�ú����ж��Ƿ�Ϊ����
//int is_prime(int n)
//{
//	int j = 0;
//	for (j = 2; j <= sqrt(n); j++)
//	{
//		if (n%j == 0)
//		{
//			return 0;
//		}
//	}
//	//if (j > sqrt(n)) �˴��ɲ���if��������return 0 ��ֱ�ӽ���������Ч����breakǿ�������˴�ֻ��һ�ֿ���
//		return 1;
//}
//int main()
//{
//	int i = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		if (is_prime(i) == 1)
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}
//�ú�����ӡ1000-2000֮������
//int runyear(int i)
//{
//	if ((i % 4 == 0 && i % 100 != 0) || (i % 400 == 0))
//		return 1;
//	else
//		return 0;
//}
//int main()
//{
//	int year = 0;
//	for (year = 1000; year <= 2000; year++){
//		if (1 == runyear(year))
//		{
//			printf("%d ",year);
//		}
//	}
//	return 0;
//}
//����ʵ����������������ֲ��ң���Ҫ��
//int binary_search(int arr[], int k,int sz)
//{
//	int left = 0;
//	int right = sz - 1;
//	while (left <= right){
//		int mid = (left + right) / 2;
//		if (arr[mid] > k)
//		{
//			right = mid - 1;
//		}
//		else if (arr[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else
//			return mid;
//	}
//	return -1;
//}
//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int k = 7;
//	//�ҵ����������±꣬�Ҳ����򷵻�-1
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int ret = binary_search(arr, k,sz);
//	if (-1 == ret)
//	{
//		printf("�Ҳ���ָ������\n");
//	}
//	else
//	{
//		printf("�ҵ��ˣ��±�Ϊ%d\n",ret);
//	}
//	return 0;
//}
//д������ÿ����һ�Σ�num+1
//void add(int* p)
//{
//	(*p)++;
//}
//int main()
//{
//	int num = 0;
//	add(&num);
//	printf("num=%d\n",num);
//	add(&num);
//	printf("num=%d\n", num);
//	add(&num);
//	printf("num=%d\n", num);
//	return 0;
//}
//����Ƕ�׵���
//void one_line()
//{
//	printf("hehe\n");
//}
//void three_line()
//{
//	for (int i = 1; i <= 3; i++)
//	{
//		one_line();
//	}
//}
//int main()
//{
//	three_line();
//	return 0;
//}
//��ʽ����
//int main()
//{
//	//1
//	int len = 0;
//	len = strlen("abc");
//	printf("%d\n", len);
//	//2
//	printf("%d\n", strlen("abc"));
//	printf("%d", printf("%d", printf("%d", 423)));//printf��������ֵ�Ǵ�ӡ���ַ�����-msdn����ʽ����pdf��
//42331
//}
//
//��������
//int Add(int, int);
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int sum = 0;
//	//��������
//	sum = Add(a, b);
//	printf("%d\n", sum);
//	return 0;
//}
////��������
//int Add(int x, int y)
//{
//	int z = x + y;
//	return z;
//}
//#include "add.h"
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int sum = 0;
//	//��������
//	sum = Add(a, b);
//	printf("%d\n", sum);
//	return 0;
//}
//ʷ����򵥵ݹ�
//int main()
//{
//	printf("hehe\n");
//	main();
//	return 0;
//}
//����һ������ֵ���޷��ţ�������˳���ӡÿһλ 
//void print(int n)
//{
//	if (n > 9)
//	{
//		print(n/10);
//	}
//	printf("%d ", n % 10);
//}
//int main()
//{
//	unsigned int num = 0;
//	scanf("%d", &num);
//	print(num);
//	return 0;
//}
//��д��������������ʱ���������ַ����ĳ���
//int my_strlen(char* str)//strΪָ���������b��ַ,
//{
//	int count = 0;
//	while (*str != '\0')
//	{
//		str++;//��ַ+1,strָ��i��ַ
//		count++;
//	}
//	return count;
//}
//�ݹ鷽�����
//my_strlen("bit");
//1+my_strlen("it");
//1+1+my_strlen("t");
//1+1+1+my_strlen("");
//1+1+1+0
//int my_strlen(char* str)
//{
//	if (*str != '\0')
//		return 1 + my_strlen(str + 1);//str+1���i�ĵ�ַ
//	else
//		return 0;
//}
//int main()
//{
//	char arr[] = "bit";//����arr���Σ�����ȥ�Ĳ����������飬���ǵ�һ��Ԫ�صĵ�ַ
//	int len = my_strlen(arr);
//	printf("len = %d\n", len);
//	return 0;
//}
//�ݹ���n�Ľ׳ˣ������������
//int Fac1(int n)
//{
//	int ret = 1;
//	for (int i = 1; i <= n; i++)
//	{
//		ret *= i;
//	}
//	return ret;
//}
//int Fac2(int n)
//{
//	if (n <= 1)
//	{
//		return 1;
//	}
//	else
//	{
//		return (n*Fac2(n - 1));
//	}
//}
//int main()
//{
//	int n = 0;
//	int ret = 0;
//	scanf("%d", &n);
//	ret = Fac1(n);//ѭ����ʽ
//	ret = Fac2(n);//�ݹ鷽ʽ
//	printf("ѭ��%d\n", ret);
//	printf("�ݹ�%d\n", ret);
//	return 0;
//}
//���n��쳲��������������������(��Ҫ)
//int Fei1(int n)//Ч�ʹ���
//{
//	if (n <= 2)
//		return 1;
//	else
//		return (Fei(n - 1) + Fei(n - 2));
//}
//ѭ������
//int Fei2(int n)
//{
//	int a = 1;
//	int b = 1;
//	int c = 1;//c����Ϊ�㣬��n<=2ʱ
//	while (n > 2){
//		c = a + b;//1 1 2 3 5 8 13 21 33
//		a = b;    //a b c
//		b = c;
//		n--;
//	}
//	return c;
//}
//int main()
//{
//	int n = 0;
//	int mber = 0;
//	scanf("%d", &n);
//	//mber = Fei1(n);
//	//printf("%d\n", mber);
//	mber = Fei2(n);
//	printf("%d\n", mber);
//	return 0;
//}
//
//����
//��������
//int main()
//{
//	int arr[10] = { 1, 2, 3, 4 };
//	char arr1[] = "abcdef";
//	printf("%d\n", sizeof(arr1));
//	printf("%d\n", strlen(arr1));
//	return 0;
//}
//һά�������ڴ�洢
//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (int i = 0; i < sz; i++)
//	{
//		printf("arr[%d] = %p\n", i, &arr[i]);
//	}
//	return 0;
//}
//��ά����
//int main()
//{
//	int arr[3][4] = { 1, 2, 3, 4, 5 };
//	int arr2[3][4] = { { 1, 2, 3 }, 4, 5 };
//	//����
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		int m = 0;
//		for (m = 0; m < 4; m++)
//			printf("%d ", arr2[i][m]);
//		printf("\n");
//	}
//	return 0;
//}
//��ά�������ڴ��д洢
//int main()
//{
//	int arr[3][4] = { 1, 2, 3, 4, 5 };
//	int arr2[3][4] = { { 1, 2, 3 }, 4, 5 };
//	//����
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		int m = 0;
//		for (m = 0; m < 4; m++)
//			printf("&arr2[%d][%d] = %p\n",i,m, &arr2[i][m]);
//	}
//	return 0;
//}
//������Ϊ��������
//ð������,�����������������
//void bubble_sort(int arr[], int sz)
//{
//	//ȷ����������
//	int n = 0;
//	int j = 0;
//	for (n = 0; n < sz; n++)
//	{
//		//ÿһ������
//		int flag = 1;//������һ������������Ѿ�����
//		for (j = 0; j < sz - n - 1; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int tmp = 0;
//				tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//				flag = 0;//���������������ʵ������ȫ����
//			}
//		}
//		if (flag == 1)
//			break;
//	}
//}
//int main()
//{
//	int arr[] = {  9, 8, 7, 6, 5, 4, 3, 2, 1, 0 };
//	//��arr�ų�����
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	bubble_sort(arr, sz);
//	//��arr���Σ�ʵ���ϴ��ݵ���������Ԫ�ص�ַ  &arr[0]
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}
//������
//#include "game1(��).h"
//void game1()
//{
//	char ret = 0;
//	//������������Ϣ
//	char board[ROW][COL] = { 0 };//0 ���ɴ�ӡԪ��
//	Initboard(board, ROW, COL);//��ʼ������,Ԫ��Ϊ�ո�
//	Displayboard(board, ROW, COL);//������ӡ����
//	while (1) {//����
//		//�������
//		PlayerMove(board, ROW, COL);
//		Displayboard(board, ROW, COL);
//		//�ж������Ӯ
//		ret = IsWin(board,ROW,COL);
//		if (ret != 'C')
//		{
//			break;
//		}
//		//��������
//		ComputerMove(board, ROW, COL);
//		Displayboard(board, ROW, COL);
//		//�жϵ�����Ӯ
//		ret = IsWin(board,ROW,COL);
//	}
//	if (ret == '*')
//		printf("���Ӯ\n");
//	else if (ret == '#')
//		printf("����Ӯ\n");
//	else
//		printf("ƽ��\n");
//}
//void menu()
//{
//	printf("*********************\n");
//	printf("***1-play   0-exit***\n");
//	printf("*********************\n");
//}
//void test()
//{
//	int input = 0;
//	srand((unsigned int)time(NULL));
//	do{
//		menu();
//		printf("��ѡ��>:");
//		scanf("%d", &input);
//		switch (input) {
//		case 0:
//			printf("�˳���Ϸ\n");
//			break;
//		case 1:
//			game1();
//			break;
//		default:
//			printf("ѡ���������ѡ��\n");
//			break;
//		}
//	} while (input);
//
//}
//int main()
//{
//
//	test();
//	return 0;
//}
//ɨ��
//#include "game(ɨ��).h"
//void menu() {
//	printf("************************\n");
//	printf("****1-play    0-exit****\n");
//	printf("************************\n");
//}
//void game() {
//	//�׵���Ϣ�洢
//	//���úõ��׵���Ϣ
//	char mine[ROWS][COLS] = { 0 };
//	//�Ų�����׵���Ϣ
//	char show[ROWS][COLS] = { 0 };
//	//��ʼ��
//	Initboards(mine, ROWS, COLS, '0');
//	Initboards(show, ROWS, COLS, '*');
//	//��ӡ����
//	//DispalyBoard(mine, ROW, COL);
//	DispalyBoard(show, ROW, COL);
//	//������
//	SetMine(mine, ROW, COL);
//	DispalyBoard(mine, ROW, COL);
//	//ɨ��
//	FindMine(mine,show,ROW,COL);
//}
//void test() {
//	int input = 0;
//	srand((unsigned int)time(NULL));
//	do {
//		menu();
//		printf("��ѡ��>:");
//		scanf("%d", &input);
//		switch (input) {
//		case 1:
//			game();
//			break;
//		case 0:
//			printf("�˳���Ϸ\n");
//			break;
//		default:
//			printf("�����������ѡ��\n");
//			break;
//		}
//	} while (input);
//}
//int main()
//{
//	test();
//	return 0;
//}
//������
//������������ֵ������������������
//int main()
//{
//	//int a = -16;
//	//int b = a >> 2;
//	//printf("%d", b);
//	int a = 3;
//	int b = 5;
//	//�Ӽ���-���ܻ����a+b��ֵ�ǳ���ʱ
//	//a = a + b;
//	//b = a - b;
//	//a = a - b;
//	a = a ^ b;//
//	b = a ^ b;//
//	a = a ^ b;//
//	printf("%d %d\n", a, b);
//	return 0;
//}
//��һ�������洢���ڴ��еĶ������е�1�ĸ���
//int main()
//{
//	int n = 0;
//	int count = 0;
//	scanf("%d", &n);
//	//����һ
//	//while (n) {
//	//	if (n % 2 == 1) {
//	//		count++;
//	//	}
//	//	n = n / 2;
//	//}
//	//ȱ�ݣ������޷�ͳ��
//	//������
//	//for (int i = 0; i < 32; i++) {
//	//	//n = n >> i;
//	//	if (1 == ((n>>i) & 1)) {//�����λ�����1��λ��,ע������
//	//		count++;
//	//	}
//	//}
//	//������
//
//	printf("%d\n", count);
//	return 0;
//}
//��ֵ��
//int main()
//{
//	short s = 0;//2�ֽ�
//	int a = 10;
//	printf("%d\n", sizeof(s = a + 5));//2
//	printf("%d\n", s);//0
//	return 0;
//}
//��Ŀ������
//int main()
//{
//	//int a = 0;
//	//printf("%d\n", ~a);
//	int a = 11;//1011,�ѵ�������λ��Ϊ1
//	a = a | (1 << 2);//��0001��������λ
//	printf("%d\n", a);
//	a = a & (~(1 << 2));
//	printf("%d\n", a);
//	return 0;
//}
//sizeof
//void test1(int arr[])
//{
//	printf("%d\n", sizeof(arr));//4
//}
//void test2(char ch[])
//{
//	printf("%d\n", sizeof(ch));//4
//}
//int main()
//{
//	int arr[10] = { 0 };
//	char ch[10] = { 0 };
//	printf("%d\n", sizeof(arr));//40
//	printf("%d\n", sizeof(ch));//10
//	test1(arr);
//	test2(ch);
//	return 0;
//}
//�߼�������
//int main()
//{
//	//int a = 3;
//	//int b = 5;
//	//int c = a && b;
//	//printf("%d", c);
//	int i = 0, a = 0, b = 2, c = 3, d = 4;
//	i = a++ && ++b && d++;//1,2,4,0,a++ʹ��Ϊ�㣬&&�ұ�����ִ�У������ж�i
//	//i = a++ || ++b || d++;//2,2,4,1
//	printf("a=%d\n b=%d\n d=%d\n i=%d\n", a, b, d, i);
//	return 0;
//}
//���ű��ʽ
//a = get_val();
//count_val(a);
//while (a > 0) {
//	//ҵ����
//	a = get_val();
//	count_val(a);
//}
////���ű��ʽ��д
//while (a = get_val(), count_val(a), a > 0) {
//	//ҵ����
//}
//����һ���ṹ�ĳ�Ա
//struct stu
//	//������һ���ṹ������-struct stu,���ͣ�����int
//{
//	char name[20];
//	int age;
//	char id[20];
//};
//int main()
//{
//	//ʹ��struct stu������ʹ�����һ��ѧ�������ǣ�����ʼ��
//	struct stu s1 = { "��",29,"221312" };
//
//	printf("%s\n", s1.name);
//	struct stu* ps = &s1;
//	printf("%d\n", (*ps).age);
//
//	printf("%s\n", ps->id);
//	return 0;
//}
//��ʽ����ת��
//��������
//int main()
//{
//	char a = 3;
//	char b = 127;
//	char c = a + b;
//	printf("%d\n", c);
//	return 0;
//}
//����һ
//int main()
//{
//	char a = 0xb6;
//	short b = 0xb600;
//	int c = 0xb6000000;
//	if (a == 0xb6)
//		printf("a");
//	if (b == 0xb600)
//		printf("b");
//	if(c==0xb6000000)
//		printf("c");
//	return 0;
//}
//������
//int main()
//{
//	char c = 1;
//	printf("%u\n", sizeof(c));
//	printf("%u\n", sizeof(+c));
//	printf("%u\n", sizeof(!c));
//	return 0;
//}
//������������
//���ȼ���  "C:\Users\ŷ������\Desktop\bit\2021��C��������-���ؾ�ҵ��\�Ͽομ�-2021��C���� -�����ؾ�ҵ���ṩ��\����\��5��-���������.pdf"
//N-R�޽���ԣ�������ҽ��
//int main()
//{
//	//int a = 10;
//	//int b = 20;
//	//int c = b + a * 3;
////�Ƿ����ʽ,�ڲ�ͬ�����������ͬ������·����Ψһ
//	int i = 0;
//	i = i-- - --i * (i = -3) * i++ + ++i;
//	printf("i=%d\n", i);
//	return 0;
//}
// �Ƿ����ʽ,�ڲ�ͬ�����������ͬ������·����Ψһ
//int fun()
//{
//	static int count = 1;
//	return ++count;
//}
//int main()
//{
//	int answer;
//	answer = fun() - fun() * fun();
//	printf("%d\n", answer);
//	return 0;
//}
//int main()
//{
//	int i = 1;
//	int a = (++i) + (++i) + (++i);
//	printf("a=%d\n", a);
//	printf("%d\n", i);
//	return 0;
//}
//ָ��
//int main()
//{
//	int a = 0x11223344;
//	int* pa = &a;
//	//*pa = 0;
//	char* pb = &a;
//	//*pb = 0;
//	printf("%p\n", pa);
//	printf("%p\n", pa+1);
//
//	printf("%p\n", pb);
//	printf("%p\n", pb+1);
//	return 0;
//}
//int main()
//{
//	int arr[10] = { 0 };
//	int* p = arr;//����������Ԫ�ص�ַ
//	for (int i = 0; i < 10; i++) {
//		*(p + i) = 1;
//		printf("%d ",arr[i]);
//	}
//	return 0;
//}
//Ұָ��3
//int* test()
//{
//	int a = 10;
//	return &a;
//}
//int main()
//{
//	int* p = test();
//	*p = 20;
//	return 0;
//}
//int main()
//{
//	int* p;
//	*p = 10;
//	return 0;
//}
//int main()
//{
//	int a = 10;
//	int* pa = &a;
//	*pa = 20;
//	pa = NULL;
//	*pa = 10;
//	printf("%d", *pa);
//	return 0;
//}
//int main()
//{
//	int* p = NULL;
//	//....
//	int a = 10;
//	p = &a;
//	if (p != NULL)
//	{
//		*p = 20;
//	}
//	printf("%d", a);
//	return 0;
//}
//ָ������
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int* pa = arr;
//	for (int i = 0; i < 10; i++) {
//		printf("%d ", *pa);
//		pa += 1;
//		//p++
//	}
//	return 0;
//}
//ָ��-ָ��
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	printf("%d", &arr[9] - &arr[0]);
//	return 0;
//}
//ģ��strlen���ַ����鳤�ȵ����ַ���
//int my_strlen(char* str)
//{
//	char* start = str;
//	char* end = str;
//	while (*end != '\0') {
//		end++;
//	}
//	return end - start;
//}
//int main()
//{
//	char arr[] = "bit";
//	int len = my_strlen(arr);
//	printf("%d\n", len);
//	return 0;
//}
//ָ�������
//int main() {
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int* p = arr;
//	//for (int i = 0; i < 10; i++) {
//	//	printf("%p==============%p\n", p + i, &arr[i]);
//	//}
//	for (int i = 0; i < 10; i++) {
//		*(p + i) = i;
//	}
//	return 0;
//}
//����ָ��
//int main()
//{
//	int a = 10;
//	int* pa = &a;
//	int** ppa = &pa;
//	return 0;
//}
//ָ������
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int c = 30;
//	int* arr[3] = { &a,&b,&c };
//	for (int i = 0; i < 3; i++) {
//		printf("%d ", *(arr[i]));
//	}
//	return 0;
//}
//��ҵ
//ð������
//����
//void Init(int arr[], int sz)
//{
//	for (int i = 0; i < sz; i++) {
//		arr[i] = i;
//	}
//}
//void Print(int arr[], int sz)
//{
//	for (int i = 0; i < sz; i++) {
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//}
//void Reverse(int arr[], int sz)
//{
//	int left = 0;
//	int right = sz - 1;
//	while (left < right)
//	{
//		int tmp = arr[left];
//		arr[left] = arr[right];
//		arr[right] = tmp;
//		left++;
//		right--;
//	}
//}
//int main()
//{
//	int arr[10] = { 0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	Init(arr, sz);//��ʼ��
//	Print(arr, sz);//��ӡ
//	Reverse(arr, sz);//��������
//	Print(arr, sz);//��ӡ
//	return 0;
//}
//������a����������b���ݽ���������һ����
//int main()
//{
//	int arr1[] = { 1,3,5,7,9 };
//	int arr2[] = { 2,4,6,8,0 };
//	int tmp = 0;
//	int sz = sizeof(arr1) / sizeof(arr1[1]);
//	for (int i = 0; i < sz; i++)
//	{
//		tmp = arr1[i];
//		arr1[i] = arr2[i];
//		arr2[i] = tmp;
//	}
//		for (int i = 0; i < sz; i++) {
//		printf("%d ", arr1[i]);
//	}
//		printf("\n");
//		for (int i = 0; i < sz; i++) {
//			printf("%d ", arr2[i]);
//		}
//	return 0;
//}
//������
//int main()
//{
//	int arr[] = { 1,2,3,4,5 };
//	short* p = (short*)arr;//ǿ��ת��Ϊshort�����������ֽ�
//	int i = 0;
//	for (i = 0; i < 4; i++)
//	{
//		*(p + i) = 0;
//	}
//	for (i = 0; i < 5; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}
//int main()
//{
//	int a = 0x11223344;
//	char* pc = (char*)&a;
//	*pc = 0;
//	printf("%x\n", a);//16���ƴ�ӡ
//	return 0;
//}
//int i;//�ֲ���������ʼ��Ĭ�����ֵ��ȫ�ֱ�������ʼ��Ĭ��0
//int main()
//{
//	i--;
//	if (i > sizeof(i))
//	{
//		printf(">\n");
//	}
//	else
//	{
//		printf("<\n");
//	}
//	return 0;
//}
//int main()
//{
//	int a, b, c;
//	a = 5;
//	c = ++a;//c=6,a=6
//	b = ++c, c++, ++a, a++;//c=8,b=7,a=8, =���ȼ����ڣ���ֵ���ڶ���
//	b += a++ + c;//+���ȼ�����+= a=9,b=8+7+8=23,c=8
//	printf("a=%d b=%d c=%d\n", a, b, c);
//	return 0;
//}
//дһ���������ض�����(����)��1�ĸ���
// ����������
//int count_bit_one(int n)
//{
//	int count = 0;
//	while (n) 
//	{
//		if (n % 2 == 1)
//			count++;
//		n = n / 2;
//	}
//	return count;
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int count = count_bit_one(n);
//	printf("%d\n", count);
//	//system("pause");
//	return 0;
//}
//�Ż���
//int count_bit_one(unsigned int n)
//{
//	int count = 0;
//	while (n) 
//	{
//		if (n % 2 == 1)
//			count++;
//		n = n / 2;
//	}
//	return count;
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int count = count_bit_one(n);
//	printf("%d\n", count);
//	//system("pause");
//	return 0;
//}
//�Ż���
//int count_bit_one(unsigned int n)
//{
//	int count = 0;
//	int i = 0;
//	for (i = 0; i < 32; i++)
//	{
//		if (((n >> i) & 1) == 1) {
//			count++;
//		}
//	}
//	return count;
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int count = count_bit_one(n);
//	printf("%d\n", count);
//	return 0;
//}
//�����㷨
//int count_bit_one(unsigned int n)
//{
//	int count = 0;
//	while (n) {
//		n = n & (n - 1);//1101
//		count++;
//	}
//	return count;
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int count = count_bit_one(n);
//	printf("%d\n", count);
//	return 0;
//}
//����int ����m��n�Ķ����Ʊ���У��ж��ٸ�λ��bit����ͬ
//int count_bit_one(int n)
//{
//	int count = 0;
//	while (n)
//	{
//		n = n & (n - 1);
//		count++;
//	}
//	return count;
//}
//int ger_diff_bit(int m, int n)
//{
//	int tmp = m ^ n;
//	return count_bit_one(tmp);
//	
//}
//int main()
//{
//	int m = 0;
//	int n = 0;
//	scanf("%d%d", &m, &n);
//	int count = ger_diff_bit(m, n);
//	printf("%d\n", count);
//	return 0;
//}
//ţ����ˢ��
//��ȡ�����������е�����ż��λ������λ���ֱ��ӡ
//void print(int n)
//{
//	int i = 0;
//	printf("����λ\n");
//	for (i = 30; i >= 0; i -= 2)
//	{
//		printf("%d ", (n >> i) & 1);
//	}
//	printf("\n");
//	printf("ż��λ\n");
//	for (i = 31; i >= 1; i -= 2)
//	{
//		printf("%d ", (n >> i) & 1);
//	}
//	printf("\n");
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	print(n);
//	return 0;
//}
// ������ݹ�
//����fun��2����������ֵ
//int Fun(int n)
//{
//	if (n == 5)
//		return 2;
//	else
//		return 2 * Fun(n + 1);
//}
//�Զ���˷��ھ���
//void print_table(int n)
//{
//	for (int i = 1; i <= n; i++)
//	{
//		for (int j = 1; j <= i; j++)
//		{
//			printf("%d * %d = %-2d ", i, j, i * j);
//		}
//		printf("\n");
//	}
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	print_table(n);
//	return 0;
//}
//����ʵ���ַ����ַ�����
//int my_strlen(char* str)//���ַ��������������ݹ飬ָ��-ָ��
//{
//	int count = 0;
//	while ((*str) != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//void reverse_string(char arr[])
//{
//	int left = 0;
//	int right = my_strlen(arr) - 1;
//	int tmp = 0;
//	while (left < right)
//	{
//		tmp = arr[left];
//		arr[left] = arr[right];
//		arr[right] = tmp;
//		left++;
//		right--;
//	}
//}
//int main()
//{
//	char arr[] = "abcdef";
//	reverse_string(arr);
//	printf("%s\n", arr);
//	return 0;
//}
//����ʵ���ַ����ַ�����,�ݹ�ʵ��
//int my_strlen(char* str)
//{
//	int count = 0;
//	while ((*str) != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//void reverse_string(char* arr)
//{
//	char tmp = arr[0];//a����f��������a��Ϊf����f��Ϊ\0���ٷ�תbcde���ٰ�\0����a
//	int len = my_strlen(arr) - 1;
//	arr[0] = arr[len];
//	arr[len] = '\0';
//	if (my_strlen(arr + 1) >= 2) {
//		reverse_string(arr + 1);
//	}
//	arr[len] = tmp;
//
// }
//int main()
//{
//	char arr[] = "abcdef";
//	reverse_string(arr);
//	printf("%s\n", arr);
//	return 0;
//}
//�õݹ麯��������һ���Ǹ�������������ɵ�����֮��
//int DigitSum(unsigned int num)
//{
//	if (num > 9) {
//		return DigitSum(num / 10) + num % 10;
//	}
//	else
//		return num;
//}
//int main()
//{
//	unsigned int num = 0;
//	scanf("%d",&num);
//	int ret = DigitSum(num);
//	printf("ret = %d\n", ret);
//	return 0;
//}
//�ݹ�ʵ��n��k�η�
//double pow(int n, int k)
//{
//	if (k < 0)
//	{
//		return 1.0 / pow(n, -k);
//	}
//	else if (k == 0)
//		return 1;
//	else
//		return n * pow(n, k - 1);
//}
//int main()
//{
//	int n = 0;
//	int k = 0;
//	scanf("%d%d", &n, &k);
//	double ret = pow(n, k);
//	printf("ret=%lf\n", ret);
//	return 0;
//}
//�ṹ��
//����
//����һ��ѧ��������
//struct Stu
//{
//	//��Ա����
//	char name[20];
//	short age;
//	char tele[12];
//	char sex[5];
//}s1,s2,s3;
//typedef struct Stu
//{
//	//��Ա����
//	char name[20];
//	short age;
//	char tele[12];
//	char sex[5];
//}Stu;
//int main()
//{
//	struct Stu s1={"zhangs",gy,"uhh9","nv"};
//	Stu s2 = { "����",55,"5456","��" };
//	return 0;
//}
//struct S
//{
//	int a;
//	char c;
//	char arr[20];
//	double d;
//};
//struct T
//{
//	char ch[10];
//	struct S s;
//	char* pc;
//};
//int main()
//{
//	char arr[] = "hello bit\n";
//	struct T t = { "hehe",{1,'w',"hello",3.14},arr };
//	printf("%s\n", t.ch);
//	printf("%s\n", t.s.arr);
//	printf("%lf\n", t.s.d);
//	printf("%s\n", t.pc);
//	return 0;
//}
//typedef struct Stu
//{
//	//��Ա����
//	char name[20];
//	short age;
//	char tele[12];
//	char sex[5];
//}stu;
//void print1(stu tmp)
//{
//	printf("name:%s\n", tmp.name);
//	printf("age: %d\n", tmp.age);
//	printf("tele:%s\n", tmp.tele);
//	printf("sex: %s\n", tmp.sex);
//}
//void print2(stu* ps)
//{
//	printf("name: %s\n", ps->name);
//	printf("age:  %d\n", ps->age);
//	printf("tele: %s\n", ps->tele);
//	printf("sex:  %s\n", ps->sex);
//}
//int main()
//{
//	stu s = { "����",50,"54561","��" };
//	//��ӡ�ṹ������
//	print1(s);
//	print2(&s);//Ч������
//	return 0;
//}
//Խ�絼����ѭ��
//int main()
//{	//vc6.0 <=10 ��ѭ��
//	//gcc <=11 ��ѭ��
//	//vs2013 <=12 ��ѭ��
//	//�ڴ沼�ֵĲ���
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	for (int i = 0; i <= 12; i++)
//	{
//		printf("hehe\n");
//		arr[i] = 0;
//	}
//	return 0;
//}
//ģ��ʵ�ֿ⺯��strcpy
// 6��
//void my_strcpy(char* dest,char* src)
//{
//	while (*(src-1) != '\0')
//	{
//		//*dest = *src;
//		//src++;
//		//dest++;
//		//�Ż�
//		*dest++ = *src++;
//	}
//}
// 
//���Ż� 7��
//void my_strcpy(char* dest, char* src)
//{
//	while (*dest++ = *src++)
//	{
//		;
//	}
//}
//������ΪNULL�����Ż� 8��
//void my_strcpy(char* dest, char* src)
//{
//	if (dest != NULL && src != NULL) {
//		while (*dest++ = *src++)
//		{
//			;
//		}
//	}
//}
//void my_strcpy(char* dest, char* src)
//{
//	assert(dest != NULL);
//	assert(src != NULL);//#include <assert.h>,����
//	while (*dest++ = *src++)
//	{
//		;
//	}
//}
//9��
//void my_strcpy(char* dest, const char* src)//const����Դͷ����
//{
//	assert(dest != NULL);
//	assert(src != NULL);//#include <assert.h>,����
//	while (*dest++ = *src++)
//	{
//		;
//	}
//}
//int main()
//{
//	char arr1[] = "###############";
//	char arr2[] = "bit";
//	my_strcpy(arr1, NULL);
//	printf("%s\n", arr1);
//	return 0;
//}
//char* my_strcpy(char* dest, const char* src)//const����Դͷ����,char*����Ŀ�ĵس�ʼ��ַ
//{
//	char* ret = dest;
//	assert(dest != NULL);
//	assert(src != NULL);//#include <assert.h>,����
//	while (*dest++ = *src++)
//	{
//		;
//	}
//	return ret;
//}
//int main()
//{
//	char arr1[] = "###############";
//	char arr2[] = "bit";
//	printf("%s\n", my_strcpy(arr1, arr2));//��ʽ����
//	return 0;
//}
//
//int main()
//{
//	const int num = 10;//const���Σ�num�������޸�
//	const int* p = &num;
//	*p = 20;
//
//	printf("%d\n", num);
//	return 0;
//}
//strlen����ʵ��
//int my_strlen(const char* str)//������str��ָ�����ݸı�
//{
//	int count = 0;
//	assert(str != NULL);//��ָ֤����Ч��
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//int main()
//{
//	char arr[] = "abcdef";
//	int len = my_strlen(arr);
//	printf("%d\n", len);
//	return 0;
//}
//���ݵĴ洢
//int main()
//{
//	int a = 10;
//	float f = 10.0;
//
//	return 0;
//}
//void test(void)
//{
//	printf("hehe\n");
//}
//int main()
//{
//	test(100);
//	return 0;
//}
//�жϵ�ǰ��������ֽ���
//int check_sys()
//{
//	int i = 1;
//	char* p = (char*)&i;
//	return *p;//����1��С�� ��0 ���
//}
//int check_sys()
//{
//	int i = 1;
//	return *(char*)&i;
//}
//int main()
//{
//	int ret = check_sys();
//	if (ret == 1)
//	{
//		printf("С��\n");
//	}
//	else
//		printf("���\n");
//	return 0;
//}
//��ϰ���������н����
//int main()
//{
//	char a = -1;
//	signed char b = -1;
//	unsigned char c = -1;
//	printf("a=%d,b=%d,c=%d\n", a, b, c);//-1,-1,255,%d��������
//	return 0;
//}
//int main()
//{
//	char a = -128;
//	//100000000 00000000 00000000 10000000 ԭ
//	//111111111 11111111 11111111 01111111 ��
//	//111111111 11111111 11111111 10000000 ��
//	//10000000
//	//111111111 11111111 11111111 10000000 ��������
//	printf("%u\n", a);//%u�޷���ʮ������  4294967168
//	return 0;
//}
//int main()
//{
//	char a = 128;//127+1=-128
//	printf("%u\n", a);//4294967168
//	return 0;
//}
//int main()
//{
//	int i = -20;
//	unsigned int j = 10;
//	printf("%d\n", i + j);//���ղ������㣬����ʽ��Ϊ�з������� -10
//	//10000000 00000000 00000000 00010100
//	//11111111 11111111 11111111 11101011
//	//11111111 11111111 11111111 11101100  -20����
//	//00000000 00000000 00000000 00001010  10���룬�޷�����
//	//11111111 11111111 11111111 11110110  ����
//	//10000000 00000000 00000000 00001010  Դ��  -10
//	return 0;
//}
//int main()
//{
//	unsigned int i;
//	for (i = 9; i >= 0; i--)
//	{
//		printf("%u\n", i);//��-1��Ϊ�޷��������ܴ�����������
//		Sleep(100);//˯��100����
//	}
//	return 0;
//}
//int main()
//{
//	char a[1000];
//	int i;
//	for (i = 0; i < 1000; i++)
//	{
//		a[i] = -1 - i;
//	}
//	printf("%d", strlen(a));//255
//	//strlen��\0����
//	//-1��-2��-3����������-128��127��126.��������3��2��1��0
//	return 0;
//}
//unsigned char i = 0;
//int main()
//{
//	for (i = 0; i <= 255; i++)
//	{
//		printf("hello world\n");//255+1=0,��ѭ��
//	}
//	return 0;
//}
//���������ڴ��еĴ洢
//int main()
//{
//	int n = 9;
//	//0 00000000 00000000000000000001001 -����
//	//
//	float* pFloat = (float*)&n;
//	printf("n��ֵΪ %d\n", n);
//	printf("*pFloat��ֵΪ %f\n", *pFloat);//%f��ӡ6��bit
//	//(-1)^0*0.00000000000000000001001*2^126
//	//0.000000
//
//	*pFloat = 9.0;
//	//1001.0
//	// 1.001*2^3
//	//(-1)^0*1.001*2^3
//	//S=0,M=1.001,E=3+127=130
//	//0 10000010 00100000000000000000000
//	printf("n��ֵΪ %d\n", n);//������ӡ
//	//01000001000100000000000000000000 - ����
//	//1091567616 - ʮ����
//	printf("*pFloat��ֵΪ %f\n", *pFloat);
//	//9.000000
//	return 0;
//}
//void test(int arr[])
//{
//	printf("%d\n", sizeof(arr) / sizeof(arr[0]));
//}
//int main()
//{
//	int arr[10] = { 0 };
//	test(arr);
//	return 0;
//}
//�ַ�ָ��
//int main()
//{
//	/*char ch = 'w';
//	char* pc = &ch;*/
//
//	//char arr[] = "abcdef";
//	//char* pc = arr;
//	//printf("%s\n", arr);
//	//printf("%s\n", pc);
//
//	char* p = "abcdef";//�����ַ���
//	//*p = 'W';//�δ���
//	printf("%c\n", *p);
//	printf("%s\n", p);
//	return 0;
//}
//������
//int main()
//{
//	char arr1[] = "abcdef";
//	char arr2[] = "abcdef";
//	char* p1 = "abcdef";
//	char* p2 = "abcdef";
//	//if (arr1 == arr2)//arr1��arr2��ַ��ͬ
//	//{
//	//	printf("hehe\n");
//	//}
//	//else
//	//{
//	//	printf("haha\n");
//	//}
//	if (p1 == p2)
//	{
//		printf("hehe\n");
//	}
//	else
//	{
//		printf("haha\n");
//	}
//	return 0;//hehe
//}
//��ָoffer���Ӱ�
//ָ������
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int c = 30;
//	int d = 40;
//	int* arr[4] = { &a,&b,&c,&d };
//	int i = 0;
//	for (i = 0; i < 4; i++)
//	{
//		printf("%d ", *(arr[i]));
//	}
//	return 0;
//}
//int main()
//{
//	int arr1[] = { 1,2,3,4,5 };
//	int arr2[] = { 2,3,4,5,6 };
//	int arr3[] = { 3,4,5,6,7 };
//	int* parr[] = { arr1,arr2,arr3 };
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 5; j++)
//		{
//			printf("%d ", *(parr[i] + j));
//		}
//		printf("\n");
//	}
//	return 0;
//}
//����ָ��
//int main()
//{
//	int* p = NULL;
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int(*p)[10] = &arr;
//	return 0;
//}
//int main()
//{
//	char* arr[5];
//	char* (*pa)[5] = &arr;
//
//	int arr2[10] = { 0 };
//	int(*pa2)[10] = &arr2;
//	return 0;
//}
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int(*pa)[10] = &arr;
//	int i = 0;
//	//for (i = 0; i < 10; i++)
//	//{
//	//	printf("%d ", (*pa)[i]);
//	//}
//
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", *(*pa + i));
//	}
//	return 0;
//}
//�������������ʽ
//void print1(int arr[3][5],int x,int y)
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < x; i++)
//	{
//		for (j = 0; j < y; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//}
////������ָ�����ʽ
//void print2(int (*p)[5],int x,int y)
//{
//	int i = 0;
//	for (i = 0; i < x; i++)
//	{
//		int j = 0;
//		for (j = 0; j < y; j++)
//		{
//			//printf("%d ", *(*(p + i) + j));
//			//printf("%d ", (*(p + i))[j]);
//			printf("%d ", p[i][j]);
//		}
//		printf("\n");
//	}
//}
//int main()
//{
//	int arr[3][5] = { {1,2,3,4,5},{2,3,4,5,6},{3,4,5,6,7} };
//	//print1(arr, 3, 5);
//	print2(arr, 3, 5);
//	return 0;
//}
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int* p = arr;
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		//printf("%d ", *(p + i));
//		//printf("%d ", *(arr + i));
//		//printf("%d ", arr[i]);
//		//printf("%d ", p[i]);
//	}
//	return 0;
//}
//һ��ָ�봫��
//void print(int* p, int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d\n", *(p + i));
//	}
//}
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9 };
//	int* p = arr;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//һ��ָ��p����������
//	print(p, sz);
//	return 0;
//}
//void test1(int*p){}
//void test2(char* p){}
//int main()
//{
//	int a = 10;
//	int* p1 = &a;
//	test1(&a);
//	test1(p1);
//	char ch = 'w';
//	char* pc = &ch;
//	test2(&ch);
//	test2(pc);
//	return 0;
//}
//����ָ�봫��
//void test(int** ptr)
//{
//	printf("num=%d\n", **ptr);
//}
//int main()
//{
//	int n = 10;
//	int* p = &n;
//	int** pp = &p;
//	test(pp);
//	test(&p);
//	return 0;
//}
//void test(int** p){}
//int main()
//{
//	int* ptr=NULL;
//	int** pp = &ptr;
//	test(&ptr);
//	test(pp);
//	int* arr[10];
//	test(arr);//ָ������Ҳ����
//	return 0;
//}
//����ָ��
//int add(int x, int y)
//{
//	return x + y;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int sum = add(a, b);
//	//printf("%d\n", sum);
//	//printf("%p\n", &add);
//	//printf("%p\n", add);
//	int(*pa)(int, int) = add;
//	printf("%d\n", (*pa)(2, 3));//5
//  printf("%d\n", pa(2, 3));
//	return 0;
//}
//void Print(char* str)
//{
//	printf("%s\n", str);
//}
//int main()
//{
//	void(*p)(char*) = Print;
//	(*p)("hello, bit");
//	return 0;
//}
//����ָ������
//int add(int x, int y)
//{
//	return x + y;
//}
//int sub(int x, int y)
//{
//	return x - y;
//}
//int mul(int x, int y)
//{
//	return x * y;
//}
//int Div(int x, int y)
//{
//	return x / y;
//}
//int main()
//{
//	int(*parr[4])(int, int) = { add,sub,mul,Div };
//	int i = 0;
//	for (i = 0; i < 4; i++)
//	{
//		printf("%d\n", parr[i](3, 2));
//	}
//	return 0;
//}
//char* my_strcpy(char* dest, const char* src);
//int main()
//{
//	//дһ������ָ��pf��ָ����my_strcpy
//	char* (*pf)(char*, const char*);
//	//дһ������ָ������pfArr,�ܹ����4��my_strcpy�ĵ�ַ
//	char* (*pfArr[4])(char*, const char*);
//	return 0;
//}
//������
//void menu()
//{
//	printf("******************\n");
//	printf("**1.add  2.sub****\n");
//	printf("**3.mul  4.Div****\n");
//	printf("**5.XOR  0.exit***\n");
//	printf("******************\n");
//}
//int add(int x, int y)
//{
//	return x + y;
//}
//int sub(int x, int y)
//{
//	return x - y;
//}
//int mul(int x, int y)
//{
//	return x * y;
//}
//int Div(int x, int y)
//{
//	return x / y;
//}
//int XOR(int x, int y)
//{
//	return x ^ y;
//}
//int main()
//{
//	int input = 0;
//	int x = 0;
//	int y = 0;
//	//����ָ������pfArr
//	int(*pfArr[])(int, int) = { 0,add,sub,mul,Div,XOR};
//	do {
//		menu();
//		printf("��ѡ��>;");
//		scanf("%d", &input);
//		if (input >= 1 && input <= 5) {
//			printf("�����������>:");
//			scanf("%d%d", &x, &y);
//			int ret = pfArr[input](x, y);
//			printf("%d\n", ret);
//		}
//		else if (input == 0)
//		{
//			printf("�˳�\n");
//		}
//		else
//		{
//			printf("�������\n");
//		}
//
//
//	} while (input);
//	return 0;
//}

//int add(int a, int b)
//{
//    return a + b;
//}
//int sub(int a, int b)
//{
//    return a - b;
//}
//int mul(int a, int b)
//{
//    return a * b;
//}
//int Div(int a, int b)
//{
//    return a / b;
//}
//void menu()
//{
//    printf("*************************\n");
//    printf(" 1:add           2:sub \n");
//    printf(" 3:mul           4:div \n");
//    printf("*************************\n");
//    printf("��ѡ��");
//}
//void Calc(int(*pf)(int,int))
//{
//    int x = 0;
//    int y = 0;
//    printf("���������>��");
//    scanf("%d %d", &x, &y);
//    printf("%d\n", pf(x, y));
//}
//int main()
//{
//    menu();
//    int input = 1;
//    do
//    {
//
//        scanf("%d", &input);
//        switch (input)
//        {
//        case 1:
//            Calc(add);
//            break;
//        case 2:
//            Calc(sub);
//            break;
//        case 3:
//            Calc(mul);
//            break;
//        case 4:
//            Calc(Div);
//            break;
//        case 0:
//            printf("�˳�����\n");
//            break;
//        default:
//            printf("ѡ�����\n");
//            break;
//        }
//    } while (input);
//
//    return 0;
//}
//�ص�����
//void print(char* str)
//{
//	printf("hehe:%s", str);
//}
//void test(void(*p)(char* str))
//{
//	printf("test\n");
//	p("bit");
//}
//int main()
//{
//
//	test(print);
//	return 0;
//}
//ð������
//void bubble_sort(int arr[], int sz)
//{
//	int i = 0;
//	int tmp = 0;
//	int j = 0;
//	for (i = 0; i < sz - 1; i++)
//	{
//		for (j = 0; j < sz-i-1; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//			}
//		}
//	}
//}
//struct stu
//{
//	char name[20];
//	int age;
//};
//int cmp_int(const void* e1, const void* e2)
//{
//	//�Ƚ���������
//	return *(int*)e1 - *(int*)e2;
//}
//void test1()
//{
//	int arr[10] = { 9,8,7,6,5,4,3,2,1,0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	qsort(arr, sz, sizeof(arr[0]), cmp_int);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//}
//int cmp_float(const void* e1, const void* e2)
//{
//	//if (*(float*)e1 > *(float*)e2)
//	//{
//	//	return 1;
//	//}
//	//else if (*(float*)e1 < *(float*)e2)
//	//{
//	//	return -1;
//	//}
//	//else
//	//	return 0;
//	return ((int)(*(float*)e1 - *(float*)e2));
//}
//void test2()
//{
//	float f[] = { 9.0,8.0,7.0,6.0,5.0,4.0 };
//	int sz = sizeof(f) / sizeof(f[0]);
//	qsort(f, sz, sizeof(f[0]), cmp_float);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%f ", f[i]);
//	}
//}
//int cmp_stu_by_age(const void* e1, const void* e2)
//{
//	return (((struct stu*)e1)->age - ((struct stu*)e2)->age);
//}
//int cmp_stu_by_name(const void* e1, const void* e2)
//{
//	return strcmp(((struct stu*)e1)->name,((struct stu*)e2)->name);
//}
////void test3()
////{
////	struct stu s[3] = { {"����",10},{"gg",50},{"aiu",22} };
////	int sz = sizeof(s) / sizeof(s[0]);
////	qsort(s, sz, sizeof(s[0]), cmp_stu_by_age);
////	qsort(s, sz, sizeof(s[0]), cmp_stu_by_name);
////}
//
//void Swap(char* buf1, char* buf2, int width)
//{
//	int i = 0;
//	for (i = 0; i < width; i++)
//	{
//		char tmp = *buf1;
//		*buf1 = *buf2;
//		*buf2 = tmp;
//		buf1++;
//		buf2++;
//	}
//}
//int cmp_int(char* buf1, char* buf2)
//{
//	return (*(int*)buf1 - *(int*)buf2);
//}
//void bubble_sort(void* base, int sz, int width, int(*cmp)(void* e1, void* e2))
//{
//	int i = 0;
//	for (i = 0; i < sz - 1; i++)
//	{
//		int j = 0;
//		for (j = 0; j < sz - i - 1; j++)
//		{
//			//�ȽϺ���
//			if (cmp((char*)base+j*width,(char*)base+(j+1)*width) > 0)
//			{
//				//��������,�ַ�ָ�룬�贫width
//				Swap((char*)base + j * width, (char*)base + (j + 1) * width, width);
//			}
//		}
//	}
//}
//void test4()
//{
//	int arr[] = { 9,8,7,6,5,4,3,2,1,0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	bubble_sort(arr, sz, sizeof(arr[0]), cmp_int);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//}
//void test5()
//{
//	struct stu s[3] = { {"����",10},{"gg",50},{"aiu",22} };
//	int sz = sizeof(s) / sizeof(s[0]);
//	//bubble_sort(s, sz, sizeof(s[0]), cmp_stu_by_age);
//	bubble_sort(s, sz, sizeof(s[0]), cmp_stu_by_name);//δ����
//
//}
//int main()
//{
//	//bubble_sort(arr, sz);
//	//test1();
//	//test2();
//	//test3();
//	//ͨ����
//	//test4();
//	test5();
//	return 0;
//}
//ָ���������������

//int main()//��Ҫ
//{
	//sizeof(������)��&������
	
	//һά����
	//int a[] = { 1,2,3,4 };
	//printf("%d\n", sizeof(a));      //16
	//printf("%d\n", sizeof(a+0));    //4��8��a+0.��Ԫ�ص�ַ��������ǵ�ַ��С��4��8
	//printf("%d\n", sizeof(*a));     //4����Ԫ�ش�С
	//printf("%d\n", sizeof(a+1));    //4��8���ڶ���Ԫ�ص�ַ
	//printf("%d\n", sizeof(a[1]));   //4���ڶ���Ԫ�ش�С
	//printf("%d\n", sizeof(&a));     //4��8��ȡ�������ַ
	//printf("%d\n", sizeof(*&a));    //16��ȥ�������ַ�ٽ�����
	//printf("%d\n", sizeof(&a+1));   //4��8��&a+1��һ����ַ����ַ������������
	//printf("%d\n", sizeof(&a[0]));  //4��8����һ��Ԫ�ص�ַ
	//printf("%d\n", sizeof(&a[0]+1));//4��8���ڶ���Ԫ�ص�ַ


	//�ַ�����
	//char arr[] = { 'a','b','c','d','e','f' };
	//printf("%d\n", sizeof(arr));        //6
	//printf("%d\n", sizeof(arr + 0));    //4��8��arr+0��Ԫ�ص�ַ
	//printf("%d\n", sizeof(*arr));       //1 ��Ԫ��-��Ԫ�ص�ַ������
	//printf("%d\n", sizeof(arr[1]));     //1
	//printf("%d\n", sizeof(&arr));       //4��8 �����ַ
	//printf("%d\n", sizeof(&arr + 1));   //4��8
	//printf("%d\n", sizeof(&arr[0] + 1));//4��8

	//printf("%d\n", strlen(arr));        //���ֵ��arr��\0��strlen����\0����
	//printf("%d\n", strlen(arr + 0));    //���ֵ arr+0��Ԫ�ص�ַ
	//printf("%d\n", strlen(*arr));       //err  strlen()����Ϊ��ַ��*arrΪa��ASciiΪ97���Ƿ����ʵ�ַΪ97�����ݣ��������
	//printf("%d\n", strlen(arr[1]));     //err ͬ��
	//printf("%d\n", strlen(&arr));       //���ֵ �����ַ
	//printf("%d\n", strlen(&arr + 1));   //���ֵ ��&arr��6
	//printf("%d\n", strlen(&arr[0] + 1));//���ֵ����b�����ʣ���&arr��1

	//char arr[] = "abcdef";
	//printf("%d\n", sizeof(arr));        //7��sizeof������ռ�ռ��С
	//printf("%d\n", sizeof(arr + 0));    //4��8��arr+0��Ԫ�ص�ַ
	//printf("%d\n", sizeof(*arr));       //1 ��Ԫ�ش�С
	//printf("%d\n", sizeof(arr[1]));     //1 �ڶ���Ԫ�ش�С
	//printf("%d\n", sizeof(&arr));       //4��8 �����ַ
	//printf("%d\n", sizeof(&arr + 1));   //4��8 �������������ĵ�ַ
	//printf("%d\n", sizeof(&arr[0] + 1));//4��8 b�ĵ�ַ

	//printf("%d\n", strlen(arr));        //6
	//printf("%d\n", strlen(arr + 0));    //6
	//printf("%d\n", strlen(*arr));       //err
	//printf("%d\n", strlen(arr[1]));     //err ����98����ַ
	//printf("%d\n", strlen(&arr));       //6 ��������ʼλ�÷��ʣ����ᾯ�棬�����ַӦΪ����ָ�� char(*p)[7]=&arr,arr����char(*)[7]��
	////                                      ��strlen����Ϊconst char*���������Ͳ����ݣ�
	//printf("%d\n", strlen(&arr + 1));   //���ֵ
	//printf("%d\n", strlen(&arr[0] + 1));//5 ��b��λ�ÿ�ʼ

	//char* p = "abcdef";//�ѳ����ַ���a��ַ�ŵ�p��
	//printf("%d\n", sizeof(p));        //4��8
	//printf("%d\n", sizeof(p + 1));    //4��8 �����ַ�b��ַ��С
	//printf("%d\n", sizeof(*p));       //1 *p���ַ����ĵ�һ���ַ�
	//printf("%d\n", sizeof(p[0]));     //1  int arr[10]; arr[0]==*(arr+0)   p[0]==*(p+0)=='a'
	//printf("%d\n", sizeof(&p));       //4��8
	//printf("%d\n", sizeof(&p + 1));   //4��8 ָ������p�ĵ�ַ
	//printf("%d\n", sizeof(&p[0] + 1));//4��8  ����b�ĵ�ַ��С

	//printf("%d\n", strlen(p));        //6
	//printf("%d\n", strlen(p + 1));    //5 p+1Ϊb��ַ
	//printf("%d\n", strlen(*p));       //err �Ƿ�����
	//printf("%d\n", strlen(p[0]));     //err
	//printf("%d\n", strlen(&p));       //���ֵ ��p�ĵ�ַ��ʼ����
	//printf("%d\n", strlen(&p + 1));   //���ֵ
	//printf("%d\n", strlen(&p[0] + 1));//5


	//��ά���飨��Ҫ��
	//int a[3][4] = { 0 };
	//printf("%d\n", sizeof(a));           //48 ������Ԫ�ش�С 3*4*4
	//printf("%d\n", sizeof(a[0][0]));     //4
	//printf("%d\n", sizeof(a[0]));        //16  ��һ��4*4  a[0]�൱�ڵ�һ����Ϊһά�����������
	//printf("%d\n", sizeof(a[0] + 1));    //4 ��һ�еڶ���Ԫ�ص�ַ��a[0]����Ԫ�ص�ַ ��������û�е�������sizeof�ڲ�
	//printf("%d\n", sizeof(*(a[0] + 1))); //4 ��һ�еڶ���Ԫ�ش�С
	//printf("%d\n", sizeof(a + 1));       //4��8 a�Ƕ�ά���������� ����Ԫ�ص�ַ a+1�ڶ���һά�����ַ
	//printf("%d\n", sizeof(*(a + 1)));    //16 �ڶ���Ԫ�ش�С
	//printf("%d\n", sizeof(&a[0] + 1));   //4��8 �ڶ��е�ַ
	//printf("%d\n", sizeof(*(&a[0] + 1)));//16
	//printf("%d\n", sizeof(*a));          //16 a����Ԫ�ص�ַ���ǵ�һ�е�ַ *a�ǵ�һ��
	//printf("%d\n", sizeof(a[3]));        //16 sizeof�ڲ����ʽ��������ʵ���㣬������ʵ����У����������������С
	//return 0;
//}
//���� �㷨 ���ݽṹ ����ϵͳ ����
//ָ�������
//int main()
//{
//	int a[5] = { 1,2,3,4,5 };
//	int* ptr = (int*)(&a + 1);//����ָ������ǿ������ת��
//	printf("%d,%d\n", *(a + 1), *(ptr - 1));
//	return 0;
//}
//struct Test//p�ṹ��ָ��,ָ��+-����
//{
//	int Num;
//	char* pcName;
//	short sDate;
//	char cha[2];
//	short sBa[4];
//}*p;
////����p��ֵΪ0x100000�����±��ʽ��ֵ�ֱ��Ƕ��٣�
////��֪�ṹ��Test���͵ı�����С��20���ֽ�
//int main()
//{
//	p = (struct Test*)0x100000;
//	printf("%p\n", p + 0x1);//0x1Ϊ1��0x100000+14��20������%p��ӡ��0x00100014
//	printf("%p\n", (unsigned long)p + 0x1);//0x100000ת��Ϊ���� 1048576 ��+1 1048577 תΪ16���� 0x100001 ��%p��ӡ��0x00100001
//	printf("%p\n", (unsigned int*)p + 0x1);//0x100000ת��Ϊ����ָ�룬intָ��+1��0x100004 ��%p��ӡ��0x00100001
//	return 0;
//}
//int main()
//{
//	int a[4] = { 1,2,3,4 };
//	int* ptr1 = (int*)(&a + 1);
//	int* ptr2 = (int*)((int)a + 1);
//	printf("%x,%x", ptr1[-1], *ptr2);
//	return 0;
//}
//int main()
//{
//	int a[3][2] = { (0,1),(2,3),(4,5) };//�˴�Ϊ���ű��ʽ����������Ϊ{1��3}��{5��0}��{0��0}
//	int* p;
//	p = a[0];//a[0]�ǵ�һ����������������Ԫ�ص�ַ������1�ĵ�ַ
//	printf("%d", p[0]);//�ȼ���*��p+0��
//	return 0;
//}
int main()
{
	int a[5][5]; 
	int(*p)[4];
	p =a;//p���� int(*)[4]; a���� int(*)[5];
	printf("%p,%d\n", &p[4][2] - &a[4][2], &p[4][2] - &a[4][2]);
	return 0;
}