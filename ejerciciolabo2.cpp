#include <iostream>
#include <string>

struct Inventario{

    int codigo;
    std::string nombre;
    double precio;
    Inventario *siguiente;
    Inventario *anterior;

};

void Insert(Inventario *&head)
{
    Inventario nuevo;
    std::cout << "\n--- Agregar nuevo objeto ---\n";
    std::cout << "Codigo: " << std:: endl;
    std::cin >> nuevo.codigo;
        std::cout << std::endl;
    std::cout << "Nombre: " << std:: endl;
    std::cin >> nuevo.nombre;
        std::cout << std::endl;
    std::cout << "Precio: " << std:: endl;
    std:: cin >> nuevo.precio;
        std::cout << std::endl;

    Inventario *new_node = new Inventario;
    new_node->siguiente = head;
    new_node->anterior = nullptr;
    head->anterior=new_node;
    head = new_node;
}


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

void printList (Inventario* head){
    Inventario* current = head;

    while(current != nullptr){
        std:: cout << current->codigo && std:: cout << current->nombre && std:: cout << current->precio << "->";
        current = current->siguiente;
    }
    std:: cout << std:: endl;
}


int main (){

    Inventario* Lista1 = nullptr;

        int option = 0;

            do {
                std:: cout << "1. Insertar el inicio " << std:: endl;
                std:: cout << "2. Eliminar intermedio " << std:: endl;
                std:: cout << "3. Imprimir lista " << std:: endl;
                std:: cout << "4. Salir " << std:: endl;

                std:: cin >> option;

                    switch(option){

                        {case 1:
                            

                            //(Llamar a la funcion)

                            break;
                        }

                        {case 2:
                            int n;
                            std:: cout << "Ingrese el codigo del valor a eliminar: " << std:: endl;
                            std:: cin >> n;

                            //(Llamar a la funcion)
                        
                            break;
                        }

                        {case 3:
                            printList(Lista1);
                            break;
                        }

                        {case 4:
                            std:: cout << "Saliendo...Tenga un buen dia! " << std:: endl;
                            return 0;
                        }

                        {default:
                            std:: cout << "Opcion invalida, intente de nuevo " << std:: endl;
                        }

                    }
            }

            while (option >= 1 && option <=4);

    return 0;
}