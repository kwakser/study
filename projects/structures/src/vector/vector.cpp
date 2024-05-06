#include <iostream>
#include <stdexcept>

#include "vector.hpp"

namespace PSkorynin {
    template<typename T>
    Vector<T>::Vector() noexcept {
        arr = new T[capacity];
    }

    template<typename T>
    Vector<T>::~Vector() noexcept {
        delete[] arr;
    }

    template<typename T>
    void Vector<T>::push_back(const T& value) noexcept {
        if (len == capacity) {
            capacity *= 2;
            T* new_arr = new T[capacity];
            for (int i = 0; i < len; ++i) {
                new_arr[i] = arr[i];
            }
            delete[] arr;
            arr = new_arr;
        }
        arr[len++] = value;
    }

    template<typename T>
    bool Vector<T>::has_item(const T& value) const noexcept {
        for (int i = 0; i < len; ++i) {
            if (arr[i] == value) {
                return true;
            }
        }
        return false;
    }

    template<typename T>
    bool Vector<T>::insert(const int position, const T& value) {
        if (len == capacity) {
            capacity *= 2;
            T* new_arr = new T[capacity];
            for (int i = 0; i < position; ++i) {
                new_arr[i] = arr[i];
            }
            new_arr[position] = value;
            for (int i = position; i < len; ++i) {
                new_arr[i + 1] = arr[i];
            }
            delete[] arr;
            arr = new_arr;
        }

        if (position < 0 or position > len) {
            throw std::out_of_range("Error, vector is out of range");

        } else {
            for (int i = len; i > position; --i) {
                arr[i] = arr[i - 1];
            }
            arr[position] = value;
        }
        ++len;
        return true;
    }

    template<typename T>
    void Vector<T>::print() const noexcept {
        for (int i = 0; i < len; ++i) {
            std::cout << ' ' << arr[i];
        }
        std::cout << std::endl;
    }

    template<typename T>
    bool Vector<T>::remove_first(const T& value) noexcept {
        for (int i = 0; i < len; ++i) {
            if (arr[i] == value) {
                for (int j = i; j < len - 1; ++j) {
                    arr[j] = arr[j + 1];
                }
                --len;
                return true;
            }
        }
        return false;
    }

    template<typename T>
    int Vector<T>::size() const noexcept {
        return len;
    }
}
