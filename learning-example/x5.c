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
	for (int i = 0;i < n;++i) {
		List node = (List)malloc(sizeof(node));
		scanf("%d", &node->data);
		tail->next = node;
		tail = node;

	}
	tail->next = NULL;
	return head;

}

void insert_by_index(List list, int k, int data) {
	List p = list;
	for (int i = 0;i < k;++i) {
		if (p == NULL) break;
		p = p->next;


	}
	if (p == NULL) {
		puts("Fail!");
		return;
	}

	List node = (List)malloc(sizeof(Node));
	node->data = data;
	node->next = p->next;
	p->next = node;
	puts("Success!");


}

void insert_by_data(List list, int v, int data) {

	List p = list->next;
	while (p != NULL) {
		if (p->data == v) {
			List node = (List)malloc(sizeof(node));
			node->data = data;
			node->next = p->next;
			p->next = node;
			puts("Success!");
			return;
		}
		else
			p = p->next;

	}
	puts("Fail!");


}
void print_list(List list)
{
	for (List p = list->next;p;p = p->next)
		printf("%d", p->data);
	printf("\n");

}

int main() {

	int n, m;
	scanf("%d%d", &n, &m);
	List list = read_list(n);
	while (m--) {

		int op, x, data;
		if (op == 1)
			insert_by_index(list, x, data);
		else
			insert_by_data(list, x, data);




	}
	print_list(list);
	return 0;



}