//구글 답
#include <stdio.h>
#include <string.h>

int main() {
	int T; scanf("%d", &T);

	for (int id = 1; id <= T; ++id) {
		int A, B, N, done = 0;
		scanf("%d %d %d", &A, &B, &N);
		for (++A; !done;) {
			int mid = A + B >> 1;
			char result[32];
			printf("%d\n", mid);
			fflush(stdout); //출력 버퍼 안에 존재하는 데이터를 비우는 즉시 출력합니다.
			scanf("%s", result);
			if (!strcmp(result, "CORRECT")) done = 1;
			else if (!strcmp(result, "TOO_SMALL")) A = mid + 1;
			else B = mid - 1;
		}
	}
	return 0;
}

//내가 짠 코드
//런타임 에러난 이유: n값을 랜덤으로 했기 때문에 -> 구글에서는 범위 내의 평균을 구해 계산한다.
/*#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(void)
{
	int pred, n1, n2;
	int flag = 1;
	char answer[50];

	scanf("%d %d", &n2, &n1);

	srand(time(NULL));

	pred = rand() % n1 + n2;
	printf("%d\n", pred);
	scanf("%s", answer);

	while (strcmp(answer, "CORRECT") == 1)
	{
		if (strcmp(answer, "TOO_SMALL") == 0)
		{
			n1 = n1 + n2 - pred;
			n2 = pred;
		}
		else if (strcmp(answer, "TOO_BIG") == 0)
			n1 = pred - n2;
		else if (strcmp(answer, "WRONG_ANSWER") == 0)
			break;
		
		pred = rand() % n1 + n2;
		printf("%d\n", pred);

		scanf("%s", answer);
	}
}*/