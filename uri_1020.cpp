#include <stdio.h>

int main(){

    int dias, anosCalc, mesesCalc, mesesCalcTemp, diasCalc;

    scanf("%d", &dias);

    anosCalc = dias / 365;
    mesesCalcTemp = dias % 365;
    mesesCalc = mesesCalcTemp / 30;
    diasCalc = mesesCalcTemp % 30;

    printf("%d ano(s)\n", anosCalc);
    printf("%d mes(es)\n", mesesCalc);
    printf("%d dia(s)\n", diasCalc);

return 0;
}
