#include <iostream>
#include <eigen3/Eigen/Dense>
using namespace Eigen;
using namespace std;
int main()
{
    Matrix<double,2,3> A;
    A << 1,2,3,
        4,5,6;
    cout << "源矩阵" << endl << A << endl;
    cout << "矩阵转置" << endl<< A.transpose() << endl;

    return 0;
}
