#include <stdio.h>
#include <time.h>
 
int main()
{
    time_t tt = time(NULL);
    struct tm tm = *gmtime(&tt);
    printf("%d \n%d \n%d", tm.tm_year + 1900, tm.tm_mon + 1, tm.tm_mday);
}
