
#ifndef QUEUELST_HPP
#define QUEUELST_HPP

/* ************************************************************************** */

#include "../queue.hpp"
#include "../../list/list.hpp"

/* ************************************************************************** */

namespace lasd {

/* ************************************************************************** */

template <typename Data>
class QueueLst:virtual public Queue<Data>,virtual protected List<Data> {
  // Must extend Queue<Data>,
  //             List<Data>

private:

  // ...

protected:

  
  // ...

public:

  // Default constructor
  QueueLst();

  /* ************************************************************************ */

  // Specific constructor
  QueueLst(const TraversableContainer<Data>&); // A stack obtained from a TraversableContainer
  QueueLst(MappableContainer<Data>&&); // A stack obtained from a MappableContainer

  /* ************************************************************************ */

  // Copy constructor
  QueueLst(const QueueLst<Data>&);

  // Move constructor
  QueueLst(QueueLst<Data>&&)noexcept;

  /* ************************************************************************ */

  // Destructor
  virtual ~QueueLst()=default;

  /* ************************************************************************ */

  // Copy assignment
  const QueueLst<Data>& operator=(const QueueLst<Data>&);

  // Move assignment
  const QueueLst<Data>& operator=(QueueLst<Data>&&) noexcept;

  /* ************************************************************************ */

  // Comparison operators
  bool operator==(const QueueLst<Data>&) const noexcept;
  bool operator!=(const QueueLst<Data>&) const noexcept;

  /* ************************************************************************ */

  // Specific member functions (inherited from Queue)

  const Data& Head() const override; // Override Queue member (non-mutable version; must throw std::length_error when empty)
  Data& Head() override; // Override Queue member (mutable version; must throw std::length_error when empty)
  void Dequeue() override; // Override Queue member (must throw std::length_error when empty)
  Data HeadNDequeue() override; // Override Queue member (must throw std::length_error when empty)
  void Enqueue(const Data&) override; // Override Queue member (copy of the value)
  void Enqueue(Data&&) override; // Override Queue member (move of the value)

  /* ************************************************************************ */

  // Specific member function (inherited from ClearableContainer)

  using List<Data>::Clear;

protected:

  // Auxiliary functions, if necessary!

};

/* ************************************************************************** */

}

#include "queuelst.cpp"

#endif
