// ConsoleApplication9.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
# include <iostream>
using namespace std;

int main()
{
	int m, n;
	cin >> n;
	cin >> m;
	bool * facing = new bool[n];
	char * title = new char[n];
	for (int i = 0; i < n; i++)
	{
		cin >> facing[i];
		cin >> title[i];
	}
	bool * direction = new bool[m];
	int * steps = new int[m];
	for (int i = 0; i < m; i++)
	{
		cin >> direction[i];
		cin >> steps[i];
	}
	int result = 0;
	for (int i = 0; i < m; i++)
	{
		int dir = direction[i];
		int fac = facing[result];
		int stp = steps[i];
		if (facing)
		{
			if (dir = 1) { result += stp; }
			else { result -= stp; }
		}
		else
		{
			if (dir = 1) { result -= stp; }
			else { result += stp; }
		}
		bool stat = 1;
		while (stat)
		{
			if (result >= n) {
				result -= n;
			}
			if (result < 0) {
				result += n;
			}
			if (result >= 0 && result < 7)
			{
				stat = false;
			}
		}
	}
	cout << title[result];
	return 0;
}
