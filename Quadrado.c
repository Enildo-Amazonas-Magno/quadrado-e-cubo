#include <stdio.h>
int main()
{
    int number, i;
    scanf("%d", &number);

    i=0; 
    while(i!=number){
        i=i+1;
        printf("%d %d %d\n", i, i*i, i*i*i);
    }
    
    return 0;
}
