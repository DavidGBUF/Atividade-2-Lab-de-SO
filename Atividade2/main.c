#include <stdio.h>
#include <stdlib.h>
#include <sys/wait.h>
#include <unistd.h>

int main() {
  int n_processos, i;

  // Pergunta ao usuário quantos processos deseja criar
  printf("Quantos processos você deseja criar? ");
  scanf("%d", &n_processos);

  // Verifica se o número de processos é positivo
  if (n_processos <= 0) {
    printf("Erro: O número de processos deve ser positivo.\n");
    return 1;
  }

  // Cria os processos filhos
  for (i = 0; i < n_processos - 1; i++) {
    pid_t pid = fork();
    
    // Erro na criação do processo
    if (pid < 0) {
      printf("Erro ao criar o processo filho");
      return 1;
    }

    // Processo filho
    else if (pid == 0) {
      // Imprime o ID do processo filho
      printf("\nNumero de processo filho: %d\n", i+1);
      printf("Processo filho %d criado.\n", getpid());
      sleep(1);
      // Executa um programa hello )
      execl("./hello", "./hello", NULL);

      
      return 1;
    }
  }

  // Processo pai
  // Espera todos os processos filhos terminarem
  for (i = 0; i < n_processos; i++) {
    wait(NULL);
  }
  
  printf("Processo pai %d finalizado.\n", getpid());
  printf("Todos os processos  foram finalizados.\n");
  execl("./hello", "./hello", NULL);

  return 0;
}
