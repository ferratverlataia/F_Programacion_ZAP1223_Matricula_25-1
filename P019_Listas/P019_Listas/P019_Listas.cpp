// P019_Listas.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

template <class T> 
class nodo 
{
public:
    T dato;
    nodo* next;

};


int main()
{
    nodo<int> cabeza;
    nodo<int> Torso;
    nodo<int> Pies;
    cabeza.dato = 10;
    Torso.dato = 20;
    Pies.dato = 30;
    cabeza.next = &Torso;
    Torso.next = &Pies;
    Pies.next = NULL;

    nodo<int>* explorador = &cabeza;

    while (explorador!=NULL) 
    {
        std::cout << explorador->dato<<std::endl;
        explorador = explorador->next;
    }

}

