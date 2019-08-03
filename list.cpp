#include<iostream>
#include<stdlib.h>
using namespace std;

// Clase para listas doblemente ligadas en C++.
class List{

    // Clase nodo.
    class Node{

        /* Aquí utilizamos apuntadores (*something) porque la clase nodo no puede saber
        que tamaño de memoria le va a asignar a sus atributos (previous y next), lo
        cual se soluciona con aputadores.

        Atributos de la clase nodo.
        Tuve que hacer los atributos publicos.
        */

        // Métodos/funciones de la clase nodo.
        public:
          string element;
          Node *previous;
          Node *next;
          Node(string);
    };

    // Atributos de la clase lista.
    private:
      Node *head;
      Node *tail;
      int length;
    // Métodos/funciones de la clase lista.
    public:
      int getLength();
      void addEnd(string);
};

    // Constructor de la clase nodo.
    List::Node::Node(string elem){
      this->element = elem;
    }

  // Método que nos regresa la longitud de  la lista.
  int List::getLength(){
    return length;
  }

  // Método que agrega al final de la lista el elemento dado.
  void List::addEnd(string element){
    Node *newNode = new Node(element);

    if(this->length == 0){
      this->head = this->tail = newNode;
      this->head->previous = NULL;
      this->tail->next = NULL;
    }else{
      this->tail->next = newNode;
      newNode->previous = tail;
      this->tail = newNode;
    }
    length++;
  }







// Main.
int main(){
  return 0;
}
