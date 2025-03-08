#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


//int main()
//{

	//const char* p = "abcdef";//这种写法是把字符串的首字符a的地址放到p里面去
	//printf("%s", p);//p代表字符串的起始地址，从a开始向后一直打印，直到遇见\0才停止
	//char arr[] = "abcdef";//放进数组里面

	//const char* p1 = "abcdef";
	//const char* p2 = "abcdef";
	////因为"abcdef"是常量字符串，是只读数据，不能被修改，所以内存里面只存储一个，大家共同使用即可

	//char arr1[] = "abcdef";
	//char arr2[] = "abcdef";
	// p1  ==  p2
	// arr1  !=  arr2

	//指针数组：是数组，是用来存放指针的数组
	//例如：
	//int arr1[10];//int 类型的数组，
	//int* arr2[10];//数组的每个元素是int*，用来存放整型指针
	//char* arr3[5];//数组的每个元素是char*,用来存放字符指针

	//利用指针数组和一维数组模拟二维数组
//	int arr1[5] = { 1,2,3,4,5 };
//	int arr2[5] = { 2,3,4,5,6 };
//	int arr3[5] = { 3,4,5,6,7};
//	int* parr [3] = {arr1,arr2,arr3};//int* parr[3]={arr1[0],arr2[0],arr3[0]};
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < 3; i++)
//	{
//		for (j = 0; j < 5; j++)
//		{
//			printf("%d ", *(parr[i] + j));
//		}
//		printf("\n");
//
//	}
//	//   *(p+i)  ==   p[i]
//	//   *(arr+i) ==  arr[i]
//	
//	// 二维数组在内存里面本质是连续存放的，但是模拟出来的二维数组不是连续存放的
//	return 0;
//

//}

// 数组名 和 &数组名
//int arr[10];
// arr==&arr[0]
// 使用sizeof操作符里面单独放一个数组名时，数组名arr代表整个数组；sizeof(arr) 计算数组arr的元素个数
// sizeof(arr+0) 不是单独放一个数组名
// &数组名，这里的数组代表整个数组，使用&数组名取出的是整个数组的地址
// 数组名 在通常情况下都代表数组首个元素的地址，除了两种情况：&数组名 和  sizeof(数组名)  数组名代表整个数组
// 数组的地址从数组的首元素地址开始
// 注意区别：
// 数组名+1  跳过一个数组元素
// &数组名+1  跳过整个数组
//int main()
//{
//	//整型指针：指向整型的指针
//	// 字符指针：指向字符的指针
//	// 那么
//	//数组指针：指向数组的指针，是用来存放数组的地址的， &数组名就是数组的地址
//	//int* p1[10];// p1是数组名字
//	//int(*p2)[10];// p2 是指针，p2指向的是数组，p2是数组指针
//	//p2可以指向一个数组，数组包含10个元素，每个元素是int 类型
//	//int arr[10] = { 0 };
//	//int(*p)[10] = &arr;//数组指针 p,int是指针指向数组的类型，这里的*不是解引用
//	//p 的类型是：int (*) [10],p指向的数组元素是int类型
//  // 这里的10代表p指向的数组有10个元素
//
//	//char* arr[5] = {0};//指针数组
//	//char* (*pc)[5] = &arr;//数组指针//pc数组指针变量
//	
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int(*p)[10] = &arr;//数组指针变量 p , 存储的是数组arr的地址，即arr[0]的 地址
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", *((*p + i)));
//	}
//	
//	return 0;
//}

