#include "stack.hpp"

template <typename Elem_t>
stack<Elem_t>::stack(int capacity)
{
    this->size = 0;
    this->capacity = capacity;
    this->data = new Elem_t[capacity];
}

template <typename Elem_t>
stack<Elem_t>::~stack()
{
    this->size = 0;
    this->capacity = 0;
    delete[] this->data;
}



template <typename Elem_t>
bool stack<Elem_t>::isEmpty()
{
    return (size > 0);
}
