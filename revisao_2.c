#include <stdio.h>
#include <string.h>

typedef struct livro {
    int id;
    char titulo[100];
    char autor[100];
    int ano;
} Livro;


Livro setLivro (int id, char *titulo, char *autor, int ano) {

    Livro newBook;

    newBook.id = id;
    strcpy(newBook.titulo, titulo);
    strcpy(newBook.autor, autor);
    newBook.ano = ano;
    
    return newBook;
}

char* getAuthor(Livro *thatBook) {
    return thatBook -> autor;
}

int main() {


    Livro result;

    result = setLivro(10,"Bananas","TheLivingOne",2004);

    printf("%d %s %s %d \n", result.id, result.titulo, result.autor, result.ano);

    printf("%s \n", getAuthor(&result));

    

    return 0;
}
