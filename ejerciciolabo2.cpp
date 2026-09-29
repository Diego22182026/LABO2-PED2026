#include <iostream>
#include <string>

struct Inventario{

    int codigo;
    std:: string nombre;
    double precio;
    Inventario *next;

};


void printList (Inventario* head){
    Inventario* current = head;

    while(current != nullptr){
        std:: cout << current->codigo && std:: cout << current->nombre && std:: cout << current->precio << "->";
        current = current->next;
    }
    std:: cout << std:: endl;
}


int main (){




    return 0;
}