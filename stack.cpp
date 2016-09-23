#include <iostream>
#include "stack.h"

using namespace std;

void push(int num, elem **top){

	elem *curr = new elem;

	curr->num = num;

	if (*top == NULL){
		curr->prev = NULL;
	}
	else{
		curr->prev = *top;
	}
	*top = curr;
}

int pop(elem **top){
	int tmp = (**top).num;
	//    int tmp = (*top)->num;
	if (*top == NULL){
		return -1;
	}
	elem *tmp_top = *top;
	*top = (**top).prev;
	delete tmp_top;
	return tmp;
}

void output(elem* top) {
	while (top != NULL) {
		cout << top->num;
		top = top->prev;
	}
}
