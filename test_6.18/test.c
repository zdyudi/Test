
#include<stdio.h>

//int main()
//{
//	printf("%d\n", __STDC__);
//	return 0;
//}

//#define MAX 100
//#define STR "hhe"
//
//#define do_forever for(;;)

//int main()
//{
	//int max = MAX;
	//printf("%d\n", max);
	//printf("%s\n", STR);

	//do_forever;
	//return 0;
//}

//#define SQUARE(X) (X)*(X)

//int main()
//{
	//int ret = SQUARE(5);//5*5
	//printf("ret=%d\n", ret);

	//int ret = SQUARE(5 + 1);
	//printf("ret=%d\n", ret);//5+1*5+1
	//return 0;
//}

//#define DOUBLE(X) ((X)+(X))

//int main()
//{
//	int a = 5;
//	int ret = 10 * DOUBLE(a);//10*5+5
//	printf("%d\n", ret);
//	return 0;
//}

//void print(int a)
//{
//	printf("the value of a is %d\n", a);
//}
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	//printf("the value of a is %d\n", a);
//	print(a);
//    print(b);
//	return 0;
//}

//#define PRINT(X) printf("the value of "#X" is %d\n",X)

//int main()
//{
//	int a = 10;
//	int b = 20;
//	PRINT(a);
//	PRINT(b);
//	return 0;
//}

//#define CAT(X,Y) X##Y

//int main()
//{
//	int Class84 = 2019;
//	//printf("%d\n", class84);
//	printf("%d\n", CAT(Class, 84));
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	int b = a + 1;//1  a=10
//	int b = ++a;//2   a=11
//	return 0;
//}

#define MAX(X,Y) ((X)>(Y)?(X):(Y))

int main()
{
	int a = 10;
	int b = 11;
	int max = MAX(a, b);
	printf("%d\n", max);
	return 0;
}