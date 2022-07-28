#include <stdio.h>
#include <stdlib.h>

void input();
void inputError();
void calculos();
void output();

int totalClubes, totalJogos, totalTempo, totalJogadores;

int main(){
    input();
    if(totalClubes <= 1){
        inputError();
    }
    calculos();
    output();

    system("PAUSE");
    return 0;
}

void input(){
    printf("Informe o total de clubes que participarao do campeonato de futebol: ");
    scanf("%d", &totalClubes);
}

void inputError(){
    printf("\n");
    while(totalClubes <= 1){
        printf("Devem haver ao menos 2 clubes para a realizacao de um campeonato. Insira um total valido: ");
        scanf("%d", &totalClubes);
    }
    calculos();
}

void calculos(){
    //Total de jogos
    totalJogos = totalClubes * (totalClubes - 1);
    //Total de horas
    totalTempo = (90 * totalJogos) / 60;
    //Total de jogadores
    totalJogadores = 11 * totalClubes;
}

void output(){
    //Total de jogos
    printf("\nAo longo do campeonato, serao realizados um total de %d jogos, onde cada clube enfrentara o outro ao menos uma vez", totalJogos);
    //Total de horas
    printf("\n- Tempo total aproximado do campeonato, em horas: %d (90 minutos por jogo, descontando acrescimos)", totalTempo);
    //Total de jogadores
    printf("\n- Total de jogadores integrantes: %d (11 por clube)\n\n", totalJogadores);
}
