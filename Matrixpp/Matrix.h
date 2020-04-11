#ifndef MATRIX_H
#define MATRIX_H

#include <vector>

template<class T>
class Matrix {
    public:
    Matrix();
    Matrix(std::size_t row, std::size_t col);
    Matrix(std::size_t size);

    std::size_t GetRow() const;
    std::size_t GetCol() const;



    private:
    std::size_t row_ = 0, col_ = 0;
    std::vector<std::vector<T>> matrix_;
};

#endif // MATRIX_H
