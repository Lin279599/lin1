#define _CRT_SECURE_NO_WARNINGS




//#include<stdio.h>
//int main()
//{
	//int num1 = 0;
	//int num2 = 0;
	//scanf("%d %d", &num1, &num2);
	//int sum = num1 + num2;
	//printf("%d\n", sum);
///
#include<stdio.h>
//int main()
//{
//	char arr1[] = "abc";
//	char arr2[] = { 'a','b','c','0'};
//	printf("%d\n", strlen(arr1));
//	printf("%d\n", strlen(arr2));
//	return 0;


//int main()
//{
//	printf("加入清华");
//	int line = 0;
//	while (line < 200)
//	{
//		printf("继续敲代码");
//		line++;
//	}
//		
//	
//	if (line >= 200)
//	{
//		printf("OK");
//	}
//	return 0;
////}
//int main()
//{
//	printf("加入清华\n");
//	int line = 0;
//	while (line < 200)
//	{
//		printf("继续敲代码:%d\n",line);
//		line++;
//	}
//
//
//	if (line >= 200)
//	{
//		printf("\nOK");
//	}
//	return 0;
//}
//int Add(int x, int y)
//{
//	
//	return(x + y);
//}
//int main()
//{
//	int n1 = 0;
//	int n2 = 0;
//	scanf("%d %d", &n1, &n2);
//	int sum = Add(n1, n2);
//	printf("%d\n", sum);
//	return 0;
//}
//int Add(int x, int y)
//{
//
//	return(x + y);
//}
//int main()
//{
//	
//	//scanf("%d %d", &n1, &n2);
//	int n1 = 100;
//	int n2 = 200;
//	int sum = Add(n1, n2);
//	printf("%d\n", sum);
//	return 0;
//}
//int main()
//{
//	int arr[5] = {5,4,3,2,1};
//	int i = 0;
//	while (i < 5)
//	{
//		printf("%d", arr[i]);
//		i = i + 1;
// 
//	}
//return 0;



//int main()
//{
//	int arr[5] = { '5','4','3','2','1'};
//	int i = 0;
//	while (i < 5)
//	{
//		printf("%c", arr[i]);
//		i = i + 1;
//
//	}
//	return 0;
//
//
//}
//int main()
//{
//	int arr[10] = { 0 };
//	printf("%d\n", sizeof(arr));
//	return 0;
//}
//int main()
//{
//	int a = 10;
//	int b = a++;
//	printf("%d\n",b);
//	printf("%d\n", a);
//	return 0;
////}
//int main()
//{
//	float a = 7 / 2.0;
//	printf("%f\n",a);
//	return 0;
//}

//int Add(int x, int y)
//{
//	return x + y;
//}
//int main()
//{
//	int sum = Add(2, 3);
//	printf("%d\n", sum);
//	return 0;

