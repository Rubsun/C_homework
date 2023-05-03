#include <stdio.h>


int main(){
    int start;
    int end, weght;
    weght=4;
    scanf("%d", &start);
    scanf("%d", &end);
    for (int i = 1; i <= end; i++)
    {
        printf("%*d ",weght,i );
        if (i % 7 == 0)
        {
            printf("\n");
        }
        
    }
    
}