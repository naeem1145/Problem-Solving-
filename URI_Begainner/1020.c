#include <stdio.h>
int main()
{
    int n, year, month, day;
    scanf("%d", &n);

    year = n / 365;
    printf("%d ano(s)\n", year);
    n = n % 365;

    month = n / 30;
    printf("%d mes(es)\n", month);
    n = n % 30;

    day = n % 30;
    printf("%d dia(s)\n", day);

    return 0;
}