//int main()
//{
//	int a = 0;
//	int b = 20;
//	if (a || b)
//	{
//		printf("hh\n");
//	}
//	
//	return 0;
//}
//int main()
//{
//	int a = 1;
//	int b = 3;
//	int c = 5;
//	int d = (c = a - 1, b = 5 + a, c + b);
//	printf("%d\n", d);
//	return 0;
//}
//int main()
//{
//	int a = 3;
//	int b = 5;
//	int c = (a < b ? a : b);
//	printf("%d\n", c);
//	return 0;
//}
//void test()
//{
//	static int a = 1;
//	a++;
//	printf("%d", a);
//
//}
//int main()
//{
//	int i = 0;
//	while (i<10)
//	{
//		test();
//		i++;
//	}
//    return 0;
//}
//extern int b;
//int main()
//{
//	printf("%d\n", b);
//	return 0;
//}
//extern int Add(int x, int y);
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int z = Add(a, b);
//	printf("%d\n", z);
//	return 0;
//int main()
//{
//	int a = 10;
//	&a;
//	return 0;
//}
#include<stdio.h>
//struct Stu
//{
//	char name[20];
//	int age;
//	char sex[10];
//	char tele[12];
//};
//int main()
//{
//	struct Stu s = { "Li",20,"man","155" };
//	printf("%s %d %s %s\n", s.name, s.age, s.sex, s.tele);
//	return 0;
//}
//
//	
//struct Stu
//{
//	char name[20];
//	int age;
//	char sex[10];
//	char tele[12];
//};
//void print(struct Stu* ps)
//{
//	printf("%s,%d,%s,%s\n", (*ps).name, (*ps).age, (*ps).sex, (*ps).tele);
//}
//int main()
//{
//	struct Stu s = { "Li",20,"man","155" };
//	//printf("%s %d %s %s\n", s.name, s.age, s.sex, s.tele);
//	print(&s);
//	return 0;
//}
//struct Stu
//{
//	char name[20];
//	int age;
//	char sex[10];
//	char tele[12];
//};
//void print(struct Stu* ps)
//{
//	printf("%s,%d,%s,%s\n", ps->name, ps->age, ps->sex, ps->tele);
//}
//int main()
//{
//	struct Stu s = { "Li",20,"man","155" };
//	//printf("%s %d %s %s\n", s.name, s.age, s.sex, s.tele);
//	print(&s);
//	return 0;
//}
//int main()
//{
//	printf("%d\n", sizeof(char*));
//	printf("%d\n", sizeof(int*));
//	return 0;
//}
//int main()
//{
//	int a = 10;
//	if (a < 28)
//		printf("%d\n", a);
//	else if (a >= 3 && a < 5)
//		printf("he");
//	return 0;
//}
//struct Stu
//{
//	char name[20];
//	int age;
//	char sex[10];
//	char tel[50];
//};
//void print(struct Stu*ps)
//{
//	printf("%s %d %s %s\n", ps->name, ps->age, ps->sex, ps->tel);
//}
//int main()
//{
//	struct Stu s = { "Ye",18,"MAN","188" };
//	//printf("%s %d %s %s\n", s.name, s.age, s.sex, s.tel);
//	print(&s);
//	return 0;
//}
//int main()
//{
//	int age = 10;
//	if (age < 20)
//	{
//		if (age > 8)
//			return 1;
//		    
//		else
//			printf("haha");
//	}
//	printf("%d\n", age);
//		
//	return 0;
//}
//int test()
//{
//	int a = 3;
//	if (a == 3)
//	{
//		return 1;
//	}
//	return 0;
//}
//int main()
//{
//	int r = test();
//	printf("%d\n", r);
//	return 0;
//}
/*int main()
{
	int i = 0;
	while (i < 100)
	{
		i++;
		if (i % 2 == 1)
			printf("%d\n", i);
	}
	  */  
//}
//int main()
//{
//	int i =1 ;
//	while (i <= 10)
//	{
//		i++;
//		if (5 == i)
//			continue;
//		printf("%d\n", i);
//	}
//	
//	return 0;
//}
////i/*nt main()
//{
//	int i = 1;
//	while (i <= 10)
//	{
//		
//		if (5 == i)
//			continue;
//		i++;
//		printf("%d\n", i);
//	}
//
//	return 0;
//}*/
//int main()
//{
//	char password[20] = { 0 };
//	printf("请输入密码->");
//	scanf("%s\n", password);
//	getchar();
//	printf("请确认密码->(Y or N)");
//	int ret = getchar();
//	if ('Y' == ret)
//		printf("Yes\n");
//	else
//		printf("No\n");
//	return 0;
//}
//int main()
//{
//	char password[20] = { 0 };
//	printf("请输入密码->");
//	scanf("%s", password);
//	getchar();
//	printf("请确认密码->'Y'or'N'");
//	int ret = getchar();
//	if ('Y' == ret)
//		printf("Yes\n");
//	else
//		printf("No\n");
//	return 0;
//}
//int main()
//{
//	char password[20] = { 0 };
//	printf("请输入密码->");
//	scanf("%s", password);
//	int ch = 0;
//	while (ch = (getchar() != '\n'))
//	{
//		;
//	}
//	printf("请确认密码->");
//	int ret = getchar();
//	if ('Y' == ret)
//		printf("Yes\n");
//	else
//		printf("No\n");
//	return 0;
//}
//int main()
//{
//	char password[20] = { 0 };
//	printf("请输入密码->");
//	scanf("%s", password);
//	int ch = 0;
//	while (ch = (getchar() != '\n'));
//	{
//		
//	}
//	printf("请确认密码->");
//	int ret = getchar();
//	if ('Y' == ret)
//		printf("Yes\n");
//	else
//		printf("No\n");
//	return 0;

