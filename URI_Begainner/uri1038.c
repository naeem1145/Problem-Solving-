#include <stdio.h>
#include <math.h>
int main()
{
    int x, y;
    float total = 0;

    scanf("%d %d", &x, &y);
    if(x == 1){
        total = (float)(4.00 * y);
    }
    else if(x == 2){
        total = (float)(4.50 * y);
    }
    else if(x == 3){
        total = (float)(5.00 * y);
    }
    else if(x == 4){
        total = (float)(2.00 * y);
    }
    else if(x == 5){
        total = (float)(1.50 * y);
    }

    printf("Total: R$ %.2f\n", total);
    
    return 0;
}
