#include <iostream>
#include "doctest.h"
#include "Matrix.hpp"
#include <vector>
using namespace zich;
using namespace std;



std::vector<double> vec1 = {1,2,3,4,5,6,7,8,9};
std::vector<double> vec2 = {1,1,1,0,0,0,1,1,1};
std::vector<double> vec3 = {1,2,1,2};
std::vector<double> vec4 = {3,3,3,3};
std::vector<double> vec5 = {4,5,4,5};
std::vector<double> vec6 = {1,2,1,2};
std::vector<double> vec7 = {0,0,0,0};
std::vector<double> vec8 = {1,1,1,1};
std::vector<double> vec9 = {3,3,3,3};

Matrix mat1{vec1, 3, 3};
Matrix mat2{vec2, 3, 3};
Matrix mat3{vec3, 2, 2};
Matrix mat4{vec4, 2, 2};
Matrix mat5{vec5, 2, 2};
Matrix mat6{vec6, 2, 2};
Matrix mat7{vec7, 2, 2};
Matrix mat8{vec8, 2, 2};
Matrix mat9{vec9, 2, 2};
TEST_CASE("Good input") {
    CHECK(mat2<mat5);
    CHECK(mat3<mat1);
    CHECK(mat4>mat3);
    CHECK(mat1>mat2);
    CHECK(mat5==mat3+mat4);
    CHECK(mat4!=mat3);
    CHECK(mat1!=mat2);
    CHECK(mat6==mat3);
    CHECK(mat1!=mat2);
    CHECK(mat5-mat6==mat4);
    CHECK(mat3<=mat1);
    CHECK(mat4>=mat3);
    mat4+=mat3;
    CHECK(mat4==mat3);
    mat4-=mat3;
    mat5-=mat3;
    CHECK(mat4==mat5);
    CHECK_EQ(++mat7 == mat8, true);
    CHECK_EQ(--mat7 == mat8, false);
    mat8 *= 3;
    CHECK(mat8==mat9);
//    CHECK(cout << (mat2));
//    CHECK(cout << (--mat2));
}

TEST_CASE("Bad input") {
    CHECK_THROWS(mat1 + mat3);
    CHECK_THROWS(mat1 * mat3);
    CHECK_THROWS(mat1 += mat3);
    CHECK_THROWS(mat1 - mat3);
    CHECK_THROWS(mat1 -= mat3);

}