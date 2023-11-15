#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct {
  int dia;
  int mes;
  int ano;
} Date;

typedef struct Employee {
  int id;
  char name[41];
  double income;
  Date birthDate;
  struct Employee *next;
} Employee;

//a. Crie as estruturas indicadas, e crie o primeiro funcionário da lista encadeada; 1
//b. Adicione um segundo funcionário mantendo o encadeamento;
//c. Crie uma função que receba o ponteiro inicial da lista e imprima todos os elementos (funcionários)

// Considerando a estrutura proposta no exercício anterior, faça as seguintes adaptações em seu programa:
// a. O programa deve ler (do teclado) vários registros de funcionários (quando id for igual a 0 a entrada é finalizada).
// b. Use a mesma função implementada anteriormente e imprima a lista para ver se todos os elementos estão presentes
// c. Crie uma função para desalocar a memória de todas as instâncias de funcionário (nós da lista). 
// d. Super desafio: crie uma nova função que imprime a lista na ordem inversa

void showSimplyLinkedList(Employee *first) {
  Employee *aux = NULL;
  for(aux = first; aux != NULL; aux = aux->next) {
    printf("Employee id: %d, name: %s, income: %.2f\n",  aux->id, aux->name, aux->income);
  }
}

void showReverseSimplyLinkedList(Employee *first) {
  Employee *last = first;

  if (first->next == NULL) {
    printf("Employee id: %d, name: %s, income: %.2f\n", first->id, first->name, first->income);
    return;
  }

  showReverseSimplyLinkedList(first->next);
  printf("Employee id: %d, name: %s, income: %.2f\n", last->id, last->name, last->income);
}

void freeEmployees(Employee *first) {
  Employee *aux = first;

  while (aux != NULL) {
    Employee *next = aux->next;
    printf("Employee %s cleaned...\n", &aux->name);
    free(aux);
    aux = next;
  }
}


int main(){

  Employee *f, *aux, *first=NULL;
  
  for(int i = 0; ; i++) {
    f = (Employee*)malloc(sizeof(Employee));
    
    printf("Digite um id(0 para finalizar o programa): ");
    scanf("%d", &f->id);
    
    if(f->id == 0) {
        printf("Finalizando... \n");
        break;
    }
    
    printf("Digite um nome: ");
    scanf("%s", &f->name);

    printf("Digite um salário: ");
    scanf("%lf", &f->income);
    f->next = NULL;
    if(first == NULL) {
      first = f;
      aux = f;
    } else {
      aux->next=f;
      aux = f;
    }
  };

  showSimplyLinkedList(first);
  
  printf("\n");
  
  showReverseSimplyLinkedList(first);
  
  printf("\n");
  
  freeEmployees(first);
  
  return 0;
}