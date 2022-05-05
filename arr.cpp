#include <bits/stdc++.h>

int main()
{
	int arr[6] = {1, 2, 5, 6, 12, 3};
	for (int *p = &arr[0]; p <= &arr[5]; p++)
	{
		std::cout << *p << "\n";
	}
	return 0;
}

