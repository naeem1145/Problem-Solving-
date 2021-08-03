#include <stdio.h>
int main()
{
    int n, hour, minute, second;
    scanf("%d", &n);

    hour = n / 3600;
    printf("%d:", hour);
    n = n % 3600;

    minute = n / 60;
    printf("%d:", minute);
    n = n % 60;

    second = n;
    printf("%d\n", second);

    return 0;
}
