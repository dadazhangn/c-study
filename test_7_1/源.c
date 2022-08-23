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
//	printf("注入能量\n");
//	printf("写作业(0/1) >:");
//	scanf("%d", &input);
//	if (input == 1)
//		printf("继续学习\n");
//	else
//		printf("玩\n");
//
//}
//int main(){
//	int i = 0;
//	printf("加入比特\n");
//	while (i < 200){
//		printf("学习:%d\n",i);
//		i++;
//	}
//	if (i>=200)
//		printf("成功\n");
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
//移位操作符
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
//计算数组元素个数
//int main()
//{
//	int arr[10];
//	int i;
//	i = sizeof(arr) / sizeof(arr[0]);
//	printf("i=%d\n", i);
//	return 0;
//}
//条件操作符
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int max = 0;
//	max = (a > b ? a : b);
//	printf("%d\n", max);
//	return 0;
//}
//用函数判断两个数大小(有bug)
//int max(int x, int y){
//	int z = (x > y ? x : y);
//	return z;
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	printf("请输入一个数：");
//	scanf("%d\n", &a);
//	printf("请再输入一个数：");
//	scanf("%d\n", &b);
//	int x = max(a, b);
//	printf("最大的数是%d\n", x);
//	return 0;
//}
//static关键字修饰局部变量
//void test(){
//	static int a = 1;//a是一个静态的局部变量
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
//static关键字修饰全局变量
//int main()
//{
//	extern int g_val;
//	printf("%d\n", g_val);
//	return 0;
//}
//声明外部函数
//extern add(int, int);
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int sum = add(a, b);
//	printf("sum=%d\n", sum);
//	return 0;
//}
//#define可以定义标识符常量
//#define max 100
//#define 定义宏
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
//	//函数
//	int max = Max(a, b);
//	printf("max=%d\n", max);
//	//宏的定义
//	max = MAX(a, b);
//	printf("max=%d\n", max);
//	return 0;
//}
//指针
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
//结构体
//struct Book{
//	char name[50];
//	short price;
//};
//int main()
//{
//	struct Book b1 = { "我的世界", 56 };
//	struct Book* pb = &b1;
//	//printf("%s\n", pb->name);
//	//printf("%d\n", pb->price);
//	strcpy(b1.name, "C++");
//	printf("%s\n", (*pb).name);
//	printf("%d\n", (*pb).price);
//	//printf("书名：%s\n", b1.name);
//	//printf("价格：%d元\n", b1.price);
//	//b1.price = 20;
//	//printf("改后%d\n", b1.price);
//	return 0;
//}
//if语句
//int main()
//{
//	int age = 10;
//	if (age < 18)
//	{
//		printf("未成年\n");
//		printf("学习\n");
//	}
//	else {
//		if (18 <= age && age < 28)
//			printf("成年\n");
//		else if (age >= 28 && age < 50)
//			printf("壮年\n");
//		else if (age >= 50 && age < 90)
//			printf("老年\n");
//		else
//			printf("老不死\n");
//	}
//	return 0;
//}
//输出1到100奇数
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
//switch语句
//int main()
//{
//	int day = 0;
//	scanf("%d", &day);
//	switch (day)
//	{
//	case 1:
//		printf("星期一\n");
//		break;
//	case 2:
//		printf("星期二\n");
//		break;
//	case 3:
//		printf("星期三\n");
//		break;
//	default:
//		printf("输入错误\n");
//		break;
//	}
//	return 0;
//}
//while循环
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
//	printf("请输入密码:>");
//	scanf("%s", &password);
//	while ((ch=getchar())!='\n')//getchar()一直读走，直到\n
//	{
//		;
//	}
//	printf("请确认(Y/N):>");
//	re = getchar();
//	if ('Y' == re){
//		printf("确认成功\n");
//	}
//	else
//	{
//		printf("放弃确认\n");
//	}
//	return 0;
//}
//只输出非数字字符
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
//for循环
//打印1-10
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
//计算n的阶乘
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
//计算1!+2!+....+10!
//int main()
//{
//	int i;
//	int ret = 1;
//	int sum = 0;
//	int n = 0;
//	for (n = 1; n <= 10; n++){
//		ret = 1;//消去ret累积效果
//		for (i = 1; i <= n; i++)
//		{
//			ret *= i;
//		}
//		sum += ret;
//	}
//	printf("sum=%d\n", sum);
//	return 0;
//}
//效率更高写法  计算1!+2!+....+10!
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
//在有序数组中查找具体某个数字
//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int k = 7;
//	//在arr（有序）中找到7
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0; i < sz; i++)
//	{
//		if (k == arr[i])
//		{
//			printf("找到: 下标为%d\n", i);
//			break;
//		}
//	}
//	if (i == sz)
//		printf("找不到\n");
//	return 0;
//}
//折半(二分)查找实现
//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int k = 7;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//
//	int left = 0;//左下标
//	int right = sz - 1;//右下标
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
//			printf("找到,下标为：%d\n", mid);
//			break;
//		}
//	}
//	if (left>right)
//	{
//		printf("找不到\n");
//	}
//	return 0;
//}
//演示多个字符从两端移动，向中间汇聚
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
//		Sleep(1000);//休息一秒S大写单位毫秒<windows.h>
//		system("cls");//执行系统命令的一个函数-cls-清空屏幕<stdlib.h>
//		
//	}
//	printf("%s\n", arr2);
//	return 0;
//}
//模拟用户登录情景，并且只能登陆三次（允许输入三次密码，密码正确提示登陆成功，三次均错误则退出程序）
//int main()
//{
//	int i = 0;
//	char password[20] = { 0 };
//	for (i = 0; i < 3; i++)
//	{
//		printf("请输入密码:>");
//		scanf("%s", &password);//&
//		if (strcmp(password, "123456") == 0)//
//		{
//			printf("密码正确,登录成功!!!\n");
//			break;
//		}
//		else
//			printf("密码错误哈哈哈\n");
//	}
//	if (3 == i)
//		printf("三次密码均错误,退出程序\n");
//	return 0;
//}
//试题
//int main()
//{
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		if (i = 5)//此处为赋值
//			printf("%d ", i);
//	}
//	return 0;
//}
//将三个数从大到小输出
//int main()
//{
//	printf("请输入三个数:>\n");
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
//if和else if 之间是有联系的,当不满足if中的条件的时候,才会去执行else if
//
//如果if中的条件已经满足了, 就不会去判断else if中的条件了
//
//两个if语句在一起时，才会依次对每一个if句都进行判断, 互相之间不会影响。
//
//
//求1-100中3的倍数的数字
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
//给定两个数，求两个数的最大公约数(辗转相除法)
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
//	printf("最大公约数为:%d\n", b);
//	return 0;
//}
//打印1000-2000年之间的闰年
//int main()
//{
//	//1、能被4整除并且不能被100整除是闰年-普通闰年
//	//2、能被400整除是闰年-世纪闰年
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
//打印100-200之间的素数
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		//试除法
//		int j = 0;
//		for (j = 2; j < i; j++)
//		{
//			if (i%j == 0)
//			{
//				break;
//			}
//			//static 关键字
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
//试除法优化
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 101; i <= 200; i+=2)
//	{
//		//试除法
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
//1-100所有整数中出现多少个数字9
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		//个位为9，模10为9
//		//十位为9，除以10商为9
//		if (i % 10 == 9)
//		{
//			count++;
//		}
//		if (i/10 == 9)
//		{
//			count++;
//		}
//		//注意此处两个if为并列，若为else if 会略过99，只满足if条件
//	}
//	printf("count=%d\n", count);
//	return 0;
//}
//分数求和
//求1/1-1/2+1/3-1/4……+1/99-1/100的值
//int main()
//{
//	int i = 0;
//	double sum = 0;
//	int flag = 1;
//	for (i = 1; i <= 100; i++)
//	{
//		sum += flag*1.0 / i;
//		//sum += 1 / i;
//		//1+0+0+0……+0
//		//要得到小数，必须保证除号两端有一个数是浮点数
//		//或将（全部分母为奇数的数）-（全部分母为偶数的数）
//		flag = -flag;
//	}
//	printf("%lf\n", sum);
//	return 0;
//}
//求十个整数中的最大值
//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int i = 0;
//	//int max = 0;//max不能赋值为零，若数组中都是负数，此处判断错误
//	int max = arr[0];//可将max赋值为数组任意一元素
//	int sz = sizeof(arr)/sizeof(arr[0]);
//	for (/*i = 0*/i=1 ; i < sz; i++)
//	{
//		if (arr[i]>max)
//		{
//			max = arr[i];
//			//将数组元素与max比较，若元素比max大，则交换数据
//		}
//	}
//	printf("max = %d\n", max);
//	return 0;
//}
//9*9乘法口诀表
//int main()
//{
//	int m = 0;
//	int n = 0;
//	int i = 0;
//	for (m = 1; m < 10; m++)//确定9行
//	{
//		//打印一行
//		for (n = 1; n <=m; n++)
//		{
//			i = n*m;
//			printf("%d * %d = %-2d ", m, n, i);
//			//%2d打印两位，不够空格补齐，右对齐
//			//%-2d左对齐
//		}
//		printf("\n");
//	}
//	return 0;
//}
//猜数字游戏实现 1、电脑会生成一个随机数 2、猜数字
//void menu()
//{
//	printf("*********************\n");
//	printf("***1.play---0.exit***\n");
//	printf("*********************\n");
//}
////下载msdn--微软工具--索引找
//void game()
//{
//	//1，生成一个随机数  rand()函数，生成随机数字2：18
//	int ret = 0;
//	int guess = 0;
//	ret = rand()%100+1;//生成1-100之间随机数
//	//时间戳
//	//printf("%d\n", ret);
//	//2，猜数字
//	while (1)
//	{
//
//		printf("请猜数字:>");
//		scanf("%d", &guess);
//
//		if (guess > ret)
//		{
//			printf("猜大了\n");
//		}
//		else if (guess < ret)
//		{
//			printf("猜小了\n");
//		}
//		else
//		{
//			printf("恭喜！！！猜对了\n");
//			break;
//		}
//	}
//}
//int main()
//{
//	srand((unsigned int)time(NULL));
//	//游戏至少进入一次
//	int input = 0;
//	do
//	{
//		menu();
//		printf("请选择>;");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			game();//猜数字游戏函数
//			break;
//		case 0:
//			printf("退出游戏\n");
//			break;
//		default:
//			printf("选择错误\n");
//			break;
//		}
//	} while (input);
//
//	return 0;
//}
//
//关机程序
//goto语句
//int main()
//{
//	char input[20] = { 0 };
//again:
//	system("shutdown -s -t 60");
//	printf("请注意你的电脑将在一分钟之后关机，输入：我是猪，取消关机，请输入>;\n");
//	scanf("%s", &input);
//	if (strcmp(input, "我是猪") == 0)
//	{
//		system("shutdown -a");
//	}
//	else
//		goto again;
//	return 0;
//}
//或
//int main()
//{
//	char input[20] = { 0 };
//	while (1){
//		system("shutdown -s -t 60");
//		printf("请注意你的电脑将在一分钟之后关机，输入：我是猪，取消关机，请输入>;\n");
//		scanf("%s", &input);
//		if (strcmp(input, "我是猪") == 0)
//		{
//			system("shutdown -a");
//			break;
//		}
//	}
//	return 0;
//}
//break在嵌套循环  return 0 区别
//自定义函数
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
//函数交换两个整型变量内容
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
//用函数判断是否为素数
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
//	//if (j > sqrt(n)) 此处可不加if条件，因return 0 会直接结束函数，效果比break强，跳到此处只有一种可能
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
//用函数打印1000-2000之间闰年
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
//函数实现整形有序数组二分查找（重要）
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
//	//找到返回数的下标，找不到则返回-1
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int ret = binary_search(arr, k,sz);
//	if (-1 == ret)
//	{
//		printf("找不到指定数字\n");
//	}
//	else
//	{
//		printf("找到了，下标为%d\n",ret);
//	}
//	return 0;
//}
//写函数，每调用一次，num+1
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
//函数嵌套调用
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
//链式访问
//int main()
//{
//	//1
//	int len = 0;
//	len = strlen("abc");
//	printf("%d\n", len);
//	//2
//	printf("%d\n", strlen("abc"));
//	printf("%d", printf("%d", printf("%d", 423)));//printf函数返回值是打印的字符个数-msdn，链式访问pdf，
//42331
//}
//
//函数声明
//int Add(int, int);
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int sum = 0;
//	//函数调用
//	sum = Add(a, b);
//	printf("%d\n", sum);
//	return 0;
//}
////函数定义
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
//	//函数调用
//	sum = Add(a, b);
//	printf("%d\n", sum);
//	return 0;
//}
//史上最简单递归
//int main()
//{
//	printf("hehe\n");
//	main();
//	return 0;
//}
//接受一个整型值（无符号），按照顺序打印每一位 
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
//编写函数不允许创建临时变量，求字符串的长度
//int my_strlen(char* str)//str为指针变量，存b地址,
//{
//	int count = 0;
//	while (*str != '\0')
//	{
//		str++;//地址+1,str指向i地址
//		count++;
//	}
//	return count;
//}
//递归方法解决
//my_strlen("bit");
//1+my_strlen("it");
//1+1+my_strlen("t");
//1+1+1+my_strlen("");
//1+1+1+0
//int my_strlen(char* str)
//{
//	if (*str != '\0')
//		return 1 + my_strlen(str + 1);//str+1变成i的地址
//	else
//		return 0;
//}
//int main()
//{
//	char arr[] = "bit";//数组arr传参，传过去的不是整个数组，而是第一个元素的地址
//	int len = my_strlen(arr);
//	printf("len = %d\n", len);
//	return 0;
//}
//递归求n的阶乘（不考虑溢出）
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
//	ret = Fac1(n);//循环方式
//	ret = Fac2(n);//递归方式
//	printf("循环%d\n", ret);
//	printf("递归%d\n", ret);
//	return 0;
//}
//求第n个斐波那契数（不考虑溢出）(重要)
//int Fei1(int n)//效率过低
//{
//	if (n <= 2)
//		return 1;
//	else
//		return (Fei(n - 1) + Fei(n - 2));
//}
//循环方法
//int Fei2(int n)
//{
//	int a = 1;
//	int b = 1;
//	int c = 1;//c不能为零，当n<=2时
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
//数组
//创建数组
//int main()
//{
//	int arr[10] = { 1, 2, 3, 4 };
//	char arr1[] = "abcdef";
//	printf("%d\n", sizeof(arr1));
//	printf("%d\n", strlen(arr1));
//	return 0;
//}
//一维数组在内存存储
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
//二维数组
//int main()
//{
//	int arr[3][4] = { 1, 2, 3, 4, 5 };
//	int arr2[3][4] = { { 1, 2, 3 }, 4, 5 };
//	//访问
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
//二维数组在内存中存储
//int main()
//{
//	int arr[3][4] = { 1, 2, 3, 4, 5 };
//	int arr2[3][4] = { { 1, 2, 3 }, 4, 5 };
//	//访问
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		int m = 0;
//		for (m = 0; m < 4; m++)
//			printf("&arr2[%d][%d] = %p\n",i,m, &arr2[i][m]);
//	}
//	return 0;
//}
//数组作为函数参数
//冒泡排序,将整型数组进行排序
//void bubble_sort(int arr[], int sz)
//{
//	//确定排序趟数
//	int n = 0;
//	int j = 0;
//	for (n = 0; n < sz; n++)
//	{
//		//每一趟排序
//		int flag = 1;//假设这一趟排序的数据已经有序
//		for (j = 0; j < sz - n - 1; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int tmp = 0;
//				tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//				flag = 0;//本趟排序的数据其实并不完全有序
//			}
//		}
//		if (flag == 1)
//			break;
//	}
//}
//int main()
//{
//	int arr[] = {  9, 8, 7, 6, 5, 4, 3, 2, 1, 0 };
//	//对arr排成升序
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	bubble_sort(arr, sz);
//	//对arr传参，实际上传递的是数组首元素地址  &arr[0]
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}
//三子棋
//#include "game1(三).h"
//void game1()
//{
//	char ret = 0;
//	//数组存放棋盘信息
//	char board[ROW][COL] = { 0 };//0 不可打印元素
//	Initboard(board, ROW, COL);//初始化棋盘,元素为空格
//	Displayboard(board, ROW, COL);//函数打印棋盘
//	while (1) {//下棋
//		//玩家下棋
//		PlayerMove(board, ROW, COL);
//		Displayboard(board, ROW, COL);
//		//判断玩家输赢
//		ret = IsWin(board,ROW,COL);
//		if (ret != 'C')
//		{
//			break;
//		}
//		//电脑下棋
//		ComputerMove(board, ROW, COL);
//		Displayboard(board, ROW, COL);
//		//判断电脑输赢
//		ret = IsWin(board,ROW,COL);
//	}
//	if (ret == '*')
//		printf("玩家赢\n");
//	else if (ret == '#')
//		printf("电脑赢\n");
//	else
//		printf("平局\n");
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
//		printf("请选择>:");
//		scanf("%d", &input);
//		switch (input) {
//		case 0:
//			printf("退出游戏\n");
//			break;
//		case 1:
//			game1();
//			break;
//		default:
//			printf("选择错误，重新选择\n");
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
//扫雷
//#include "game(扫雷).h"
//void menu() {
//	printf("************************\n");
//	printf("****1-play    0-exit****\n");
//	printf("************************\n");
//}
//void game() {
//	//雷的信息存储
//	//布置好的雷的信息
//	char mine[ROWS][COLS] = { 0 };
//	//排查出的雷的信息
//	char show[ROWS][COLS] = { 0 };
//	//初始化
//	Initboards(mine, ROWS, COLS, '0');
//	Initboards(show, ROWS, COLS, '*');
//	//打印棋盘
//	//DispalyBoard(mine, ROW, COL);
//	DispalyBoard(show, ROW, COL);
//	//布置雷
//	SetMine(mine, ROW, COL);
//	DispalyBoard(mine, ROW, COL);
//	//扫雷
//	FindMine(mine,show,ROW,COL);
//}
//void test() {
//	int input = 0;
//	srand((unsigned int)time(NULL));
//	do {
//		menu();
//		printf("请选择>:");
//		scanf("%d", &input);
//		switch (input) {
//		case 1:
//			game();
//			break;
//		case 0:
//			printf("退出游戏\n");
//			break;
//		default:
//			printf("输入错误，重新选择\n");
//			break;
//		}
//	} while (input);
//}
//int main()
//{
//	test();
//	return 0;
//}
//操作符
//交换两个变量值，不创建第三个变量
//int main()
//{
//	//int a = -16;
//	//int b = a >> 2;
//	//printf("%d", b);
//	int a = 3;
//	int b = 5;
//	//加减法-可能会溢出a+b数值非常大时
//	//a = a + b;
//	//b = a - b;
//	//a = a - b;
//	a = a ^ b;//
//	b = a ^ b;//
//	a = a ^ b;//
//	printf("%d %d\n", a, b);
//	return 0;
//}
//求一个整数存储在内存中的二进制中的1的个数
//int main()
//{
//	int n = 0;
//	int count = 0;
//	scanf("%d", &n);
//	//方法一
//	//while (n) {
//	//	if (n % 2 == 1) {
//	//		count++;
//	//	}
//	//	n = n / 2;
//	//}
//	//缺陷：负数无法统计
//	//方法二
//	//for (int i = 0; i < 32; i++) {
//	//	//n = n >> i;
//	//	if (1 == ((n>>i) & 1)) {//从最低位逐个和1按位与,注意括号
//	//		count++;
//	//	}
//	//}
//	//方法三
//
//	printf("%d\n", count);
//	return 0;
//}
//赋值符
//int main()
//{
//	short s = 0;//2字节
//	int a = 10;
//	printf("%d\n", sizeof(s = a + 5));//2
//	printf("%d\n", s);//0
//	return 0;
//}
//单目操作符
//int main()
//{
//	//int a = 0;
//	//printf("%d\n", ~a);
//	int a = 11;//1011,把倒数第三位改为1
//	a = a | (1 << 2);//将0001向左移两位
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
//逻辑操作符
//int main()
//{
//	//int a = 3;
//	//int b = 5;
//	//int c = a && b;
//	//printf("%d", c);
//	int i = 0, a = 0, b = 2, c = 3, d = 4;
//	i = a++ && ++b && d++;//1,2,4,0,a++使用为零，&&右边无需执行，即可判断i
//	//i = a++ || ++b || d++;//2,2,4,1
//	printf("a=%d\n b=%d\n d=%d\n i=%d\n", a, b, d, i);
//	return 0;
//}
//逗号表达式
//a = get_val();
//count_val(a);
//while (a > 0) {
//	//业务处理
//	a = get_val();
//	count_val(a);
//}
////逗号表达式改写
//while (a = get_val(), count_val(a), a > 0) {
//	//业务处理
//}
//访问一个结构的成员
//struct stu
//	//创建了一个结构体类型-struct stu,类型，类似int
//{
//	char name[20];
//	int age;
//	char id[20];
//};
//int main()
//{
//	//使用struct stu这个类型创建了一个学生对象是，并初始化
//	struct stu s1 = { "张",29,"221312" };
//
//	printf("%s\n", s1.name);
//	struct stu* ps = &s1;
//	printf("%d\n", (*ps).age);
//
//	printf("%s\n", ps->id);
//	return 0;
//}
//隐式类型转换
//整型提升
//int main()
//{
//	char a = 3;
//	char b = 127;
//	char c = a + b;
//	printf("%d\n", c);
//	return 0;
//}
//案例一
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
//案例二
//int main()
//{
//	char c = 1;
//	printf("%u\n", sizeof(c));
//	printf("%u\n", sizeof(+c));
//	printf("%u\n", sizeof(!c));
//	return 0;
//}
//操作符的属性
//优先级见  "C:\Users\欧阳秀南\Desktop\bit\2021版C语言资料-比特就业课\上课课件-2021版C语言 -【比特就业课提供】\初级\第5节-操作符详解.pdf"
//N-R无结合性，或从左到右结合
//int main()
//{
//	//int a = 10;
//	//int b = 20;
//	//int c = b + a * 3;
////非法表达式,在不同编译器结果不同，计算路径不唯一
//	int i = 0;
//	i = i-- - --i * (i = -3) * i++ + ++i;
//	printf("i=%d\n", i);
//	return 0;
//}
// 非法表达式,在不同编译器结果不同，计算路径不唯一
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
//指针
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
//	int* p = arr;//数组名，首元素地址
//	for (int i = 0; i < 10; i++) {
//		*(p + i) = 1;
//		printf("%d ",arr[i]);
//	}
//	return 0;
//}
//野指针3
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
//指针运算
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
//指针-指针
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	printf("%d", &arr[9] - &arr[0]);
//	return 0;
//}
//模拟strlen求字符数组长度第三种方法
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
//指针和数组
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
//二级指针
//int main()
//{
//	int a = 10;
//	int* pa = &a;
//	int** ppa = &pa;
//	return 0;
//}
//指针数组
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
//作业
//冒泡排序
//数组
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
//	Init(arr, sz);//初始化
//	Print(arr, sz);//打印
//	Reverse(arr, sz);//数组逆置
//	Print(arr, sz);//打印
//	return 0;
//}
//将数组a内容与数组b内容交换（数组一样大）
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
//代码题
//int main()
//{
//	int arr[] = { 1,2,3,4,5 };
//	short* p = (short*)arr;//强制转换为short，访问两个字节
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
//	printf("%x\n", a);//16进制打印
//	return 0;
//}
//int i;//局部变量不初始化默认随机值，全局变量不初始化默认0
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
//	b = ++c, c++, ++a, a++;//c=8,b=7,a=8, =优先级高于，赋值高于逗号
//	b += a++ + c;//+优先级高于+= a=9,b=8+7+8=23,c=8
//	printf("a=%d b=%d c=%d\n", a, b, c);
//	return 0;
//}
//写一个函数返回二进制(补码)中1的个数
// 负数不可用
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
//优化版
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
//优化版
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
//经典算法
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
//两个int 整数m和n的二进制表达中，有多少个位（bit）不同
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
//牛客网刷题
//获取二进制序列中的所有偶数位和奇数位，分别打印
//void print(int n)
//{
//	int i = 0;
//	printf("奇数位\n");
//	for (i = 30; i >= 0; i -= 2)
//	{
//		printf("%d ", (n >> i) & 1);
//	}
//	printf("\n");
//	printf("偶数位\n");
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
// 函数与递归
//调用fun（2）函数返回值
//int Fun(int n)
//{
//	if (n == 5)
//		return 2;
//	else
//		return 2 * Fun(n + 1);
//}
//自定义乘法口诀表
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
//函数实现字符串字符逆序
//int my_strlen(char* str)//三种方法，计数器，递归，指针-指针
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
//函数实现字符串字符逆序,递归实现
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
//	char tmp = arr[0];//a先与f交换，将a变为f，将f变为\0，再翻转bcde，再把\0换成a
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
//用递归函数，输入一个非负整数，返回组成的数字之和
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
//递归实现n的k次方
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
//结构体
//声明
//描述一个学生，数据
//struct Stu
//{
//	//成员变量
//	char name[20];
//	short age;
//	char tele[12];
//	char sex[5];
//}s1,s2,s3;
//typedef struct Stu
//{
//	//成员变量
//	char name[20];
//	short age;
//	char tele[12];
//	char sex[5];
//}Stu;
//int main()
//{
//	struct Stu s1={"zhangs",gy,"uhh9","nv"};
//	Stu s2 = { "张三",55,"5456","男" };
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
//	//成员变量
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
//	stu s = { "李四",50,"54561","男" };
//	//打印结构体数据
//	print1(s);
//	print2(&s);//效果更好
//	return 0;
//}
//越界导致死循环
//int main()
//{	//vc6.0 <=10 死循环
//	//gcc <=11 死循环
//	//vs2013 <=12 死循环
//	//内存布局的差异
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	for (int i = 0; i <= 12; i++)
//	{
//		printf("hehe\n");
//		arr[i] = 0;
//	}
//	return 0;
//}
//模拟实现库函数strcpy
// 6分
//void my_strcpy(char* dest,char* src)
//{
//	while (*(src-1) != '\0')
//	{
//		//*dest = *src;
//		//src++;
//		//dest++;
//		//优化
//		*dest++ = *src++;
//	}
//}
// 
//再优化 7分
//void my_strcpy(char* dest, char* src)
//{
//	while (*dest++ = *src++)
//	{
//		;
//	}
//}
//若传参为NULL，再优化 8分
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
//	assert(src != NULL);//#include <assert.h>,断言
//	while (*dest++ = *src++)
//	{
//		;
//	}
//}
//9分
//void my_strcpy(char* dest, const char* src)//const保护源头数据
//{
//	assert(dest != NULL);
//	assert(src != NULL);//#include <assert.h>,断言
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
//char* my_strcpy(char* dest, const char* src)//const保护源头数据,char*返回目的地初始地址
//{
//	char* ret = dest;
//	assert(dest != NULL);
//	assert(src != NULL);//#include <assert.h>,断言
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
//	printf("%s\n", my_strcpy(arr1, arr2));//链式访问
//	return 0;
//}
//
//int main()
//{
//	const int num = 10;//const修饰，num不允许修改
//	const int* p = &num;
//	*p = 20;
//
//	printf("%d\n", num);
//	return 0;
//}
//strlen函数实现
//int my_strlen(const char* str)//不允许str所指向内容改变
//{
//	int count = 0;
//	assert(str != NULL);//保证指针有效性
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
//数据的存储
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
//判断当前计算机的字节序
//int check_sys()
//{
//	int i = 1;
//	char* p = (char*)&i;
//	return *p;//返回1，小端 ；0 大端
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
//		printf("小端\n");
//	}
//	else
//		printf("大端\n");
//	return 0;
//}
//练习（程序运行结果）
//int main()
//{
//	char a = -1;
//	signed char b = -1;
//	unsigned char c = -1;
//	printf("a=%d,b=%d,c=%d\n", a, b, c);//-1,-1,255,%d整型提升
//	return 0;
//}
//int main()
//{
//	char a = -128;
//	//100000000 00000000 00000000 10000000 原
//	//111111111 11111111 11111111 01111111 反
//	//111111111 11111111 11111111 10000000 补
//	//10000000
//	//111111111 11111111 11111111 10000000 整型提升
//	printf("%u\n", a);//%u无符号十进制数  4294967168
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
//	printf("%d\n", i + j);//按照补码运算，最后格式化为有符号整数 -10
//	//10000000 00000000 00000000 00010100
//	//11111111 11111111 11111111 11101011
//	//11111111 11111111 11111111 11101100  -20补码
//	//00000000 00000000 00000000 00001010  10补码，无符号数
//	//11111111 11111111 11111111 11110110  补码
//	//10000000 00000000 00000000 00001010  源码  -10
//	return 0;
//}
//int main()
//{
//	unsigned int i;
//	for (i = 9; i >= 0; i--)
//	{
//		printf("%u\n", i);//将-1变为无符号数，很大数。。。。
//		Sleep(100);//睡眠100毫秒
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
//	//strlen到\0截至
//	//-1，-2，-3。。。。。-128，127，126.。。。。3，2，1，0
//	return 0;
//}
//unsigned char i = 0;
//int main()
//{
//	for (i = 0; i <= 255; i++)
//	{
//		printf("hello world\n");//255+1=0,死循环
//	}
//	return 0;
//}
//浮点数在内存中的存储
//int main()
//{
//	int n = 9;
//	//0 00000000 00000000000000000001001 -补码
//	//
//	float* pFloat = (float*)&n;
//	printf("n的值为 %d\n", n);
//	printf("*pFloat的值为 %f\n", *pFloat);//%f打印6个bit
//	//(-1)^0*0.00000000000000000001001*2^126
//	//0.000000
//
//	*pFloat = 9.0;
//	//1001.0
//	// 1.001*2^3
//	//(-1)^0*1.001*2^3
//	//S=0,M=1.001,E=3+127=130
//	//0 10000010 00100000000000000000000
//	printf("n的值为 %d\n", n);//整数打印
//	//01000001000100000000000000000000 - 补码
//	//1091567616 - 十进制
//	printf("*pFloat的值为 %f\n", *pFloat);
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
//字符指针
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
//	char* p = "abcdef";//常量字符串
//	//*p = 'W';//段错误
//	printf("%c\n", *p);
//	printf("%s\n", p);
//	return 0;
//}
//面试题
//int main()
//{
//	char arr1[] = "abcdef";
//	char arr2[] = "abcdef";
//	char* p1 = "abcdef";
//	char* p2 = "abcdef";
//	//if (arr1 == arr2)//arr1和arr2地址不同
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
//剑指offer电子版
//指针数组
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
//数组指针
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
//参数是数组的形式
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
////参数是指针的形式
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
//一级指针传参
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
//	//一级指针p，传给函数
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
//二级指针传参
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
//	test(arr);//指针数组也可以
//	return 0;
//}
//函数指针
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
//函数指针数组
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
//	//写一个函数指针pf，指向函数my_strcpy
//	char* (*pf)(char*, const char*);
//	//写一个函数指针数组pfArr,能够存放4个my_strcpy的地址
//	char* (*pfArr[4])(char*, const char*);
//	return 0;
//}
//计算器
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
//	//函数指针数组pfArr
//	int(*pfArr[])(int, int) = { 0,add,sub,mul,Div,XOR};
//	do {
//		menu();
//		printf("请选择>;");
//		scanf("%d", &input);
//		if (input >= 1 && input <= 5) {
//			printf("请输入操作数>:");
//			scanf("%d%d", &x, &y);
//			int ret = pfArr[input](x, y);
//			printf("%d\n", ret);
//		}
//		else if (input == 0)
//		{
//			printf("退出\n");
//		}
//		else
//		{
//			printf("输入错误\n");
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
//    printf("请选择：");
//}
//void Calc(int(*pf)(int,int))
//{
//    int x = 0;
//    int y = 0;
//    printf("输入操作数>：");
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
//            printf("退出程序\n");
//            break;
//        default:
//            printf("选择错误\n");
//            break;
//        }
//    } while (input);
//
//    return 0;
//}
//回调函数
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
//冒泡排序
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
//	//比较两个整形
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
////	struct stu s[3] = { {"张三",10},{"gg",50},{"aiu",22} };
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
//			//比较函数
//			if (cmp((char*)base+j*width,(char*)base+(j+1)*width) > 0)
//			{
//				//交换函数,字符指针，需传width
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
//	struct stu s[3] = { {"张三",10},{"gg",50},{"aiu",22} };
//	int sz = sizeof(s) / sizeof(s[0]);
//	//bubble_sort(s, sz, sizeof(s[0]), cmp_stu_by_age);
//	bubble_sort(s, sz, sizeof(s[0]), cmp_stu_by_name);//未调试
//
//}
//int main()
//{
//	//bubble_sort(arr, sz);
//	//test1();
//	//test2();
//	//test3();
//	//通用型
//	//test4();
//	test5();
//	return 0;
//}
//指针和数组笔试题解析

