
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

#define DOUBLE(X) ((X)+(X))

int main()
{
	int a = 5;
	int ret = 10 * DOUBLE(a);//10*5+5
	printf("%d\n", ret);
	return 0;
}