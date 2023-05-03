#include <stdio.h>


int main() {
    int count=0, num, sum=0;
    float res;
    while ((scanf("%d", &num))&&num!=0)
    {
        count++;
        sum+=num;
    }
    res = (float)sum / count;
    
    printf("%f", res);
}
