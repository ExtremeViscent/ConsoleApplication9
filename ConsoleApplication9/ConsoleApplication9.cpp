// ConsoleApplication9.cpp : 定义控制台应用程序的入口点。
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
	string * title = new string[n];
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
	for(int i=0;i<m;i++)
	{
		if (facing[result] && direction[i]) {
			result += steps[i];
		}
		else {
			result -= steps[i];
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
		
	/*for (int i = 0; i < m; i++)
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
		}*/
	}
	cout << title[result];
	return 0;
}
