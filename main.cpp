#include <iostream>
#include "buffer.h"
#include <algorithm>
int main() {
    RingBuffer<int> v(3);
    v.push_back(501);
    v.push_back(2);
    RingBuffer<int>::ConstIterator it (v.cbegin() + 1);
    std::cout << "before insert\n";
    for (auto x : v) {
        std::cout << x << ' ';
    }
    std::cout << "\nafter insert [1] 788\n";
    v.insert(it, 788);
    for (auto x : v) {
        std::cout << x << ' ';
    }
    std::cout << "\nv.front " << v.front();
    std::cout << "\nv.back " << v.back() << '\n';
    v.resize(6);
    std::cout << "resize + sort:\n";
    std::sort(v.begin(), v.end());
    for (auto x : v) {
        std::cout << x << ' ';
    }
    std::cout << '\n';
    std::cout << "\nv.front " << v.front();
    v.push_front(99999);
    std::cout << '\n';
    for (auto x : v) {
        std::cout << x << ' ';
    }
    std::cout << '\n';
    std::cout << "\nv.front " << v.front();
    v.pop_front();
    std::cout << '\n';
    for (auto x : v) {
        std::cout << x << ' ';
    }
    std::cout << "\ncapacity of buffer = " << v.capacity() << "\nsize of buffer = " << v.size();
    v.clear();
    std::cout << '\n';
    for (size_t i = 0; i < 3; i++) {
        if (!v.empty()) {
            std::cout << v[i] << ' ';
        } else {
            std::cout << "empty :(";
            break;
        }
    }

}
