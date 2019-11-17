#include <stdio.h>
int main(void)
{
	int t, size, i, j, max = -1, index;
	long long int num;
	int score[100];

	scanf("%d", &t);

	for (i = 0; i < t; i++)
	{
		scanf("%d", &size);
		scanf("%d", &num);

		max = -1;

		for (j = 0; j < size; i++, num /= 10)
		{
			score[j] = num / 10;

			if (max > score[j])
			{
				max = score[j];
				index = j;
			}
		}
	}
}