#ifndef MATRIX_HPP
#define MATRIX_HPP

class Matrix
{
private:
    int rows = 3;
    int cols = 3;

public:
    int getCols();

    //void setCols(int columns);

    int getRows();

    //void setRows(int rows);

    Matrix();
    Matrix(int rows, int cols);
};

#endif // !1