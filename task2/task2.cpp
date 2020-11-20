#include<stdio.h>
#include<time.h>
#include<stdlib.h>
#define SizeArr 10
//чтобы не делать за вас всю работу покажу один пример
//масивы это область памяти, поэтому их не нужно возвращать через ретурн
//Они сами обновляться без вашего вмешательства, поэтому для них можно использовать
//Тип воид
//но масив должен передаваться как параметр,
// example: void getRandomArray(int arr[], int size);
// первый параметр это масив

//прототип функции, это первая строчка функции в точности как будет описано после мейна+";"

//прототипы:
void getRandomArray(int arr[], int size);
void printArray(int arr[], int size);
long getMultyplicationOfArrayValue(int arr[], int size);


int main() {
	int arr[SizeArr];
	getRandomArray(arr, SizeArr);
	printArray(arr, SizeArr);
	printf("Multyplication Value of this array is equal to %li", getMultyplicationOfArrayValue(arr, SizeArr));
}

void getRandomArray(int arr[], int size) {
	srand(time(nullptr));
	for (int i = 0; i < size; i++) {
		arr[i] = rand() % (1 - size) + 1;
	}
}
void printArray(int arr[], int size) {
	for (int i = 0; i < size; i++) {
		printf("arr[%d]=%d\n", i, arr[i]);
	}
}
//будут большие числа, поэтому взял тип данных лонг
long getMultyplicationOfArrayValue(int arr[], int size) {
	int multyplicationValue = 1;
	for (int i = 0; i < size; i++) {
		multyplicationValue *= arr[i];
	}
	return multyplicationValue;
}