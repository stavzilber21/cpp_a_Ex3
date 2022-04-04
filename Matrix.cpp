
#include <iostream>
#include <vector>
#include <string>
#include "Matrix.hpp"
using namespace std;
using namespace zich;

namespace zich{
    Matrix::Matrix(vector<double> mat,int row, int col){}
    Matrix::~Matrix(){}
    Matrix operator+(const Matrix& mat1, const Matrix& mat2){
        return mat1;
    }
    Matrix operator+ (const Matrix& mat){
        return mat;
    }
    void operator+=(const Matrix& mat1, const Matrix& mat2){

    }

    Matrix operator- (const Matrix& mat1,const Matrix& mat2){
        return mat1;
    }
    Matrix operator- (const Matrix& mat){
        return mat;
    }
    void operator-= (Matrix& mat1,const Matrix& mat2){

    }

    bool operator< (const Matrix& mat1,const Matrix& mat2){
        return true;
    }
    bool operator<= (const Matrix& mat1,const Matrix& mat2) {
        return true;
    }
    bool operator> (const Matrix& mat1,const Matrix& mat2){
        return true;
    }
    bool operator>= (const Matrix& mat1,const Matrix& mat2){
        return true;
    }
    bool operator!=(const Matrix& mat1,const Matrix& mat2){
        return true;
    }
    bool operator== (const Matrix& mat1,const Matrix& mat2){
        return true;
    }

    Matrix operator++ (const Matrix& mat){
        return mat;
    }
    Matrix operator-- (const Matrix& mat){
        return mat;
    }

    Matrix operator* (const Matrix& mat1, const Matrix& mat2){
        return mat1;
    }
    Matrix operator* (Matrix& mat, double n){
        return mat;
    }
    Matrix operator* (double n, Matrix& mat){
        return mat;
    }

    Matrix operator*= (Matrix& mat,double n){
        return mat;
    }
    Matrix operator*= (double n,Matrix& mat){
        return mat;
    }

    ostream &operator<<(ostream &out, const Matrix &mat1){
        return out;
    }
    istream &operator>>(istream &in, Matrix &mat1){
        return in;
    }
}