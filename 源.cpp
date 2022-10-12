#include <stdio.h>
#include <stdlib.h>
int main() {

	//int a = 10;
	int *p;

	//p = &a;
	//printf("%d",*p);
	
	//=,赋值
	//maclloc(); 从内存中申请分配指定字节大小的内存空间,返回类型为void *;
	//指的是未被确定类型的指针,可通过强制转换成其他任意类型指针.
	p = (int*)malloc(sizeof(int));
	*p = 10;
	printf("%d\n", *p);

	getchar();

	return 0;
}