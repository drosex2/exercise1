
namespace lasd {

/* ************************************************************************** */

//specific constructors
template <typename Data>
QueueLst<Data>::QueueLst(const TraversableContainer<Data>& container):List<Data>(container){};

template <typename Data>
QueueLst<Data>::QueueLst(MappableContainer<Data>&& container):List<Data>(std::move(container)){};

//copy constructor
template <typename Data>
QueueLst<Data>::QueueLst(const QueueLst<Data>& queueLstCopy):List<Data>(queueLstCopy){};

//move constructor
template<typename Data>
QueueLst<Data>::QueueLst(QueueLst<Data>&& queueLstMove) noexcept :List<Data>(std::move(queueLstMove)){};

//copy assignment
template<typename Data>
const QueueLst<Data>& QueueLst<Data>::operator=(const QueueLst<Data>& queueLstCopy){
    List<Data>::operator=(queueLstCopy);
    return *this;
}

//move assignment
template<typename Data>
const QueueLst<Data>& QueueLst<Data>::operator=(QueueLst<Data>&& queueLstMove) noexcept{
    List<Data>::operator=(std::move(queueLstMove));
    return *this;
}

//comparison operators
template<typename Data>
bool QueueLst<Data>::operator==(const QueueLst<Data>& queueLst) const noexcept {
   return QueueLst<Data>::operator==(queueLst);
}

template<typename Data>
bool QueueLst<Data>::operator!=(const QueueLst<Data>& queueLst) const noexcept{
   return QueueLst<Data>::operator!=(queueLst);
}

//member functions
template<typename Data>
const Data& QueueLst<Data>::Head() const {
    return List<Data>::Front();
}


template<typename Data>
Data& QueueLst<Data>::Head(){
    return List<Data>::Front();
}


template<typename Data>
void QueueLst<Data>::Dequeue(){
    List<Data>::RemoveFromFront();
}


template<typename Data>
Data QueueLst<Data>::HeadNDequeue(){
    return List<Data>::FrontNRemove();
}

template<typename Data>
void QueueLst<Data>::Enqueue(const Data& dato){
    List<Data>::InsertAtBack(dato);
}

template<typename Data>
void QueueLst<Data>::Enqueue(Data&& dato){
    List<Data>::InsertAtBack(std::move(dato));
}
/* ************************************************************************** */

}
