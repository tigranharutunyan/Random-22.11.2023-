// ConsoleApplication2.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <ctime>
using namespace std;
int main()
{
	srand(time(NULL));
	int random[15];	int min = 0;
	int minLim; cout << "enter Min Limit for numbers  = "; cin >> minLim;
	int maxLim; cout << "enter Max Limt for numbers = "; cin >> maxLim;
	for (int i = 0; i < 15; i++)
	{
		random[i] = rand()%(maxLim - minLim+1)+minLim;
		cout << random[i] << "  "; 

        if (min > random[i])
		{
			min = random[i];
		}

	}

	
	cout << endl << min;
}


