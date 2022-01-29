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
        //quando chegar no �ltimo elemento o 9 -> ele ser� adicionado ao primeiro elemento da fila.
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
        //primeiro elemento da fila � o 9, pois no la�o de repeti��o ele foi alocado na primeira posi��o.
        aula.pop_front();
    }

    return 0;
}
