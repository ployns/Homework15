#include<stdio.h>
int main()
{
	int num;
	scanf_s("%d", &num);
	for (int i = 1; i <= num; i++) {
		for (int j = i; j <= num; j++) {
			if (i <= num) {
				printf("* ");
			}
			else {
				printf("  ");
			}
		}
		printf("\n");
	}
}