#include <iostream>
#include <stdexcept>
#include "Point.h"

using namespace std;

template <typename T>
class Queue {
private:
    T* data;
    size_t capacity;
    size_t front;
    size_t next;
    size_t count;

public:
    Queue(size_t size = 10);
    ~Queue();
    void enque(const T& item);
    T deque();
    size_t size() const;

    void clear() {
        front = next = count = 0;
    }

    friend ostream& operator<<(ostream& os, const Queue<T>& queue) {
        for (size_t i = 0; i < queue.count; ++i) {
            os << queue.data[(queue.front + i) % queue.capacity] << " ";
        }
        return os;
    }
};

template <typename T>
Queue<T>::Queue(size_t size) : capacity(size), front(0), next(0), count(0) {
    data = new T[capacity];
}

template <typename T>
Queue<T>::~Queue() {
    delete[] data;
}

template <typename T>
void Queue<T>::enque(const T& item) {
    if (count == capacity) {
        throw overflow_error("Queue is full");
    }
    data[next] = item;
    next = (next + 1) % capacity;
    count++;
}

template <typename T>
T Queue<T>::deque() {
    if (count == 0) {
        throw underflow_error("Queue is empty");
    }
    T item = data[front];
    front = (front + 1) % capacity;
    count--;
    return item;
}

template <typename T>
size_t Queue<T>::size() const {
    return count;
}