#include <stdio.h>
int D, H, M;
int main() {
	scanf("%d %d %d", &D, &H, &M);
	int a = 11 * 60 * 24 + 11 * 60 + 11;
	int b = D * 60 * 24 + H * 60 + M;

	int res = b - a;

	printf("%d", res >= 0 ? res : -1);
}
 
