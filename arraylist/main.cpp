#include <iostream>

template <typename T>
class ArrayList {
private:
    T* arr;
    int capacity;
    int size;

public:
    ArrayList(int initialCapacity = 10) : capacity(initialCapacity), size(0) {
        arr = new T[capacity];
    }

    ~ArrayList() {
        delete[] arr;
    }

    void add(const T& element) {
        if (size == capacity) {
            // If the array is full, double its capacity
            capacity *= 2;
            T* newArr = new T[capacity];
            for (int i = 0; i < size; i++) {
                newArr[i] = arr[i];
            }
            delete[] arr;
            arr = newArr;
        }
        arr[size++] = element;
    }

    int getSize() const {
        return size;
    }

    T& operator[](int index) {
        if (index >= 0 && index < size) {
            return arr[index];
        } else {
            throw std::out_of_range("Index out of range");
        }
    }

    // Overload the << operator to print the whole array
    friend std::ostream& operator<<(std::ostream& os, const ArrayList<T>& list) {
        for (int i = 0; i < list.size; i++) {
            os << list.arr[i] << " ";
        }
        return os;
    }
};

int main() {
    ArrayList<int> list;

    for (int i = 1; i <= 15; i++) {
        list.add(i);
    }

    std::cout << "ArrayList: " << list << std::endl;

    return 0;
}
