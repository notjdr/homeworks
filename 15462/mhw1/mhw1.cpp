#include <iostream>
using namespace std;

#include <eigen3/Eigen/Dense>
using namespace Eigen;

/* Question. Solve systems of linear equation
1.2x + 3.4y + 5.6z = 36.4
7.8x + 9.0y + 1.2z = 87.6
3.4x + 5.6y + 7.8z = 62.8

x = ?
y = ?
z = ?
*/

// --- 

/* Given example
1x + 2y + 3z = 3
4x + 5y + 6z = 3
7x + 8y + 10z = 4

x = -2
y = 1
z = 1
*/

int main()
{

/*
    // TODO: define a Matrix A 
    double mat [3][3]= {
    { 1.2,3.4,5.6 },
    { 7.8,9.0,1.2 },
    { 3.4,5.6,7.8 }
    };

    // TODO: print all elements of matrix 
    for (int m1=0 ; m1<3 ; m1++){
    for (int m2=0 ; m2<3 ; m2++){
    cout << mat [m1][m2];
    cout << endl;
    }}
*/

    Eigen::Matrix3f A {
    { 1.2,3.4,5.6 },
    { 7.8,9.0,1.2 },
    { 3.4,5.6,7.8 }
    };

    Eigen::Vector3f b {
    {36.4, 87.6, 62.8}
    };

    Eigen::Vector3f x = A.colPivHouseholderQr().solve(b);
    cout << "Solution. " << endl << x << endl;

    return 0;
}