//void print(int(*p)[5], int r, int c)
//{
//	// p是第一行一维数组的地址,即第一行的首元素地址
//	//*p第一行一维数组，即arr[0]
//	// p+i 是第 i 行一维数组首个元素的地址，即第i行的首元素地址
//	//*(p+i)是第 i行一维数组首个元素的地址 即&arr[i][0]
//	//  *(p+i)+j  是 &arr[i][j]
//	// *(*(p+i)+j) 就是  arr[i][j]
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < r; i++)
//	{
//		for (j = 0; j < c;j++)
//		{
//			//printf("%d ", *(*(p + i) + j));
//			printf("%d ", p[i][j]);
//         // *(p+i) == p[i]
//		}
//		printf("\n");
//	}
//}
//
//
//int main()
//{
//	int arr[3][5] = { 1,2,3,4,5,2,3,4,5,6,3,4,5,6,7 };
//	print(arr, 3, 5);// 二维数组的首元素是他的第一行元素,即数组的地址 -> 数组指针
//
//
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < 3; i++)
//	{
//		for (j = 0; j < 5; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}

// 一维数组传参
//void test(int arr[])//可以
//{}
//void  test(int arr[10])//可以
//{};
//void  test(int* p)//可以
//{};
//总结：一维数组传参，参数可以是数组，也可以是指针

// 一维指针数组传参
//void test2(int * arr[])//可以
//{}
//void test2(int* arr[20])//可以
//{}
//void test2(int** p)//可以
//{}
//总结：一维指针数组 ，形参可以是指针数组，也可以是二级指针

//二维数组传参
//void test3(int arr[3][5])//可以
//{}
//void test3(int arr[][])// 错误，二维数组 行可以省略，列不可以省略//多维数组也是，只能省略第一维度
//{}
//void test3(int arr[][5])// 可以
//{}
// void teste(int(*p) [5])//可以
// 
// 二维数组传参，数组名传过去的是 首个一维数组  的地址 -> 第一行 数组的地址
//总结：二维数组传参，形参可以是二维数组，也可以是数组的指针 -> 数组指针



//void calc(int (*pf)(int, int))
//{
//	int a = 3;
//	int b = 4;
//	int ret = pf(a, b);
//	printf("%d\n", ret);
//}
//
//int Add(int x, int y)
//{
//	return x + y;
//}
//int test(const char* str)
//{
//	return 0;
//}
//
//
//int main()
//{
////	//int arr[5];// arr 是整型数组
////	//int* parr1[10];//parr1 是整型指针数组
////	//int(*parr2)[10];// parr2 是整型数组的指针
////	////parr2是指针变量名称，int(*)[10] 是指针所指向的数组的类型
////	//int(*parr3[10])[5];//parr3是存放      整型数组指针    的数组
////	// parr3是数组名称，[10]是数组的元素个数      int(*)[5] 是数组存放的内容，即数组的内容是数组的指针
////	// 数组指针数组
////	// parr3是数组，数组的每一个元素是数组的指针
////
////
////	//一维数组传参：
////	//int arr[10] = { 0 };//  一维数组
////	//int* arr2[20] = { 0 };// 一维指针数组
////	//test(arr);
////	//test2(arr2);
////	
////	//二维数组传参：
////	//int arr[3][5]={0};//二维数组
////	// test3(arr);
////
////	//一级指针传参：
////	//一级指针传参给函数，函数的形参需要用一级指针变量接收
////	// 函数的参数是一级指针，可以传指针变量、可以传地址、可以传数组名
////
////	//二级指针传参：
////	// 函数的形参可以写成 二级指针变量
////	// 函数的参数是二级指针，可以传 一级指针的地址 -> 二级指针、可以传指针数组的数组名 -> 指针的地址、可以传三级指针解引用
////
////	//函数传参，只要传过去的实参的类型 与 函数的形参的类型 一样即可
////
////	// 数组指针；指向数组的指针就是数组指针。//数组指针的重点是指针，指针，指针！不是数组
////	//函数指针：指向函数的指针就是函数指针。
////	// 数组指针：&数组名
////	// 函数指针：&函数名
////	//printf("%p\n", &Add);
////	//printf("%p\n", Add);
////	//结论：对于函数来说，函数名 和 &函数名 得到的都是函数的地址
////	//指针变量 的存储方式：
////	//int (*p)(int, int) = &Add;// p是指针变量   第一个int 表示函数的返回值是int 类型
////	// 后面的 int int  分别代表函数参数的类型 
////	// 参数的名字写不写都可以：
////	int (*p)(int x, int y) = &Add;//写上 参数名字也可以 
////	// 对函数指针解引用，并且调用函数
////	// p 是函数指针，*p对函数指针解引用，得到函数本身
////	//int ret=(*p)(3, 4);//(3,4)代表函数调用、传参 //注意 对p解引用，一定要用括号把  *p  括起来
////	int ret=p(3,4);//这样子用也可以   // * 写多个也可以的 -> int rep=(*****p)(3,4)
////	//int ret=Add(3,4) 和上面的两行代码 相同
////	printf("%d ", ret);
////
////	// 传函数地址给函数
////	calc(Add);
////
//printf("%p\n", &test);
//printf("%p\n", test);
//// 这两种写法都可以，函数名就是函数的地址
//
////存储函数的地址
//int (*pf)(const char*) = test;
//// int (*pf)(const char* str) = &test;// 这样子写也可以
//
//(*pf)("abc");//传过去a的地址
//pf("abc");//这样写也可以，不进行解引用也可以
//	return 0;
//}

