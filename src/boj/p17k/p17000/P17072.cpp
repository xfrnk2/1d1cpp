#include <stdio.h>

int main(){
    int n, m, r, g, b;
    
    scanf("%d" "%d", &n, &m);
    
    for (int i = 1; i <= n; i++){
        for (int j = 1; j <= m; j++) {
            scanf("%d" "%d" "%d", &r, &g, &b);
            
            int t = 2126 * r + 7152 * g + 722 * b;
            if (0 <= t && t < 510000)
                printf("%c", 35);
            else if (510000 <= t && t < 1020000)
                printf("%c", 111);
            else if (1020000 <= t && t < 1530000)
                printf("%c", 43);
            else if (1530000 <= t && t < 2040000)
                printf("%c", 45);
            else
                printf("%c", 46);
        }
        printf("\n");
    }
}
