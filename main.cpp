#include <iostream>
#include <eigen3/Eigen/Dense>
using namespace Eigen;
using namespace std;
int main()
{
    Matrix<double,3,3> A;
    Matrix<double,3,3> B;
    Matrix<double,3,3> C;

    A << 1,2,3,
        4,5,6,
        7,8,9;
    
    B << 1,2,3,
        4,5,6,
        7,8,9;

    C << 1,2,-4,
        -2,2,1,
        -3,4,-2;

    cout << "源矩阵:" << endl << A << endl;
    cout << "矩阵转置:" << endl << A.transpose() << endl;
    cout <<  "逆矩阵:" << endl << A.inverse() << endl;
    cout << "矩阵C行列式的值：" << endl << C.determinant() << endl;
    return 0;
}
