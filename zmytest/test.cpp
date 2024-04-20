
// #include "..."
#include <iostream>

#include "tests/list.hpp"
#include "tests/vector.hpp"
#include "tests/queue.hpp"
#include "../container/container.hpp"
#include "../container/mappable.hpp"

#include <random>
/* ************************************************************************** */

using namespace std;

/* ************************************************************************** */

void mytest() {
    cout<<"WELCOME TO MY TEST!"<<endl;
    cout << "--------------TEST LIST--------------" << endl;
    // listInt();
    // listDouble();
    // listString();
    cout << "--------------TEST VECTOR--------------" << endl;
    //vectorInt();
    //vectorDouble();
    //vectorString();
    cout << "--------------TEST STACK--------------" << endl;
    cout << "--------------TEST QUEUE--------------" << endl;
    queueVecInt();
    queueLstInt();
    cout<<"END OF MY TEST! GOODBYE!"<<endl;
}
