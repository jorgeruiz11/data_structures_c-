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
        */
        private:
          string element;
          Node *previous;
          Node *next;
        // Métodos/funciones de la clase nodo.
        public:
          Node(string);
    };

    // Atributos de la clase lista.
    private:
      Node head;
      Node tail;
      int length;
    // Métodos/funciones de la clase lista.
    public:
      int getLength();
};
    // Constructor de la clase nodo.
    List::Node::Node(string elem){
      this->element = elem;
    }

  // Método que nos regresa la longitud de  la lista.
  int List::getLength(){
    return length;
  }







// Main.
int main(){
  return 0;
}
