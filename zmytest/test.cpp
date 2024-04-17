
// #include "..."
#include <iostream>
#include "../list/list.hpp"
#include "list.hpp"
#include "../container/container.hpp"
#include "../container/mappable.hpp"

#include <random>
/* ************************************************************************** */

using namespace std;

/* ************************************************************************** */

void mytest() {
  cout<<"WELCOME TO MY TEST!"<<endl;
  
  int scelta;

    cout << "Seleziona un'opzione:1)list 2)vector 3)stack 4)queue: ";
    cin >> scelta;

    switch(scelta) {
        case 1:
            cout << "---TEST LIST---" << endl;
            listInt();
            listDouble();
            listString();
            break;
        case 2:
            cout << "---TEST VECTOR---" << endl;
            break;
        case 3:
            cout << "---TEST STACK---" << endl;
            break;
        case 4:
            cout << "---TEST QUEUE---" << endl;
            break;
        default:
            cout << "Opzione non valida" << endl;
            break;
    }
}