//int main()
//{
//	//分析 ： 
//	// (   * (  void(*)() )0 )  ();
//	// void (*)() ,表示函数指针的类型 ->  函数指针去掉指针名字就是函数指针类型
//	// (  void(*)() ) 0 ,表示把 0 强制类型转化为一个函数指针，这个函数指针没有返回值、没有参数
//	//  *(  void(*)() )0  ,表示对函数指针解引用
//	//  后面再加上一个括号，表示调用函数指针所指向的函数
//
//	 //分析：   
//	 // void ( *     signal(int, void(*)(int))     ) (int);
//	 //  这是一个函数声明
//	// signal 是函数名，第一个参数的类型是int；第二个参数的类型是 一个函数指针的类型，指向的是一个返回值是void、参数是int类型的函数
//	// 函数signal 的返回值类型是：  void(*)(int)  -> 返回值也是一个函数指针 
//	//简化写法：
//	//typedef void(*pf_t)(int);// 把函数指针类型 void(*) (int)  重命名为 pf_t类型
//	//pf_t signal(int,pf_t)
//	typedef unsigned int uint;//  类型重定义，把unsigned int 类型重命名为uint 类型，以后写的uint 就是 unsigned int
//	return 0;
//}


//  写一个简易的计算器，实现加减乘除四种运算

//void menu()
//{
//	printf("************  1.加法       2.减法************\n");
//	printf("************  3.乘法       4.除法************\n");
//	printf("************  0.退出             ************\n");
//}
//
//int Add(int x, int y)
//{
//	return x + y;
//}
//
//int Sub(int x, int y)
//{
//	return x -y;
//}
//
//int Mul(int x, int y)
//{
//	return x * y;
//}
//
//int Div(int x, int y)
//{
//	return x / y;
//}
//
//
//void calc( int (*pf) (int, int) )
//{
//	int x = 0;
//	int y = 0;
//	printf("输入两个操作数:");
//	scanf("%d %d", &x, &y);
//	int ret=pf(x, y);
//	printf("%d\n", ret);
//
//}
////int main()
////{
////	
////	int input = 0;
////	int x = 0;
////	int y = 0;
////	int ret = 0;
////	
////	do {
////		menu();
////		printf("请选择 >");
////		scanf("%d", &input);
////		switch (input)
////		{
////		case 1:
////			printf("输入两个操作数:");
////			scanf("%d %d", &x, &y);
////			ret = Add(x, y);
////			printf("%d\n", ret);
////			break;
////		case 2:
////			printf("输入两个操作数:");
////			scanf("%d %d", &x, &y);
////			ret = Sub(x, y);
////			printf("%d\n", ret);
////			break;
////		case 3:
////			printf("输入两个操作数:");
////			scanf("%d %d", &x, &y);
////			ret = Mul(x, y);
////			printf("%d\n", ret);
////			break;
////		case 4:
////			printf("输入两个操作数:");
////			scanf("%d %d", &x, &y);
////			ret = Div(x, y);
////			printf("%d\n", ret);
////			break;
////		case 0:
////			printf("退出\n");
////			break;
////		default:
////			printf("输入错误\n");
////		}
////
////
////	} while (input);
////	return 0;
////}
////这样写冗余代码太多！！！
//// 换下面这种写法：
//// 传函数地址 ->  回调函数 ：通过函数的地址回过头来调用函数。
//int main()
//{
//	int input = 0;
//	do {
//		menu();
//		printf("请选择 >");
//		scanf("%d", &input);
//		switch (input)
//		{
//			case 1:
//				calc(Add);
//				break;
//			case 2:
//				calc(Sub);
//				break;
//			case 3:
//				calc(Mul);
//				break;
//			case 4:
//				calc(Div);
//				break;
//			case 0:
//				printf("退出\n");
//				break;
//			default:
//				printf("输入错误\n");
//		
//		}
//	} while (input);
//
//	return 0;
//}

