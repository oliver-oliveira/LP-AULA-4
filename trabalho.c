#include <stdio.h>
void main () {
    int x;
    int y;
    int t;
    int b;
    
    printf("Digite horas trabalhadas:");
    scanf("%d", &x);
    
    printf("Digite minutos:");
    scanf("%d", &y);
    
    printf("horas trabalhadas:%d\n minutos:%d\n",x,y);
     
     t=x*60;
     printf("total:%d",t);
     
     b=t-480;
     printf("banco:%d\n",b);
     
     if(t>=480) {
         printf("quantidade adicionada ao banco de horas:%d",b);
     }
    
}