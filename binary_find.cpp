// 二叉查找，某个数是否在数组中
//

#include "stdafx.h"
#include "iostream"

using namespace std;

void bi_find(int left, int right, int num[], int x)
{
	int loca = (left + right) / 2;
	if (left == right)
	{
		if (num[left] == x)
			cout << "YES" << endl;
		else
			cout << "NO" << endl;
	}
	else if (x>num[loca])
	{
		bi_find(loca + 1, right, num, x);
	}
	else
	{
		bi_find(left, loca, num, x);
	}
}

int main()
{
	int arra[2] = { 1, 5};
	int fin_num = 8;

	bi_find(0, 1, arra, 4);
}

