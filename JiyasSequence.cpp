#include <bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
	int t;
	cin >> t;
	while (t--)
	{
		int n;
		long long int pd = 1;
		cin >> n;
		int a[n];
		for (int i = 0; i < n; i++)
		{
			cin >> a[i];
			pd *= a[i];
		}
		int r = pd % 10;
		if (r == 2 || r == 3 || r == 5)
			cout << "YES\n";
		else
			cout << "NO\n";
	}
	return 0;
}
