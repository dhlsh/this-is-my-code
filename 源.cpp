#include<stdlib.h>
#include<math.h>
#include<iostream>
using namespace std;


int main()
{
	int a[30], i, j, n;
	int s1, s2 = 0;
	cin >> n;
	for (i = 0; i < n; i++)
		cin >> a[i];
	if (n <= 0)
		cout << 0;
	else//输出最大最大子段和
	{
		for (i = 0; i < n; i++)
		{
			s1 = 0;
			for (j = i; j < n; j++)
			{
				s1 += a[j];
				if (s1 > s2)
					s2 = s1;
			}
		}
		cout << s2;
	}
	return 0;
}