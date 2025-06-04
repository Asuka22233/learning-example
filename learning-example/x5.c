#include<stdio.h>
#include<stdlib.h>
#include<string.h>
typedef struct DNode {

	int data;
	struct DNode* prior, * next;

}DNode,*DLinklist;

void ListInsert(DLinklist L, int t, int e) {

	for (DLinklist p = L->next, q;p;p = p->next) {
		if (p->data == t) {
			q = (DNode*)malloc(sizeof(DNode));
			q->data = e;
			q->next = p->next;
			if (p->next)
				p->next->prior = q;
			p->next = q;
			q->prior = p;
			return;

		
		}
		


	}
	puts("Not Found!");
}