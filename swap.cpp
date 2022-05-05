#include <bits/stdc++.h>

void swap(int &a, int &b)
{
	int temp = a;
	a = b;
	b = temp;
}

int main()
{
	int x = 6; int y = 13;
	swap(x, y);
	return 0;
}
