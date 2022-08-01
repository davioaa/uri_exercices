#include <stdio.h>
#include <math.h>

using namespace std;

int main(){

    int tempo, velocidadeMedia;
    double combustivelNecessario, distancia;

    scanf("%d %d", &tempo, &velocidadeMedia);
    distancia = velocidadeMedia*tempo;
    combustivelNecessario = distancia/12;

    printf("%.3lf\n", combustivelNecessario);

return 0;
}
