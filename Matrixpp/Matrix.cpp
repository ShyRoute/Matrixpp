#include "Matrix.h"

template <class T>
Matrix<T>::Matrix() {
    
}

template <class T>
Matrix<T>::Matrix(std::size_t row, std::size_t col) : row_(row), col_(col), matrix_(std::vector<std::vector<T>>(row, std::vector<T>(col, 0))) {

}

template <class T>
Matrix<T>::Matrix(std::size_t size) : row_(size), col_(size), matrix_(std::vector<std::vector<T>>(size, std::vector<T>(size, 0))) {

}

template <class T>
std::size_t Matrix<T>::GetRow() const {
    return row_;
}

template <class T>
std::size_t Matrix<T>::GetCol() const {
    return col_;
}
