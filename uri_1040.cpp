//programa de calculo de media.

#include <stdio.h>

int main(){

    double nota1, nota2, nota3, nota4, notaExame, media, mediaExame;

    scanf("%lf %lf %lf %lf", &nota1, &nota2, &nota3, &nota4); //entrada notas do aluno
    media = (nota1*2 + nota2*3 + nota3*4 + nota4)/10; //calculo media do aluno
    printf("Media: %.1lf\n", media);

    if(media >= 7){
        printf("Aluno aprovado.\n");
    } else if(media < 5){
        printf("Aluno reprovado.\n");
    } else if((media >= 5) && (media < 7)){
        printf("Aluno em exame.\n");
        
        scanf("%lf", &notaExame); //entrada nota do exame
        printf("Nota do exame: %.1lf\n", notaExame);

        mediaExame = (notaExame + media)/2; //calculo media com exame

        if((mediaExame >= 0) && (mediaExame < 5)){
            printf("Aluno repovado.\n");
            printf("Media final: %.1lf\n", mediaExame);
        } else if (mediaExame >= 5) {
            printf("Aluno aprovado.\n");
            printf("Media final: %.1lf\n", mediaExame);
        }


    } 

return 0;
}
