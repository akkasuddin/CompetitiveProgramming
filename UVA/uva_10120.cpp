#include <stdio.h>

int pre[50] = { 0, 1, 9, 20, 4, 18, 33, 16, 31, 9, 29, 11, 27, 46, 25, 44, 16, 42, 18, 40, 20, 
38, 22, 36, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 49, 35, 36, 37, 38, 39, 40, 41,
42, 43, 44, 45, 46, 47, 48 };
/*int verify(int n, int m)
{
	int r[64], i, j, k, z;

	for (r[1] = 1, i = 2; i <= n; i++)
		r[i] = 0;

	for (z = 2; r[m] == 0; z++) {
		for (k = 2 * z - 1, i = 1, j = 0; i <= n; i++) {
			if (r[i] != (z - 1)) continue;
			if ((i + k) <= n) r[i + k] = z;
			if ((i - k) >= 1) r[i - k] = z;
			j++;
		}

		if (j == 0)
			break;
	}

	return (r[m] > 0);
}

void gen()
{
	int i, j;
	for (i = 1; i < 49; i++)
	{
		for (j = i; j < 49; j++)
			if (verify(j, i))
				break;
			pre[i] = j;

	}
	for (i = 0; i < 49; i++)
		printf("%d, ", pre[i]);
}*/
int main()
{
	int n, m;

	//gen();

	while (scanf("%d %d", &n, &m) == 2 && n > 0)
		if (n > 48 || (pre[m]<=n))
			printf("Let me try!\n");
		else
			printf("Don't make fun of me!\n");
	
	return 0;
}
