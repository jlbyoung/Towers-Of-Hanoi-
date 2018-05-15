/*
Author : James Young
Student ID : 100273383
Course : CPSC 2150
Instructor : Bita Shadgar
Date : 01/17/2018
*/
#include <iostream>
using namespace std;
int numOfMoves = 0;

void semiHanoi(int n, char source, char destination, char tmp);

int main()
{
	cout << "Enter number of disks" << endl;
	int n;
	cin >> n;
	cout << "The moves are: " << endl;
	semiHanoi(n-1, 'A', 'B', 'C');
	cout << "The number of moves was :" << numOfMoves << endl;
	system("pause");
	return 0;
}

void semiHanoi(int n, char source, char destination, char tmp)
{
	if (n == 1)
	{
		cout << "Move from " << source << " to " << endl;
		numOfMoves++;
	}
	else if (n % 2 == 1)
	{
		Hanoi(n, destination, source, tmp);
		semiHanoi(1, destination, tmp, source);
		Hanoi(n, source, tmp, destination);
	}
	else
	{
		Hanoi(n, source, destination, tmp);
		semiHanoi(1, source, tmp, destination);
		Hanoi(n, destination, tmp, source);
	}
}

void Hanoi(int n, char source, char destination, char tmp)
{
	if (n == 1)
	{
		cout << "Move from " << source << " to " << endl;
		numOfMoves++;
	}
		
	else
	{
		Hanoi(n - 1, source, tmp, destination);
		Hanoi(1, source, destination, tmp);
		Hanoi(n - 1, tmp, destination, source);
	}
}