//Este implementacion nos permitira crear un estructura llamada queue
//Las operaciones que soporta seran enqueue "insertar un elemento"
//la operacion front "que nos devolvera el primer elemento en el queue"
//la operacion dequeue "que nos devolvera el primer elemento del queue y ademas borrara dicho elemento"
//la ultima funcion print_queue() nos servira para visualizar el contenido del queue
#include<stdio.h>
#include<stdlib.h>


//Anadiendo declaracion de funciones y estructura para implementar el QUEUE
typedef struct Node{
    int val;
    struct Node* next;
}Node;

void    enqueue(Node** front, int val);
int     dequeue(Node** front);
void    printQueue(Node** front);

int main(){
    
    printf("Implementacion de queue a traves de una lista ligada...\n");
    printf("Un queue es como la fila del super...\n");
    printf("Es una estructura FIFO es decir, el primer elemento en entrar es el primero en salir...\n");

    //Creando queue
    Node* my_queue = NULL;
    enqueue(&my_queue, 0);
    enqueue(&my_queue, 1);
    enqueue(&my_queue, 2);
    enqueue(&my_queue, 3);

    return 0;
}


void enqueue(Node** front, int val){
    if(*front == NULL){
        *front = (Node*)malloc(sizeof(Node));
        (*front)->val = val;
        (*front)->next = NULL;
    }
    else{
        Node* tmp = *front;
        Node* last = NULL;
        while( tmp != NULL){
            last = tmp;
            tmp = tmp->next;
        }
        last->next = (Node*)malloc(sizeof(Node));
        last->next->val = val;
        last->next->next = NULL;
    }
}
