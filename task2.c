#include <stdio.h>


int main(){
    int start, count;
    int end, weght;
    weght=4;
    scanf("%d", &start);
    scanf("%d", &end);

    
    for (int i = 0; i < start-1; i++)
    {
        printf("%*s ", weght, "");
    }
    


    for (int i = 1; i <= end; i++)
    {
        if (start % 8 == 0)
        {
            printf("\n");
            start=1;
        }
        
        start++;
        printf("%*d ",weght,i );
        

        
    }
    
}