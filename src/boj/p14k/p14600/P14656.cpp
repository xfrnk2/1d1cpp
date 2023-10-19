#include <stdio.h>

int main() {
    int N, cnt = 0;
    
    scanf("%d", &N);
    for (int i = 1; i <=N; i++) {
        int num;
        scanf("%d", &num);
        if (i != num) cnt++;
    }
    printf("%d", cnt);
}
