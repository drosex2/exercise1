#ifndef MYQUEUE_HPP
#define MYQUEUE_HPP

/* ************************************************************************** */
#include "../../queue/vec/queuevec.hpp"
#include "../../queue/lst/queuelst.hpp"
#include "../../container/container.hpp"
#include "../../container/mappable.hpp"
#include "../../zlasdtest/container/mappable.hpp"
#include "../../zlasdtest/container/traversable.hpp"
#include "../container.hpp"
#include <random>
using namespace std;

void queueVecInt(){
    cout<<"--------------TEST QUEUEVEC INT--------------"<<endl;
    unsigned long size;
    default_random_engine gen(random_device{}()); 
    uniform_int_distribution<int> dist(1, 1000);
    
    cout<<"Inserisci quanti elementi inserire nella coda: ";
    cin>>size;
    lasd::QueueVec<int> que;
    cout<<"Creo e riempio di valori random la coda" <<endl;
    try{
        for(unsigned long i=0;i<size;i++){
            que.Enqueue(dist(gen));
        }
        cout<<"Dimensione: "<<que.Size()<<endl;
        cout<<"Head attuale: "<<que.Head()<<endl;
        for(unsigned long i=0;i<size/2;i++){
            que.Dequeue();
        }
        cout<<"Dimensione: "<<que.Size()<<endl;
        cout<<"Head dopo aver tolto la metà degli elementi: "<<que.Head()<<endl;
        cout<<"HeadNDequeue: "<<que.HeadNDequeue()<<" size: "<<que.Size()<<endl;
        unsigned long rand=dist(gen);
        for(unsigned long i=0;i<rand;i++){
            que.Enqueue(dist(gen));
        }
        cout<<"Dimensione: "<<que.Size()<<endl;
        cout<<"Head attuale: "<<que.Head()<<endl;
    }catch(exception& exc){
        cout<<exc.what()<<endl;
    }
    
}
void queueLstInt(){
    cout<<"--------------TEST QUEUELST INT--------------"<<endl;
    unsigned long size;
    default_random_engine gen(random_device{}()); 
    uniform_int_distribution<int> dist(1, 1000);
    
    cout<<"Inserisci quanti elementi inserire nella coda: ";
    cin>>size;
    lasd::QueueLst<int> que;
    cout<<"Creo e riempio di valori random la coda" <<endl;
    try{
        for(unsigned long i=0;i<size;i++){
            que.Enqueue(dist(gen));
        }
        
        cout<<"Head attuale: "<<que.Head()<<endl;
        for(unsigned long i=0;i<size/2;i++){
            que.Dequeue();
        }
        
        cout<<"Head dopo aver tolto la metà degli elementi: "<<que.Head()<<endl;
        cout<<"HeadNDequeue: "<<que.HeadNDequeue()<<endl;
        unsigned long rand=dist(gen);
        for(unsigned long i=0;i<rand;i++){
            que.Enqueue(dist(gen));
        }
        
        cout<<"Head attuale: "<<que.Head()<<endl;
    }catch(exception& exc){
        cout<<exc.what()<<endl;
    }
    
}


/* ************************************************************************** */
#endif