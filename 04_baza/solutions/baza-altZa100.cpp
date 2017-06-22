#include <cstdlib>
#include <cstdio>

long long n, m, a, b;

void solve()
{
	// bar jedan senzor => bar 2n - 1 sigurno polje
	if ((m < 2 * n - 1) || (n == 1 && m != 1))
	{
		printf("-1\n");
		return;
	}

	if (n == 1 && m == 1)
	{
		printf("1\n");
		printf("1 1\n");
		return;
	}

	// sada znamo 1 < n < m
	a = 1LL;
	while (a * a <= m)
	{
		if (a == n)
		{
			printf("-1\n"); // ako je b = n, proslo bi za a = 1.
			return;
		}

		if (m - a * n > 0 && (m - a * n) % (n - a) == 0) // a * n ne ispada iz opsega jer se a*n povecava za najvise n po koraku
		{
			b = (m - a * n) / (n - a); // uvek vazi a <= b
			
			printf("%lld\n", b);
			for (int i = 1; i <= a; i++)
			{
				printf("%d %d\n", i, i);
			}
			for (int i = a + 1; i <= b; i++)
			{
				printf("%lld %d\n", a, i);
			}
			return;
		}

		a++;
	}

	printf("-1\n");
	return;
}

int main()
{
	scanf("%lld%lld", &n, &m);
	solve();
	return 0;
}