//int main()
//{
//	//函数指针数组：存放函数指针的数组 -->  转移表
//	int (*arr[4])(int, int) = { Add,Sub,Mul,Div };
//	// arr[4] 表示数组 的名字是arr  ,有4个元素
//	// int (*) (int ,int) 表示数组的内容是 函数指针的类型
//	int (*pf)(int, int) = &Add;//这里的pf是 函数指针变量的变量名
//	//同理，把变量名换成数组名就行了
//	// 或者这样写：
//	typedef int(*pf_t)(int, int) ;//把int(*) (int,int)的函数指针类型重命名为 pf_t
//	pf_t arr1[4] = { Add,Sub,Mul,Div };
//	int i = 0;
//	for (i = 0; i < 4; i++)
//	{
//		int ret=arr[i](8, 4);
//		int ret1=arr1[i](8, 4);
//		printf("%d %d\n", ret, ret1);
//	}
//
//	return 0;
//}

//简易计算器 ，函数指针数组写法：
//int main()
//{
//	
//	int input = 0;
//	
//	do {
//		menu();
//		printf("请选择 >");
//		scanf("%d", &input);
//		int (*pfArr[5])(int, int) = { 0,Add,Sub,Mul,Div };// 这种数组也叫转移表
//		if (input == 0)
//		{
//			printf("退出\n");
//
//		}
//		else if (input >= 1 && input <= 4)
//		{
//			int x = 0;
//			int y = 0;
//			printf("输入两个操作数：");
//			scanf("%d %d", &x, &y);
//			int ret = pfArr[input](x, y);
//			printf("%d\n", ret);
//		}
//		else
//		{
//			printf("输入错误！");
//		}
//	} while (input);
//	
//
//	return 0;
//}

//int main()
//{
//	// 函数指针数组指针 -> 指向    函数指针数组      的指针
//
//	int(*pfArr[5])(int, int) = { 0,Add,Sub,Mul,Div };// 函数指针数组
//	int(  * (*ppfArr)[5]    )(int, int) = &pfArr;//ppfArr是函数指针数组指针
//	// ppfArr 是指针变量名字 
//	//int( *(*)[5] )(int,int),说明指针所指向的内容是函数指针数组
//	return 0;
//}

// 回调函数：回调函数就是一个通过指定函数指针调用的函数。如果你把函数的指针（地址）作为参数传递给另一个函数，当这个指针被用来
//			 调用其所指向的函数时，我们就说这是回调函数。回调函数不是由该函数的实现方直接调用，而是在特定的事件或者条件发生时
//			 由另外的一方调用的，用于对该事件或者条件进行响应。
// 把A函数的地址通过传参的方式传递给B函数，在B函数内部通过这个地址调用A函数，就是回调函数。

