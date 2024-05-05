/* Programmer:Muhammad Ali 23K-0052
* Date: 04/05/24
* Descrption:Matrix calculator based on templates
*/

#include <iostream>

using namespace std;

template <typename T>

class matrix{
protected:
    
    int rows, cols;
    T **mat;

public:

    matrix(int x, int y){
        rows = x;
        cols = y;
        
        if(!(x == y)) rows = cols; 

        mat = new T *[rows];
        for (int i = 0; i < rows; ++i) {
            mat[i] = new T[cols];
            for (int j = 0; j < cols; j++){
                mat[i][j] = T();
        
            }    
        }
    }

    ~matrix<T>() {
        for (int i = 0; i < rows; i++)
            delete[] mat[i];
    }


    void setvalue(int row, int col, T value) {mat[row][col] = value; }
    T getvalue(int row, int col) {return mat[row][col];}



    matrix<T>& operator * (const matrix<T>& obj){

        T temp[this->rows][this->cols] = { T() };

        //multipying 
        for (int x = 0; x < rows; x++)
            for (int y = 0; y < cols; y++)
                for (int z = 0; z < rows; z++)
                    temp[x][y] += mat[x][z] * obj.mat[z][y];

        
        //transfering
        for (int i = 0; i < rows; ++i)
            for (int j = 0; j < cols; ++j)
                mat[i][j] = temp[i][j];

        return *this;

    }

    matrix<T>& operator + (const matrix<T>& obj){

        for (int i = 0; i < rows; i++){
            for (int j = 0; j < cols; j++){
                this->mat[i][j] += obj.mat[i][j]; 
            }
            
        }
        
        return *this;

    }

    matrix<T>& operator - (const matrix<T>& obj){

        for (int i = 0; i < rows; i++){
            for (int j = 0; j < cols; j++){
                this->mat[i][j] -= obj.mat[i][j]; 
            }
            
        }
        
        return *this;

    }

    virtual void display() = 0;

};//end of base class


class intmatrix : public matrix<int>{

public:

    intmatrix(int rows, int cols) : matrix<int>(rows,cols) {}
    
    void display(){
        for (int i = 0; i < rows; i++){
            for (int j = 0; j < cols; j++){
                cout << mat[i][j] << " ";
            }
            
            cout << endl;
        }
        
    }
};

class doublematrix : public matrix<double>{

public:

    doublematrix(int rows, int cols) : matrix<double>(rows,cols) {}

    void display(){
        for (int i = 0; i < rows; i++){
            for (int j = 0; j < cols; j++){
                cout << mat[i][j] << " ";
            }
            
            cout << endl;
        }
        
    }
};



int main(){

    matrix<int> *int_matrix_1 = new intmatrix(2,2);
    matrix<int> *int_matrix_2 = new intmatrix(2,2);

    matrix<double>  *double_matrix_1 = new doublematrix(2, 2);
    matrix<double> *double_matrix_2 = new doublematrix(2, 2);

    int_matrix_1->setvalue(0, 0, 1);
    int_matrix_1->setvalue(0, 1, 2);
    int_matrix_1->setvalue(1, 0 ,3);
    int_matrix_1->setvalue(1, 1 ,4);

    int_matrix_2->setvalue(0, 0, 1);
    int_matrix_2->setvalue(0, 1, 2);
    int_matrix_2->setvalue(1, 0 ,3);
    int_matrix_2->setvalue(1, 1 ,4);

    double_matrix_1->setvalue(0, 0, 1.1);
    double_matrix_1->setvalue(0, 1, 2.2);
    double_matrix_1->setvalue(1, 0, 3.3);
    double_matrix_1->setvalue(1, 1, 4.4);

    double_matrix_2->setvalue(0, 0, 1.1);
    double_matrix_2->setvalue(0, 1, 2.2);
    double_matrix_2->setvalue(1, 0, 3.3);
    double_matrix_2->setvalue(1, 1, 4.4);

    int_matrix_1->display();

    cout << endl;

    double_matrix_1->display();
    cout << endl;

    (*int_matrix_1 + *int_matrix_2).display();
    cout << endl;
    (*int_matrix_1 - *int_matrix_2 - *int_matrix_2).display();
    cout << endl;
    (*int_matrix_1 * *int_matrix_2).display();
    cout << endl << endl;

    (*double_matrix_1 + *double_matrix_2).display();
    cout << endl;
    (*double_matrix_1 - *double_matrix_2 - *double_matrix_2).display();
    cout << endl;
    (*double_matrix_1 * *double_matrix_2).display();
    cout << endl;

    return 0;
}