//int main()
//{
//	char ch = '\0';
//	while ((ch = getchar()) != EOF)
//	{
//		if (ch < '0' || ch >'9')
//			continue;
//		putchar(ch);
//	}
//	return 0;
//}
//int main()
//{
//	int arr[] = { '73','32','56','78' };
//	int i = 0;
//	int s = sizeof(arr) / sizeof(arr[0]);
//	while (i < s)
//	{
//		printf("%c", arr[i]);
//		i++;
//	}
//	return 0;
//}
//int main()
//{
//	int year = 0;
//	int month = 0;
//	int day = 0;
//	scanf("%4d%2d%2d", &year, &month, &day);
//	printf("Year: ");
//	printf("%4d\n", year);
//	printf("Month: ");
//	printf("%02d\n", month);
//	printf("Day: ");
//	printf("%02d\n", day);
//	return 0;
//}
//int main()
//{
//	int year = 0;
//	int month = 0;
//	int day = 0;
//	scanf("%4d%2d%2d", &year, &month, &day);
//	printf("Year=%d\n", year);
//	printf("Month=%02d\n", month);
//	printf("Day=%02d\n", day);
//	return 0;
//}
//int main()
//{
//	int number = 0;
//	float c = 0.0f;
//	float math = 0.0f;
//    float English = 0.0f;
//	scanf("%d;%f,%f,%f", &number, &c,&math,&English);
//	printf("The each subject score of NO %d is %.2f,%.2f,%.2f", number, c, math, English);
//	return 0;
//}
//int main()
//{
//	printf("printf(\"Hello world\\n\");\n");
//	printf("count<<\"Hello world!\"<<endl!;");
//	return 0;
//}
//int main()
//{
//	int arr[4] = { 0 };
//	int i = 0;
//	
//	while (i < 4)
//	{
//		scanf("%d", &arr[i]);
//		i++;
//	}
//	int max = arr[0];
//	int a = 1;
//	while (a < 4)
//	{
//		if (arr[a]>arr[0])
//			max = arr[a];
//		a++;
//	}
//	printf("%d\n", max);
//	return 0;
//}
//int main()
//{
//	int i = 1;
//	int max = 0;
//	scanf("%d", &max);
//	int n = 0;
//	while (i < 4)
//	{
//		scanf("%d", &n);
//		if ( n > max)
//			n = max;
//		i++;
//	}
//	printf("%d\n", max);
//
//	
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0;i < 3;i++)
//	{
//		for (j = 0;j < 5;j++)
//			printf("hehe\n");
//	}
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	for (i = 1;i <= 10;i++)
//	{
//		if (i == 5)
//			continue;
//		printf("%d", i);
//	}
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	for (i = 1;i <= 10;i++)
//	{
//		if (i == 5)
//			break;
//		printf("%d", i);
//	}
//	return 0;
//}
//int main()
//{
//	int i = 1;
//	while (i <= 10)
//	{
//		if (i == 5)
//			continue;
//		printf("%d", i);
//		i++;
//	}
//	return 0;
//}
//int main()
//{
//	int i = 1;
//	do
//	{
//		if (i == 5)
//			continue;
//		printf("%d", i);
//		i++;
//	} 
//	while (i <= 10);
//	return 0;
//}
//int main()
//{
//	int i = 1;
//	do
//	{
//		if (i == 5)
//			break;
//		printf("%d", i);
//		i++;
//	} while (i <= 10);
//	return 0;
//}
//int main()
//{
//	int i = 1;
//	do
//	{
//		i++;
//		if (i == 5)
//			continue;
//		printf("%d", i);
//	} while (i <= 10);
//	return 0;
//}
//int main()
//{
//	int i = 1;
//	int ret = 1;
//	int n = 0;
//	int sum = 0;
//	scanf("%d", &n);
//	for (i = 1;i <= n;i++)
//	{
//		ret = ret * i;
//		sum += ret;
//	}
//	printf("%d", sum);
//	return 0;
//}
//int main()
//{
	/*int z = 0;
	int i = 0;
	int arr[] = { 1,2,3,4,5,6,7 };
	int s = sizeof(arr) / sizeof(arr[0]);*/
