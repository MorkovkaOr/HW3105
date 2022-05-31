#include<iostream>
using namespace std;
void push_front(int& size, int* mas, int number);
void push_back(int& size, int* mas, int number);
void pop_back(int& size, int* mas);
void pop_front(int& size, int* mas);
void erase(int& size, int* mas, int number);
void insert(int& size, int* mas, int number, int a);
void main()
{
	setlocale(LC_ALL, "");
	int size = 10;
	int number;
	int a;
	int* mas = new int[size];
	for (int i = 0; i < size; i++)
	{
		mas[i] = rand() % 100;
	}
	for (int i = 0; i < size; i++)
	{
		cout << mas[i] << " ";
	}
	cout << endl;
	cout << "Какое число добавить в начало массива? "; cin >> number;
	push_front(size, mas, number);
	for (int i = 0; i < size; i++)
	{
		cout << mas[i] << " ";
	}
	cout << endl;
	cout << "Какое число добавить в конец массива? "; cin >> number;
	push_back(size, mas, number);
	for (int i = 0; i < size; i++)
	{
		cout << mas[i] << " ";
	}
	cout << endl;
	cout << "На какое место добавить число? "; cin >> a;
	cout << "Какое число добавить в массив? "; cin >> number;
	insert(size, mas, number,a);
	for (int i = 0; i < size; i++)
	{
		cout << mas[i] << " ";
	}
	cout << endl;
	pop_front(size, mas);
	for (int i = 0; i < size; i++)
	{
		cout << mas[i] << " ";
	}
	cout << endl;
	pop_back(size, mas);
	for (int i = 0; i < size; i++)
	{
		cout << mas[i] << " ";
	}
	cout << endl;
	cout << "На каком месте стереть число? "; cin >> number;
	erase(size, mas, number);
	for (int i = 0; i < size; i++)
	{
		cout << mas[i] << " ";
	}
}
void insert(int& size, int* mas, int number, int a)
{
	for (int i = 0; i < size-a; i++)
	{
		mas[size - i] = mas[size - i - 1];
	}
	mas[a] = number;
	size += 1;
}
void push_back(int& size, int* mas, int number)
{
	mas[size] = number;
	size += 1;
}
void push_front(int& size, int* mas, int number)
{
	for (int i = 0; i < size; i++)
	{
		mas[size - i] = mas[size - i - 1];
	}
	mas[0] = number;
	size += 1;
}
void pop_back(int& size, int* mas)
{
	mas[size - 1] = 0;
	size -= 1;
}
void pop_front(int& size, int* mas)
{
	for (int i = 0; i < size-1; i++)
	{
		mas[i]=mas[i+1];
	}
	mas[size - 1] = 0;
	size -= 1;
}
void erase(int& size, int* mas, int number)
{
	for (int i = 0; i < size - 1-number; i++)
	{
		mas[i+number] = mas[i + 1+number];
	}
	mas[size - 1] = 0;
	size -= 1;
}