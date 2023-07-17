#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <Windows.h>
#include <time.h>

int main(void) {

	printf("풀 문제 갯수를 입력해주세요.\n");

	int p;

	scanf_s("%d", &p);


	for (int i = 0; i <= p-1; i++) {
		srand(time(NULL));

		int number[2] = { 0, 0 };

		int first = rand() % 9;
		int second = rand() % 9;

		number[0] = first;
		number[1] = second;


		/*int Sum = number[0] + number[1];
		int Sub = abs(number[0] - number[1]);
		int Mul = number[0] * number[1];
		int quo = if (number[0] > number[1]): number[0] / number[1]
				  else: number[1] / number[0]
		*/


		int giho = rand() % 4;

		if (giho == 0) {
			printf("%d + %d = ?\n", number[0], number[1]);
		}

		else if (giho == 1) {
			if (number[0] > number[1]) {
				printf("%d - %d = ?\n", number[0], number[1]);
			}

			else {
				printf("%d - %d = ?\n", number[1], number[0]);
			}
		}

		else if (giho == 2) {
			printf("%d * %d = ?\n", number[0], number[1]);
		}

		else if (giho == 3) {
			if (number[0] > number[1]) {
				if (number[1] == 0) {
					printf("%d / %d = ?\n", number[0], number[1] + 1);
				}
			}

			else {
				if (number[0] == 0) {
					printf("%d / %d = ?\n", number[1], number[0] + 1);
				}
			}
		}

		int answer;

		scanf_s("%d", &answer);

		if (giho == 0) {
			if (answer == number[0] + number[1]) {
				printf("정답!\n");
			}

			else {
				printf("땡! 정답은 %d\n", number[0] + number[1]);
			}
		}

		else if (giho == 1) {
			if (answer == abs(number[0] - number[1])) {
				printf("정답!\n");
			}

			else {
				printf("땡! 정답은 %d\n", abs(number[0] - number[1]));
			}
		}

		else if (giho == 2) {
			if (answer == number[0] * number[1]) {
				printf("정답!\n");
			}

			else {
				printf("땡! 정답은 %d\n", number[0] * number[1]);
			}
		}

		else if (giho == 3) {
			if (number[0] > number[1]) {
				if (number[1] == 0) {
					if (answer == number[0] / (number[1] + 1)) {
						printf("정답!\n");
					}

					else {
						printf("땡! 정답은 %d\n", number[0] / (number[1] + 1));
					}
				}
				else {
					if (answer == number[0] / number[1]) {
						printf("정답!\n");
					}

					else {
						printf("땡! 정답은 %d\n", number[0] / number[1]);
					}
				}
			}

			else if (number[1] > number[0]) {
				if (number[0] == 0) {
					if (answer == number[1] / (number[0] + 1)) {
						printf("정답!\n");
					}

					else {
						printf("땡! 정답은 %d\n", number[1] / (number[0] + 1));
					}
				}
				else {
					if (answer == number[1] / number[0]) {
						printf("정답!\n");
					}

					else {
						printf("땡! 정답은 %d\n", number[1] / number[0]);
					}
				}
			}
		}
				
		printf("\n\n");
	}

	return 0;
}