#include<stdio.h>
#include<stdlib.h>
#include<string.h>
typedef struct _Node {
	int data;
	struct _Node* next;

}Node,*List;

List read_list(int n) {
	List head = (List)malloc(sizeof(Node));
	List tail = head;
	for (int i = 0;i < n;i++) {
		List node = (List)malloc(sizeof(Node));
		scanf("%d", &node->data);
		tail->next = node;
		tail = node;
	}
	tail->next = NULL;
	return head;




}
void del_by_index(List list, int x) {

	List p = list;
	for (int i = 1;p->next && i < x;i++)
		p = p->next;
	if (p->next) {

		List q = p->next;
		p->next = q->next;
		free(q);
		puts("Success!");
	}
	else
		puts("Fail!");




}

void del_by_data(List list, int x) {

	List p = list;
	while (p->next && p->next->data != x)p = p->next;
	if (p->next) {

		List q = p->next;
		p->next = q->next;
		free(q);
		puts("Success!");
	}
	else
		puts("Fail!");

}

void print_list(List list)
{

	for (List p = p->next;p;p = p->next)
		printf("%d", p->data);
	putchar('\n');


}

int main() {

	int n, m;
	scanf("%d%d", &n, &m);
	List list = read_list(n);
	while (m--) {
		int op,x;
		scanf("%d%d", &op, &x);
		if (op == 1)
			del_by_index(list, x);
		else
			del_by_data(list, x);


	}

	print_list(list);
	return 0;
}