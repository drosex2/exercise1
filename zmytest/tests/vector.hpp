#ifndef MYVECTOR_HPP
#define MYVECTOR_HPP

/* ************************************************************************** */
#include "../../vector/vector.hpp"
#include "../../container/container.hpp"
#include "../../container/mappable.hpp"
#include "../../zlasdtest/container/mappable.hpp"
#include "../../zlasdtest/container/traversable.hpp"
#include "../container.hpp"
#include <random>
using namespace std;

void vectorInt(){
    cout<<"--------------TEST VECTOR INT--------------"<<endl;
    unsigned long size,index,value;
    default_random_engine gen(random_device{}()); 
    uniform_int_distribution<int> dist(1, 1000);
    lasd::SortableVector<int> vec;
    cout<<"Inserisci la dimensione del vettore: ";
    cin>>size;
    lasd::SortableVector<int> secVec(size);
    cout<<"Creo e riempio di valori random il vettore di dimensione: "<<size<<endl;
    for(unsigned long i=0;i<size;i++){
        secVec[i]=dist(gen);
    }
    cout<<"Ho riempito il vettore di valori random!"<<endl;
    cout<<"Copio il vettore in un altro vettore"<<endl;
    vec=secVec;
    cout<<((vec.Front()==secVec.Front()) ? "I due vettori hanno lo stesso front" : "I due vettori hanno front diverso!(errore nella copia)")<<endl;
    
    FoldPreOrder(vec,&FoldAdd<int>,0);
    FoldPostOrder(vec,&FoldAdd<int>,0);

    cout<<"Inserisci un indice: ";
    cin>>index;
    try{
        cout<<"Value: "<<vec[index]<<endl;
    }catch(exception& exc){
        cout<<exc.what()<<endl;
    }

    cout<<"Inserisci un valore da cercare nel vettore: ";
    cin>>value;
    cout << ((vec.Exists(value)) ? "Il valore "+to_string(value)+" e' presente" : "il valore "+to_string(value)+" non e' presente") << "!" << endl;
    vec.Sort();
    cout<<"Stampa del vettore dopo averlo ordinato:"<<endl;
    MapPreOrder(vec,&MapPrint<int>);
}
void vectorDouble(){
    cout<<"--------------TEST VECTOR DOUBLE--------------"<<endl;
    unsigned long size,index,value;
    default_random_engine gen(random_device{}()); 
    uniform_real_distribution<double> dist(1.0, 1000.0);
    lasd::SortableVector<double> vec;
    cout<<"Inserisci la dimensione del vettore: ";
    cin>>size;
    lasd::SortableVector<double> secVec(size);
    cout<<"Creo e riempio di valori random il vettore di dimensione: "<<size<<endl;
    for(unsigned long i=0;i<size;i++){
        secVec[i]=dist(gen);
    }
    cout<<"Ho riempito il vettore di valori random!"<<endl;
    cout<<"Copio il vettore in un altro vettore"<<endl;
    vec=secVec;
    cout<<((vec.Front()==secVec.Front()) ? "I due vettori hanno lo stesso front" : "I due vettori hanno front diverso!(errore nella copia)")<<endl;
    
    FoldPreOrder(vec,&FoldAdd<double>,0);
    FoldPostOrder(vec,&FoldAdd<double>,0);

    cout<<"Inserisci un indice: ";
    cin>>index;
    try{
        cout<<"Value: "<<vec[index]<<endl;
    }catch(exception& exc){
        cout<<exc.what()<<endl;
    }

    cout<<"Inserisci un valore da cercare nel vettore: ";
    cin>>value;
    cout << ((vec.Exists(value)) ? "Il valore "+to_string(value)+" e' presente" : "il valore "+to_string(value)+" non e' presente") << "!" << endl;
    vec.Sort();
    cout<<"Stampa del vettore dopo averlo ordinato:"<<endl;
    MapPreOrder(vec,&MapPrint<double>);
}

/* ************************************************************************** */
#endif