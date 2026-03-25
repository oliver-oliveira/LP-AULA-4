#include <stdio.h>
 int main () {
    int x;
    int y;
    int t;
    
    printf("Digite horas trabalhadas:");
    scanf("%d", &x);
    
    printf("Digite minutos:");
    scanf("%d", &y);
    
    printf("horas trabalhadas:%d\n minutos:%d\n",x,y);
     
     t=x*60+x;
     printf("total:%d\n",t);
     
     if(t>=480) {
         printf("quantidade adicionada ao banco de horas:%d",480-t);
     }
     else(t<480); {
         printf("quantidade retirada do banco de horas:%d",480-t);
     }
     return 0;
    
}