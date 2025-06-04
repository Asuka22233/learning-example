#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include <ctype.h>

int QUEUE[100];
int Front, Rear, Count;
int m;
int isEmpty(){
	return Count == 0;
}
int isFull() {
	return Count == 0;

}
void Error(char* s) {
	puts(s);
	exit(1);
}
void enQueue(int queue[], int item) {

	if (isFull())
		Error("x");
	else {
		queue[Rear] = item;
		Count++;
		Rear = (Rear + 1) % m;


	}

}
int deQueue(int queue[]) {
	int e;
	if (isEmpty())
		Error("x");
	else {
		e = queue[Front];
		Count--;
		Front = (Front + 1) % m;
		return e;


	}
}
void show() {
	int temp;


}