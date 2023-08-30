#include <cstdio>

int main() {
  int n, r, c;    
	scanf("%d %d %d", &n, &r, &c);
	for (int i = 1; i <= n; ++i) {
		for (int j = 1; j <= n; ++j) {
			printf("%c", (r % 2) ^ (c % 2) != (i % 2) ^ (j % 2) ? '.' : 'v');
		}
		printf("\n");
	}
}
