//calculo de menor quantidade de cedulas possiveis para x valor

#include <stdio.h>
#include <math.h>

int main(){

    int valor, nota100, nota50, nota20, nota10, nota5, nota2, nota1;
    int nota100temp, nota50temp, nota20temp, nota10temp, nota5temp, nota2temp;

    scanf("%d", &valor);

    nota100 = valor / 100;
    nota100temp = valor % 100; //o resto da divisão realiza o calculo da quantidade de cedulas do valor seguinte;
    
    nota50 = nota100temp / 50;
    nota50temp = nota100temp % 50;

    nota20 = nota50temp / 20;
    nota20temp = nota50temp % 20;
    
    nota10 = nota20temp / 10;
    nota10temp = nota20temp % 10;
    
    nota5 = nota10temp / 5;
    nota5temp = nota10temp % 5;
    
    nota2 = nota5temp / 2;
    nota2temp = nota5temp % 2;
    
    nota1 = nota2temp / 1;

    printf("%d\n", valor);
    printf("%d nota(s) de R$ 100,00\n", nota100);
    printf("%d nota(s) de R$ 50,00\n", nota50);
    printf("%d nota(s) de R$ 20,00\n", nota20);
    printf("%d nota(s) de R$ 10,00\n", nota10);
    printf("%d nota(s) de R$ 5,00\n", nota5);
    printf("%d nota(s) de R$ 2,00\n", nota2);
    printf("%d nota(s) de R$ 1,00\n", nota1);

return 0;
}
