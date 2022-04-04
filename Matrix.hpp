#include <iostream>
#include <string>
#include <stdexcept>
#include <vector>
using namespace std;
namespace zich{
    class Matrix {
    public:
        int row;
        int col;
        vector<double> matrix;
        Matrix(vector<double> matrix, int row, int col);
        ~Matrix();

        friend Matrix operator+(const Matrix& mat1, const Matrix& mat2);
        friend Matrix operator+ (const Matrix& mat);
        friend void operator+=(const Matrix& mat1, const Matrix& mat2);

        friend Matrix operator- (const Matrix& mat1,const Matrix& mat2);
        friend Matrix operator- (const Matrix& mat);
        friend void operator-= (Matrix& mat1,const Matrix& mat2);

        friend bool operator< (const Matrix& mat1,const Matrix& mat2);
        friend bool operator<= (const Matrix& mat1,const Matrix& mat2);
        friend bool operator> (const Matrix& mat1,const Matrix& mat2);
        friend bool operator>= (const Matrix& mat1,const Matrix& mat2);
        friend bool operator!=(const Matrix& mat1,const Matrix& mat2);
        friend bool operator== (const Matrix& mat1,const Matrix& mat2);

        friend Matrix operator++ (const Matrix& mat);
        friend Matrix operator-- (const Matrix& mat);

        friend Matrix operator* (const Matrix& mat1, const Matrix& mat2);
        friend Matrix operator* (Matrix& mat, double n);
        friend Matrix operator* (double n, Matrix& mat);

        friend Matrix operator*= (Matrix& mat,double n);
        friend Matrix operator*= (double n,Matrix& mat);

        friend ostream &operator<<(ostream &out, const Matrix &mat1);
        friend istream &operator>>(istream &in, Matrix &mat1);



    };
}