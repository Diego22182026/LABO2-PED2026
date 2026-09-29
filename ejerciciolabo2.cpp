#include <iostream>
#include <string>

struct Inventario{
    
    int codigo;
    std:: string nombre;
    double precio;
    Inventario *siguiente;
    Inventario *anterior;
};

void eliminarIntermedio(Inventario *&head, int id){

    if(head==nullptr){
        std::cout<<"La lista de productos esta vacia\n";
        return;
    }

    //Si el producto esta en el primer inventario
    if (head->codigo==id){
        Inventario *temp = head;

        head = head->siguiente;

        if (head!=nullptr){
            head->anterior=nullptr;
        }

        delete temp;
        return;
    }

    Inventario *current = head;

    while(current->siguiente != nullptr && current->siguiente->codigo != id)
    {
        current = current->siguiente;
    }

    //Si el producto no es encontrado
    if(current->siguiente == nullptr && current->codigo != id)
    {
        std::cout<<"El producto no se encontro en la lista\n";
        return;
    }

    //Si el producto es encontrado
    if(current->siguiente!=nullptr){
        Inventario *temp = current->siguiente;
        current->siguiente = current->siguiente->siguiente;

    if(current->siguiente!=nullptr){
        current->siguiente->anterior = current;
    }
    delete temp;
    }
};

int main (){



    return 0;
}