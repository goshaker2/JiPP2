#include <iostream>
#include<stdlib.h>
#include<string.h>

using namespace std;

int add(int a, int b)
{
	return a + b;
}

int subtract(int a, int b)
{
	return a - b;
}

int action(char* operation, int a, int b) {
	if (strcmp(operation, "add") == 0) {
		return add(a, b);
	} else if(strcmp(operation, "subtract") == 0) {
		return subtract(a, b);
	}
	
	return 0;
}

// если просто хочешь показать результат, то необязательно делать тип int
// c++ строго типизированный язык. У параметров должны быть типы. 
// Сразу видно что ты даже код не компилировал....
void volume(int a, int b1, int b2, int h, int H, int A, int v, int V)
{	
    // нельзя параметрам присваивать значения, дай им другие имена тогда
	int AA = 1/2*(b1 + b2)*h;
	int vv = AA * h;
	int VV = AA * H;
	cout << "volume" << " " << VV << endl;
}

void displayError(char* message)
{
	cout << "Error: " << message << endl << endl;
}

// cправку можно сделать отдельной функцией которая не возвращает ничего, пример ниже
void showHelp() {
	cout << "calculator.exe [arithmetic operator] [first number] [second number]:" << endl;
	cout << "Description:" << endl;
	cout << "Available arithmetic operations: add, subtract" << endl;
	cout << "Example of program usage: calculator.exe add 1 2" << endl;
}

// Само задание можно сделать гораздо проще. Используя switch case и не усложняя себе жизнь
// Все те попытки я просто удалил.
int main(int argc, char* argv[])
{
	switch(argc) {
		case 4:
			cout << "Result: " << action(argv[1], atoi(argv[2]), atoi(argv[3]))<< endl;
			break;
		default:
	        displayError("No arguments passed.");
			showHelp();
	}	
	
	system("pause");
	return 0;
}