//int main()//重要
//{
	//sizeof(数组名)，&数组名
	
	//一维数组
	//int a[] = { 1,2,3,4 };
	//printf("%d\n", sizeof(a));      //16
	//printf("%d\n", sizeof(a+0));    //4或8，a+0.首元素地址，计算的是地址大小，4或8
	//printf("%d\n", sizeof(*a));     //4，首元素大小
	//printf("%d\n", sizeof(a+1));    //4或8，第二个元素地址
	//printf("%d\n", sizeof(a[1]));   //4，第二个元素大小
	//printf("%d\n", sizeof(&a));     //4或8，取出数组地址
	//printf("%d\n", sizeof(*&a));    //16，去除数组地址再解引用
	//printf("%d\n", sizeof(&a+1));   //4或8，&a+1是一个地址，地址跳过整个数组
	//printf("%d\n", sizeof(&a[0]));  //4或8，第一个元素地址
	//printf("%d\n", sizeof(&a[0]+1));//4或8，第二个元素地址


	//字符数组
	//char arr[] = { 'a','b','c','d','e','f' };
	//printf("%d\n", sizeof(arr));        //6
	//printf("%d\n", sizeof(arr + 0));    //4或8，arr+0首元素地址
	//printf("%d\n", sizeof(*arr));       //1 首元素-首元素地址解引用
	//printf("%d\n", sizeof(arr[1]));     //1
	//printf("%d\n", sizeof(&arr));       //4或8 数组地址
	//printf("%d\n", sizeof(&arr + 1));   //4或8
	//printf("%d\n", sizeof(&arr[0] + 1));//4或8

	//printf("%d\n", strlen(arr));        //随机值，arr无\0，strlen遇到\0结束
	//printf("%d\n", strlen(arr + 0));    //随机值 arr+0首元素地址
	//printf("%d\n", strlen(*arr));       //err  strlen()参数为地址，*arr为a，AScii为97，非法访问地址为97处数据，代码错误
	//printf("%d\n", strlen(arr[1]));     //err 同上
	//printf("%d\n", strlen(&arr));       //随机值 数组地址
	//printf("%d\n", strlen(&arr + 1));   //随机值 比&arr少6
	//printf("%d\n", strlen(&arr[0] + 1));//随机值，从b处访问，比&arr少1

	//char arr[] = "abcdef";
	//printf("%d\n", sizeof(arr));        //7，sizeof计算所占空间大小
	//printf("%d\n", sizeof(arr + 0));    //4或8，arr+0首元素地址
	//printf("%d\n", sizeof(*arr));       //1 首元素大小
	//printf("%d\n", sizeof(arr[1]));     //1 第二个元素大小
	//printf("%d\n", sizeof(&arr));       //4或8 数组地址
	//printf("%d\n", sizeof(&arr + 1));   //4或8 跳过整个数组后的地址
	//printf("%d\n", sizeof(&arr[0] + 1));//4或8 b的地址

	//printf("%d\n", strlen(arr));        //6
	//printf("%d\n", strlen(arr + 0));    //6
	//printf("%d\n", strlen(*arr));       //err
	//printf("%d\n", strlen(arr[1]));     //err 访问98处地址
	//printf("%d\n", strlen(&arr));       //6 从数组起始位置访问，但会警告，数组地址应为数组指针 char(*p)[7]=&arr,arr类型char(*)[7]，
	////                                      而strlen参数为const char*，两个类型不兼容，
	//printf("%d\n", strlen(&arr + 1));   //随机值
	//printf("%d\n", strlen(&arr[0] + 1));//5 从b的位置开始

	//char* p = "abcdef";//把常量字符串a地址放到p里
	//printf("%d\n", sizeof(p));        //4或8
	//printf("%d\n", sizeof(p + 1));    //4或8 计算字符b地址大小
	//printf("%d\n", sizeof(*p));       //1 *p是字符串的第一个字符
	//printf("%d\n", sizeof(p[0]));     //1  int arr[10]; arr[0]==*(arr+0)   p[0]==*(p+0)=='a'
	//printf("%d\n", sizeof(&p));       //4或8
	//printf("%d\n", sizeof(&p + 1));   //4或8 指向跳过p的地址
	//printf("%d\n", sizeof(&p[0] + 1));//4或8  计算b的地址大小

	//printf("%d\n", strlen(p));        //6
	//printf("%d\n", strlen(p + 1));    //5 p+1为b地址
	//printf("%d\n", strlen(*p));       //err 非法访问
	//printf("%d\n", strlen(p[0]));     //err
	//printf("%d\n", strlen(&p));       //随机值 从p的地址开始计算
	//printf("%d\n", strlen(&p + 1));   //随机值
	//printf("%d\n", strlen(&p[0] + 1));//5


	//二维数组（重要）
	//int a[3][4] = { 0 };
	//printf("%d\n", sizeof(a));           //48 数组总元素大小 3*4*4
	//printf("%d\n", sizeof(a[0][0]));     //4
	//printf("%d\n", sizeof(a[0]));        //16  第一行4*4  a[0]相当于第一行作为一维数组的数组名
	//printf("%d\n", sizeof(a[0] + 1));    //4 第一行第二个元素地址，a[0]是首元素地址 数组名并没有单独放在sizeof内部
	//printf("%d\n", sizeof(*(a[0] + 1))); //4 第一行第二个元素大小
	//printf("%d\n", sizeof(a + 1));       //4或8 a是二维数组数组名 是首元素地址 a+1第二行一维数组地址
	//printf("%d\n", sizeof(*(a + 1)));    //16 第二行元素大小
	//printf("%d\n", sizeof(&a[0] + 1));   //4或8 第二行地址
	//printf("%d\n", sizeof(*(&a[0] + 1)));//16
	//printf("%d\n", sizeof(*a));          //16 a是首元素地址，是第一行地址 *a是第一行
	//printf("%d\n", sizeof(a[3]));        //16 sizeof内部表达式不参与真实运算，不会访问第四行，依据类型来计算大小
	//return 0;
