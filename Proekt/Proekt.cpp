// Proekt.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include "random"
#include <ctime>


int main()
{
	srand(time(0));
	int end = 1000;
	int start = 0;
	int N;
	int M;
	printf("enter arrea size");
	scanf_s("%d%d", &N, &M);

	int** a = new int* [N];
	for (int i = 0; i < N; i++)
		a[i] = new int[M];


	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < M; j++)
			a[i][j] = rand() % (end - start + 1) + start;
	}

	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < M; j++)
			std::cout << "(" << i << "," << j << "): " << a[i][j] << "   ";
		std::cout << std::endl;
	}

	return 0;
}