//	scanf("%d", &z);
//	for (i = 1;i < s;i++)
//	{
//		if (arr[i] == z)
//		{
//			printf("找到了，下标是：%d\n ", i);
//			break;
//			if (i == s)
//				printf("找不到\n");
//		}
//	}
//	return 0;
//}
//int main()
//{
//	int z = 0;
//	int left  = 0;
//	int arr[] = { 1,2,3,4,5,6,7 };
//	int s = sizeof(arr) / sizeof(arr[0]);
//	int k = 6;
//	int right = s-1;
//	while (left <= right)
//	{
//		int mid = (left + right) / 2;
//		if (arr[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else if (arr[mid] > k)
//			right = mid - 1;
//		else
//		{
//			printf("找到了，下标是：%d", mid);
//			break;
//		}
//	}
//		if (left > right)
//			printf("找不到");
//	
//
//	return 0;
//}
//int main()
//{
//	char arr1[] = "Welcome come to bite!!!";
//	char arr2[] = "#######################";
//	int left = 0;
//	int right = strlen(arr2) - 1;
//	while (left <= right)
//	{
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		Sleep(1000);
//		system("cls");
//		left++;
//		right--;
//		printf("%s\n", arr2);
//	}
//	
//	return 0;
//}
//#include <string.h>
//int main()
//{
//	int i = 0;
//	char password[20] = { 0 };
//	for (i = 0;i < 3;i++)
//	{
//		printf("请输入密码：");
//		scanf("%s", password);
//		if (strcmp(password, "abcdef") == 0)
//		{
//			printf("登陆成功!\n");
//			break;
//		}
//		else
//			printf("密码错误！\n");
//	}
//	if (i ==3)
//	{
//		printf("登陆失败");
//	}
//	return 0;
//}
//void menu()
//{
//	printf("**********\n");
//	printf("**1.play**\n");
//	printf("**0.exit**\n");
//	printf("**********\n");
//}
//void game()
//{
//	
//	int ret = rand();
//	printf("%d\n", ret);
//}
//int main()
//{
//	int input = 0;
//	do
//	{
//		menu();
//		printf("请选择：>");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			printf("猜数字\n");
//			game();
//			break;
//		case 0:
//			printf("退出游戏\n");
//			break;
//		default:
//			printf("选择错误，重新选择！\n");
//			break;
//		}
//
//
//
//	} while (input);
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	double a[25] = { 1.0 };
//	int i = 1;
//	while (i < 25)
//	{
//		a[i] = 1.0 / (1.0 + a[i - 1]);
//		i++;
//	}
//	printf("%.10f\n", a[24]);
//	return 0;
//}
#include<stdio.h>
//int main()
//{
//	int a,b,c;
//    scanf("%d", &a);
//	if (a == 0)
//		printf("被3整除的数字");
//	else if (a % 5 == 0)
//		printf("被5整除的数字");
//	else
//		printf("既不被5整除也不被3整除");
//	return 0;
//}
//int main()
//{
//	int r = 0;
//	int a, b, c, d;
//	for (a = 1;a <=4;a++)
//	{
//		for (b = 1;b <=4;b++)
//		{
//			for (c = 1;c <=4;c++)
//			{
//				if (a != b && b != c && a != c)
//				{
//					r++;
//					d = a * 100 + b * 10 + c;
//					printf("%d\n", d);
//				}
//			}
//		}
//	}
//	printf("一共有%d个数\n",r);
//	return 0;
//}
#include <math.h>
//int main()
//{
//	int place = 0;
//	long int num ;
//	int indiv, ten, hundred, thousand, ten_thousand;
//	fflush(stdin);
//	printf("请输入一个数字:");
//	scanf("%d", & num);
//	if (num > 9999)
//	{
//		place = 5;
//	}
//	else if (num > 999 && num <= 9999)
//	{
//		place = 4;
//	}
//	else if (num > 99 && num <= 999)
//	{
//		place = 3;
//	}
//	else if (num > 9 && num <= 99)
//		place = 2;
//	else
//		place = 1;
//
//	switch (place)
//	{
//	case 1:
//	 {	indiv = num;
//	    printf("它是%d位数,个位数字是%d\n", indiv);
//	 }
//	case 2:
//	{
//		 ten = num / 10;
//		 indiv = num % 10;
//		 printf("它是%d位数，十位数字是%d,个位数字是%d\n", place, ten, indiv);
//	}
//	case 3:
//	 {
//		 hundred = num / 100;
//		 ten = (num - hundred * 100) / 10;
//		 indiv = num - hundred * 100 - ten * 10;
//		 printf("它是%d位数，百位数字是%d，十位数字是%d,个位数字是%d\n", place,hundred, ten , indiv);
//		 
//	 }
//
//	 return 0;
//	
//
//
//
//}
//int main()
//{
//	int year = 0;
//	int month = 0;
//	int day = 0;
//	int leap = 0;
//	int sum=0;
//	printf("请输入年份，月份，日期\n");
//	scanf("%d,%d,%d", &year, &month, &day,&sum);
//	switch (month)
//	{
//	case 1: sum = 0;break;
//	case 2: sum = 31;break;
//	case 3: sum = 59;break;
//	case 4: sum = 90;break;
//	case 5: sum = 120;break;
//	case 6:sum = 151;break;
//	case 7:sum = 181;break;
//	case 8:sum = 211;break;
//	case 9:sum = 243;break;
//	case 10:sum = 273;break;
//	case 11:sum = 304;break;
//	case 12:sum = 334;break;
//	default: printf("data error");break;
//	}
//	sum = sum + day;
//	if ((year % 4 == 0 && year % 400 == 0 )|| (year % 100 != 0))
//		leap = 1;
//	else
//		leap = 0;
//	if(leap==1 && month>2)
//		sum++;
//	printf("这一天是这一年的第 %d天",sum);
//	return 0;
//}