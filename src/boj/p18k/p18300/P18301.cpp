#include <stdio.h>
 
static int a, b, c;
int main() {
    
    scanf("%d %d %d", &a, &b, &c);

    printf("%d", -1+(a+1)*(b+1)/(c+1));

}
