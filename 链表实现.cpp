#include <stdio.h>
#include <stdlib.h>

struct node
{
	int data;
	struct node *next;
};

int main() {
	//实现链表;
	struct node *head, *p, *q, *t;
	int i, n, a;
	scanf("%d", &n);
	head = NULL;//头指针为空
	for (i = 1; i <= n; i++) {
		scanf("%d", &a);
		//分配空间
		p = (struct node*)malloc(sizeof(struct node));
		p->data = a;
		p->next = NULL;
		if (head == NULL)
			head = p;
		else
			q->next = p;
		q = p;
	}
	
	//插入链表
	scanf("%d", &a);
	t = head;
	while (t != NULL)
	{
		if (t->next == NULL || t->next->data > a) {
			p = (struct node*)malloc(sizeof(struct node));
			p->data = a;
			p->next = t->next;
			t->next = p;
			break;
		}
		t = t->next;
	}
	//遍历链表
	t = head;
	while (t != NULL) {
		printf("%d ", t->data);
		t = t->next;
	}

	getchar();
	return 0;
}