#include <stdio.h>
#include <math.h>

int main(){
    int segundos, horasCalc, minutosCalc, segundosCalc;

    scanf("%d", &segundos);

    horasCalc = segundos/3600; 
    minutosCalc = (segundos % 3600) / 60;
    segundosCalc = (segundos % 3600) % 60;

    printf("%d:%d:%d\n", horasCalc, minutosCalc, segundosCalc);

return 0;

}
