#include<stdio.h>
#include<string.h>

int main() {
	long int ans=0;
	char str[12]={'\0', };

	scanf("%s", str);
	for(int i=0, size = strlen(str);i<size;i++) {
		ans*= 26;
		ans+= 1 + str[i]-'A';
	}
	printf("%ld\n", ans);
}
