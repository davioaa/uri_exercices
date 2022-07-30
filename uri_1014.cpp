//programa que calcula consumo de combustivel por km
#include <stdio.h>

int main(){
    int km;
    float combustivelGasto;

    scanf("%d %f", &km, &combustivelGasto);
    printf("%.3f km/l\n", km/combustivelGasto);

return 0;
}
