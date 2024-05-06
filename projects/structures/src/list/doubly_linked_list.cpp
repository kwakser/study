#include "double_linked_list.hpp"

#include <algorithm>
#include <stdexcept>

namespace PSkorynin{

	template<typename T>
	DoublyLinkedList<T>::~DoublyLinkedList() {
			while (begin) {
				delete std::exchange(begin, begin->next);
			}
			end = nullptr;
	}

	template<typename T>
	void DoublyLinkedList<T>::push_front(const T& value) noexcept {
		auto newnode = new node{ std::move(value) };
		if (begin) {
			begin->prev = newnode;
			newnode->next = begin;
			begin = newnode;
		}
		else {
			begin = end = newnode;
		}
	}

	template<typename T>
	void DoublyLinkedList<T>::push_back(const T& value) noexcept {
		auto newnode = new node{ std::move(value) };
		if (end) {
			end->next = newnode;
			newnode->prev = end;
			end = newnode;
		}
		else {
			begin = end = newnode;
		}
	}

	template<typename T>
	bool DoublyLinkedList<T>::has_item(const T& value) const noexcept {
		Node* current = begin;
		while (current != nullptr) {
			if (current->value == value) {
				return true;
			}
			current = current->next;
		}
		return false;
	}

	template<typename T>
	void DoublyLinkedList<T>::print() const noexcept {
		Node* current = begin;
		while (current != nullptr) {
			std::cout << ' ' << current->value;
			current = current->next;
		}
		std::cout << std::endl;
	}

	template<typename T>
	bool DoublyLinkedList<T>::remove_first(const T& value) noexcept {
		Node* current = begin;
		while (current != nullptr) {
			if (current->value == value) {
				if (current == begin) {
					begin = begin->next;
					if (begin != nullptr) {
						begin->prev = nullptr;
					}
					else {
						end = nullptr;
					}
				}
				else if (current == end) {
					end = end->prev;
					end->next = nullptr;
				}
				else {
					current->prev->next = current->next;
					current->next->prev = current->prev;
				}
				delete current;
				return true;
			}
			current = current->next;
		}
		return false;
	}

	template<typename T>
	int DoublyLinkedList<T>::size() const noexcept {
		int count = 0;
		Node* current = begin;
		while (current != nullptr) {
			count++;
			current = current->next;
		}
		return count;
	}
}