#pragma once
#include <vector>
#include <memory>
#include <atomic>

template <typename T>
class ConcurrentQueue {
public:
    ConcurrentQueue(int max_capacity){
        max_cap = max_capacity;
        queue_.reserve(max_capacity);
        flags_.reserve(max_capacity);
        p_idx.store(0);
        c_idx.store(0);
    }
    ~ConcurrentQueue() = default;

    T& pop(){

    }

    void push(T&& t){
        if(p_idx == )
    }
private:
    std::vector<std::shared_ptr<T>> queue_;
    std::vector<atomic<bool>> flags_;
    atomic<int> p_idx;
    atomic<int> c_idx;
    const int max_cap;
};
