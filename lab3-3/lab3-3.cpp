#include<stdio.h>

int main() {
	int num;
	scanf_s("%d", &num);
	int num1 = num;
	int num2 = 2;
	int num3 = num;
	for (int i = 1; i <= (2 * num) - 1; i++) {
		if (i < num) {
			for (int j = 1; j <= 3; j++) {
				if (j == 1) {
					for (int n = 1; n <= i; n++) {
						printf("* ");
					}
				}
				if (j == 2) {
					for (int n = 1 + (2 * (num1 - 2)); n >= 1; n--) {
						printf("  ");
					}
				}
				if (j == 3) {
					for (int n = 1; n <= i; n++) {
						printf("* ");
					}
				}
			}
			printf("\n");
			num1--;
		}
		if (i == num) {
			for (int k = 1; k <= (2 * num) - 1; k++) {
				printf("* ");
			}
			printf("\n");
		}
		if (i > num) {
			int p;
			for (int q = 1; q <= 3; q++) {
				if (q == 1) {
					for (p = num3 - 1; p >= 1; p--) {
						printf("* ");
					}
				}
				if (q == 2) {
					for (p = 1 + (2 * (num2 - 2)); p >= 1; p--) {
						printf("  ");
					}
					num2++;
				}
				if (q == 3) {
					for (p = num3 - 1; p >= 1; p--) {
						printf("* ");
					}
				}
			}
			printf("\n");
			num3--;
		}
	}
	return 0;
}