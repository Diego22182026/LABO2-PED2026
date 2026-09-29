#include <iostream>
#include <string>

struct Inventario
{

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

int main()
{

    return 0;
}