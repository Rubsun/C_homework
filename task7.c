#include <stdio.h>

int main() {
    int n,nule=0,pol=0,otr=0,num;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &num);
        if (num==0)
        {
            nule++;
        }else if (num>0)
        {
            pol++;
        }else
        {
            otr++;
        }
        
        
        
    }
    printf("%d %d %d",nule,pol,otr);

}