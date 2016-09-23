#include "iostream"
#include <clocale>
#include "stack.h"

using namespace std;
int *tos, stack[10];

int main() {
	setlocale(LC_ALL, "Russian");
	elem *top(NULL);
	for (int i = 0; i < 10; i++){

		push(i, &top);
	}
	cout << "Вывод пароля:  ";
	cout << endl;
	for (int i = 0; i < 10; i++){
		cout << pop(&top) << " ";
	}

	return 0;
}
