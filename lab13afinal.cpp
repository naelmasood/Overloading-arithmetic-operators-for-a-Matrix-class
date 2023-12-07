#include <iostream>

using namespace std;

class Matrix {
private:
    int x11, x12, x21, x22;

public:
    Matrix(int a, int b, int c, int d) : x11(a), x12(b), x21(c), x22(d) {}

    Matrix operator+(const Matrix& other) const {
        return Matrix(x11 + other.x11, x12 + other.x12, x21 + other.x21, x22 + other.x22);
    }
    Matrix operator-(const Matrix& other) const {
        return Matrix(x11 - other.x11, x12 - other.x12, x21 - other.x21, x22 - other.x22);
    }
    Matrix operator*(const Matrix& other) const {
        return Matrix(
            x11 * other.x11 + x12 * other.x21, x11 * other.x12 + x12 * other.x22, //add a comma 
            x21 * other.x11 + x22 * other.x21, x21 * other.x12 + x22 * other.x22
        );
    }
    void display() const {
        cout << x11 << "  " << x12 << endl;
        cout << x21 << "  " << x22 << endl;
    }
};

int main() {
    Matrix matrix1(1, 2, 3, 4);
    Matrix matrix2(5, 6, 7, 8);

    Matrix sumMatrix = matrix1 + matrix2;
    Matrix diffMatrix = matrix1 - matrix2;
    Matrix productMatrix = matrix1 * matrix2;

    cout << "Matrix 1:" << endl;
    matrix1.display();
    cout << endl;

    cout << "Matrix 2:" << endl;
    matrix2.display();
    cout << endl;

    cout << "Sum of Matrices:" << endl;
    sumMatrix.display();
    cout << endl;

    cout << "Difference of Matrices:" << endl;
    diffMatrix.display();
    cout << endl;

    cout << "Product of Matrices:" << endl;
    productMatrix.display();
    cout << endl;

    return 0;
    
    
    
    
}