//}
//语言 算法 数据结构 操作系统 网络
//指针笔试题
//int main()
//{
//	int a[5] = { 1,2,3,4,5 };
//	int* ptr = (int*)(&a + 1);//数组指针类型强制类型转换
//	printf("%d,%d\n", *(a + 1), *(ptr - 1));
//	return 0;
//}
//struct Test//p结构体指针,指针+-整数
//{
//	int Num;
//	char* pcName;
//	short sDate;
//	char cha[2];
//	short sBa[4];
//}*p;
////假设p的值为0x100000，如下表达式的值分别是多少？
////已知结构体Test类型的变量大小是20个字节
//int main()
//{
//	p = (struct Test*)0x100000;
//	printf("%p\n", p + 0x1);//0x1为1，0x100000+14（20），以%p打印，0x00100014
//	printf("%p\n", (unsigned long)p + 0x1);//0x100000转换为整形 1048576 再+1 1048577 转为16进制 0x100001 以%p打印，0x00100001
//	printf("%p\n", (unsigned int*)p + 0x1);//0x100000转换为整形指针，int指针+1，0x100004 以%p打印，0x00100001
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
//	int a[3][2] = { (0,1),(2,3),(4,5) };//此处为逗号表达式，数组内容为{1，3}，{5，0}，{0，0}
//	int* p;
//	p = a[0];//a[0]是第一行数组名，代表首元素地址，就是1的地址
//	printf("%d", p[0]);//等价于*（p+0）
//	return 0;
//}
int main()
{
	int a[5][5]; 
	int(*p)[4];
	p =a;//p类型 int(*)[4]; a类型 int(*)[5];
	printf("%p,%d\n", &p[4][2] - &a[4][2], &p[4][2] - &a[4][2]);
	return 0;
}