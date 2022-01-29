#include <iostream>
#include <list>

using namespace std;

int main(){

    list<int> aula,teste;
    int tam;
    list<int>::iterator it;

    teste.push_front(9);
    teste.push_front(9);
    teste.push_front(9);
    teste.push_front(9);

    aula.merge(teste);

    tam=10;
    for(int i=0; i<tam; i++){
        aula.push_front(i);
        //quando chegar no último elemento o 9 -> ele será adicionado ao primeiro elemento da fila.
    }

    it=aula.begin();
    advance(it,3);
    aula.insert(it,0);

    aula.erase(--it);

    cout << "Tamanho da lista: " << aula.size() << "\n\n";

    //aula.clear.

    tam=aula.size();
    for(int i=0; i<tam; i++){
        cout << aula.front() << "\n";
        //primeiro elemento da fila é o 9, pois no laço de repetição ele foi alocado na primeira posição.
        aula.pop_front();
    }

    return 0;
}
