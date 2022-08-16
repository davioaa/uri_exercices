#include <stdio.h>

int main(){
    int codigo, quantidade;
    double cachorroQuente, XSalada, XBacon, TorradaSimples, Refrigerante, preco, valorFinal;

    cachorroQuente = 4.00;
    XSalada = 4.50;
    XBacon = 5.00;
    TorradaSimples = 2.00;
    Refrigerante = 1.50;

    scanf("%d %d", &codigo, &quantidade);

    switch (codigo) {
case 1: {
    preco = cachorroQuente;
    break;}
case 2:{
    preco = XSalada;
    break;}
case 3:{
    preco = XBacon;
    break;}
case 4:{
    preco = TorradaSimples;
    break;}
case 5:{
    preco = Refrigerante;
    break;
    }
}
    valorFinal = quantidade * preco;
    printf("Total: R$ %.2lf\n", valorFinal);



return 0;
}
