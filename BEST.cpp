#include<iostream>
using namespace std;
int main()
{
	int t, l, r, i,j;
	long long sum;
	cin >> t;
	while (t-- > 0)
	{
		sum = 0;
		cin >> l >> r;
		for (i = 1; i < r; i+=2)
		{
			j=r/i - (l-1)/i;
			sum+=j*i;
		}
		cout << sum<<"\n";
	}
	return 0;
}