#include <iostream>
#include <cmath>
using namespace std;
int odd(int a)
{
	int Prime[] = {3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53, 59, 61, 67, 71, 73, 79, 83, 89, 97, 101, 103, 107, 109, 113, 127, 131, 137, 139, 149, 151, 157, 163, 167, 173, 179, 181, 191, 193, 197, 199, 211, 223, 227, 229, 233, 239, 241, 251, 257, 263, 269, 271, 277, 281, 283, 293, 307, 311, 313};
	int b = 1, count = 0;
	while (a % 2 == 0)
	{
		a = a / 2;
	}
	for (int i = 0; i < 64; i++)
	{ count=0;
		while (a % Prime[i] == 0)
		{
			count++;
			a = a / Prime[i];
		}
		b *= ((pow(Prime[i], count + 1) - 1) / (Prime[i] - 1));
		if (a==1){break;}
	}
		if (a>=317){b*=(1+a);}
	return b;
}
int main()
{
	int t, l, r, i;
	long long sum;
	cin >> t;
	while (t > 0)
	{
		sum = 0;
		cin >> l >> r;
		t--;
		for (i = l; i < r + 1; i++)
		{
			sum += odd(i);
		}
		cout << sum<<"\n";
	}
	return 0;
}
