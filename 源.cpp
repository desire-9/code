#include <stdio.h>
#include <stdlib.h>
int main() {

	//int a = 10;
	int *p;

	//p = &a;
	//printf("%d",*p);
	
	//=,��ֵ
	//maclloc(); ���ڴ����������ָ���ֽڴ�С���ڴ�ռ�,��������Ϊvoid *;
	//ָ����δ��ȷ�����͵�ָ��,��ͨ��ǿ��ת����������������ָ��.
	p = (int*)malloc(sizeof(int));
	*p = 10;
	printf("%d\n", *p);

	getchar();

	return 0;
}