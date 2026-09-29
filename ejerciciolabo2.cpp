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
                            int n;
                            std:: cout << "Ingrese el codigo, nombre y precio del producto: " << std:: endl;
                            std:: cin >> n;

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