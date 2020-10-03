#ifndef STACK_HPP
#define STACK_HPP

template <typename Elem_t>
class stack
{
private:
    Elem_t* data;
    int capacity;
    int size;
public:
    stack(int capacity = 100);
    ~stack();
    bool pop();
    bool push(Elem_t elem);
    bool isEmpty();
    int getSize() {return size;};
    int getCapacity() {return capacity;};
    // void StackDump()=0;
};

#endif //STACK_HPP
