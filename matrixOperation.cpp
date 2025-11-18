#include <iostream>
using namespace std;

const int MAX = 100;

//////////--------- MAIN MENU

void addition(int m, int n, int p, int q, int matrix1[MAX][MAX], int matrix2[MAX][MAX])
{
    int matrixAddition[MAX][MAX];

    if (m == p && n == q)
    {
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                matrixAddition[i][j] = matrix1[i][j] + matrix2[i][j];
            }
        }
        cout << "\033[1;34m";
        cout << "RESULT OF ADDITION : " << endl
             << endl;
        cout << "\033[0m";
        cout << "\033[1;32m";
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cout << matrixAddition[i][j] << " ";
            }
            cout << endl;
        }
        cout << "\033[0m";
    }

    else
    {
        cout << "\033[1;31m";
        cout << "\033[1;31m" << "ADDITION CANNOT BE PERFORMED FOR THIS MATRIX DIMENSION !!" << endl
             << endl;
        cout << "\033[0m";
    }
}

void subtraction(int m, int n, int p, int q, int matrix1[MAX][MAX], int matrix2[MAX][MAX])
{
    int matrixSubtraction[MAX][MAX];

    if (m == p && n == q)
    {
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                matrixSubtraction[i][j] = matrix1[i][j] - matrix2[i][j];
            }
        }
        cout << "\033[1;34m";
        cout << "RESULT OF SUBTRACTION : " << endl
             << endl;
        cout << "\033[0m";
        cout << "\033[1;32m";
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cout << matrixSubtraction[i][j] << " ";
            }
            cout << endl;
        }
        cout << "\033[0m";
    }

    else
    {
        cout << "\033[1;31m";
        cout << "\033[1;31m" << "SUBTRACTION CANNOT BE PERFORMED FOR THIS MATRIX DIMENSION !!" << endl
             << endl;
        cout << "\033[0m";
    }
}

void multiplication(int m, int n, int p, int q, int matrix1[MAX][MAX], int matrix2[MAX][MAX])
{
    if (n != p)
    {
        cout << "\033[1;31m";
        cout << "\033[1;31m" << "MULTIPLICATION CANNOT BE PERFORMED FOR THIS MATRIX DIMENSION !!" << endl
             << endl;
        cout << "\033[0m";
    }
    else
    {
        int matrixMultiplication[m][q];
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < q; j++)
            {
                int sum = 0;
                for (int k = 0; k < n; k++)
                {
                    sum += matrix1[i][k] * matrix2[k][j];
                }
                matrixMultiplication[i][j] = sum;
            }
        }
        cout << "\033[1;34m";
        cout << "RESULT OF MULTIPLICATION : " << endl
             << endl;
        cout << "\033[0m";
        cout << "\033[1;32m";
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < q; j++)
            {
                cout << matrixMultiplication[i][j] << " ";
            }
            cout << endl;
        }
        cout << "\033[0m";
    }
}

//////////--------- CALC

void calc(int m, int n, int p, int q, int matrix1[MAX][MAX], int matrix2[MAX][MAX])
{
    cout << "\033[1;34m";
    cout << "________________________________________________________________________________________________________________________________________" << endl
         << endl;
    cout << "\033[0m";
    // int m,n;
    matrix1[m][n];
    cout << "FOR MATRIX 1 - " << endl
         << endl;
    cout << "ROWS : ";
    cin >> m;
    cout << "COLUMNS : ";
    cin >> n;
    cout << endl;
    // int p,q;
    matrix2[p][q];
    cout << "FOR MATRIX 2 - " << endl
         << endl;
    cout << "ROWS : ";
    cin >> p;
    cout << "COLUMNS : ";
    cin >> q;
    cout << endl;
    cout << "\033[1;33m" << "ENTER ELEMENTS OF MATRIX 1 : " << "\033[0m";
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> matrix1[i][j];
        }
    }
    cout << "\033[1;33m" << "ENTER ELEMENTS OF MATRIX 2 : " << "\033[0m";
    for (int i = 0; i < p; i++)
    {
        for (int j = 0; j < q; j++)
        {
            cin >> matrix2[i][j];
        }
    }

    cout << endl;
    cout << "MATRIX 1 :   " << endl;
    cout << "\033[1;32m";
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << matrix1[i][j] << " ";
        }
        cout << endl;
    }
    cout << "\033[0m";
    cout << endl;

    cout << "MATRIX 2 : " << endl;
    cout << "\033[1;32m";
    for (int i = 0; i < p; i++)
    {
        for (int j = 0; j < q; j++)
        {
            cout << matrix2[i][j] << " ";
        }
        cout << endl;
    }
    cout << "\033[0m";
    cout << endl
         << endl;

    ///////    ----------   ADDITION

    while (true)
    {
        cout << "________________________________________________________________________________________________________________________________________" << endl
             << endl;
        cout << "1. To ADD " << "\033[1;33m" << "       enter + " << "\033[0m" << endl;
        cout << "2. To SUBTRACT " << "\033[1;33m" << "  enter - " << "\033[0m" << endl;
        cout << "3. To MULTIPLY " << "\033[1;33m" << "  enter * " << "\033[0m" << endl;
        cout << "3. To EXIT " << "\033[1;33m" << "      enter EXIT " << "\033[0m" << endl;
        cout << endl;
        string inputCalc;
        cout << "--->  ";
        cin >> inputCalc;
        cout << endl;

        if (inputCalc == "+")
        {
            addition(m, n, p, q, matrix1, matrix2);
        }

        if (inputCalc == "-")
        {
            subtraction(m, n, p, q, matrix1, matrix2);
        }

        if (inputCalc == "*")
        {
            multiplication(m, n, p, q, matrix1, matrix2);
        }

        if (inputCalc == "EXIT")
        {
            cout << "\033[1;31m";
            cout << "\033[1;31m" << "EXITING THE CALC !!!" << endl
                 << endl;
            cout << "\033[0m";
            cout << "________________________________________________________________________________________________________________________________________" << endl
                 << endl;
            break;
        }
    }
}

/////////--------- TRANSPOSE

void transpose()
{
    cout << "\033[1;34m";
    cout << "________________________________________________________________________________________________________________________________________" << endl
         << endl;
    cout << "\033[0m";
    int m, n;
    cout << "ENTER THE MATRIX : " << endl
         << endl;
    cout << "\033[1;33m";
    cout << "ROW : ";
    cout << "\033[0m";
    cout << "\033[1;34m";
    cin >> m;
    cout << "\033[0m";
    cout << "\033[1;33m";
    cout << "COLUMN : ";
    cout << "\033[0m";
    cout << "\033[1;34m";
    cin >> n;
    cout << "\033[0m";
    int matrix[MAX][MAX];
    cout << endl;
    cout << "ENTER ELEMENTS OF MATRIX : ";
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> matrix[i][j];
        }
    }
    cout << endl
         << endl;
    cout << "\033[1;31m";
    cout << "MATRIX YOU ENETRED : " << endl
         << endl;
    cout << "\033[0m";
    cout << "\033[1;32m";
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
    cout << "\033[0m";

    cout << endl
         << endl;
    cout << "\033[1;31m";
    cout << "TRANSPOSE IS : " << endl
         << endl;
    cout << "\033[1;34m";
    int transpose[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            transpose[i][j] = matrix[j][i];
        }
    }
    cout << "\033[1;32m";
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << transpose[i][j] << " ";
        }
        cout << endl;
    }
    cout << "\033[0m";

    cout << endl
         << endl;
    cout << "\033[1;34m";
    cout << "________________________________________________________________________________________________________________________________________" << endl
         << endl;
    cout << "\033[0m";

    cout << endl
         << endl;
}

//////// -------- DETERMINANT

void determinant()
{
    cout << "\033[1;34m";
    cout << "________________________________________________________________________________________________________________________________________" << endl
         << endl;
    cout << "\033[0m";
    int m;
    cout << "ENTER SIZE OF THE MATRIX : " << endl
         << endl;
    cout << "\033[1;33m";
    cout << "SIZE : ";
    cout << "\033[0m";
    cout << "\033[1;34m";
    cin >> m;

    float matrix[MAX][MAX];
    cout << endl;
    cout << "ENTER ELEMENTS OF MATRIX : ";
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> matrix[i][j];
        }
    }
    cout << endl
         << endl;
    cout << "\033[1;31m";
    cout << "MATRIX YOU ENETRED : " << endl
         << endl;
    cout << "\033[0m";
    cout << "\033[1;32m";
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
    cout << "\033[0m";
    int res;
    if (m == 2)
    {
        res = matrix[0][0] * matrix[1][1] - matrix[0][1] * matrix[1][0];
        cout << "\033[1;31m";
        cout << "DETERMINANT IS : " << endl
             << endl;
        cout << "\033[1;34m";
        cout << res;
        cout << "\033[0m";
        cout << endl
             << endl;
    }
    if (m == 3)
    {
        int num1 = matrix[0][0] * (matrix[1][1] * matrix[2][2] - matrix[1][2] * matrix[2][1]);
        int num2 = matrix[0][1] * (matrix[1][0] * matrix[2][2] - matrix[1][2] * matrix[2][0]);
        int num3 = matrix[0][2] * (matrix[1][0] * matrix[2][1] - matrix[1][1] * matrix[2][0]);
        res = num1 - num2 + num3;
        cout << "\033[1;31m";
        cout << "DETERMINANT IS : " << endl
             << endl;
        cout << "\033[1;34m";
        cout << res;
        cout << "\033[0m";
        cout << endl
             << endl;
    }
    else
    {
        cout << "INVALID SIZE!!" << endl
             << endl;
    }
    cout << "\033[1;34m";
    cout << "________________________________________________________________________________________________________________________________________" << endl
         << endl;
    cout << "\033[0m";

    cout << endl
         << endl;
}

///////-------- INVERSE

void inverse()
{
    cout << "\033[1;34m";
    cout << "________________________________________________________________________________________________________________________________________" << endl
         << endl;
    cout << "\033[0m";
    int m;
    cout << "ENTER SIZE OF THE MATRIX : " << endl
         << endl;
    cout << "\033[1;33m";
    cout << "SIZE : ";
    cout << "\033[0m";
    cout << "\033[1;34m";
    cin >> m;

    float matrix[MAX][MAX];
    cout << endl;
    cout << "ENTER ELEMENTS OF MATRIX : ";
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> matrix[i][j];
        }
    }
    cout << endl
         << endl;
    cout << "\033[1;31m";
    cout << "MATRIX YOU ENETRED : " << endl
         << endl;
    cout << "\033[0m";
    cout << "\033[1;32m";
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
    cout << "\033[0m";

    // determinant
    int res;
    int co_factor[m][m];
    if (m == 2)
    {
        res = matrix[0][0] * matrix[1][1] - matrix[0][1] * matrix[1][0];
        if (res == 0)
        {
            cout << "INVERSE DOESN'T EXIST AS DETERMINANT IS EQUAL TO ZERO!!!" << endl
                 << endl;
        }
        else
        {
            for (int i = 0; i < m; i++)
            {
                for (int j = 0; j < m; j++)
                {
                    if (i != j)
                    {
                        co_factor[i][j] = -matrix[j][i];
                    }
                    else
                    {
                        co_factor[0][0] = matrix[1][1];
                        co_factor[1][1] = matrix[0][0];
                    }
                }
            }
        }
    }

    if (m == 3)
    {
        int num1 = matrix[0][0] * (matrix[1][1] * matrix[2][2] - matrix[1][2] * matrix[2][1]);
        int num2 = matrix[0][1] * (matrix[1][0] * matrix[2][2] - matrix[1][2] * matrix[2][0]);
        int num3 = matrix[0][2] * (matrix[1][0] * matrix[2][1] - matrix[1][1] * matrix[2][0]);
        res = num1 - num2 + num3;
        if (res == 0)
        {
            cout << "INVERSE DOESN'T EXIST AS DETERMINANT IS EQUAL TO ZERO!!!" << endl
                 << endl;
        }
        else
        {
            co_factor[0][1] = -(matrix[1][0] * matrix[2][2] - matrix[1][2] * matrix[2][0]);
            co_factor[0][0] = matrix[1][1] * matrix[2][2] - matrix[1][2] * matrix[2][1];
            co_factor[0][2] = matrix[1][0] * matrix[2][1] - matrix[1][1] * matrix[2][0];
            co_factor[1][0] = -(matrix[0][1] * matrix[2][2] - matrix[0][2] * matrix[2][1]);
            co_factor[1][1] = matrix[0][0] * matrix[2][2] - matrix[0][2] * matrix[2][0];
            co_factor[2][0] = matrix[0][1] * matrix[1][2] - matrix[0][2] * matrix[1][1];
            co_factor[1][2] = -(matrix[0][0] * matrix[2][1] - matrix[0][1] * matrix[2][0]);
            co_factor[2][1] = -(matrix[0][0] * matrix[1][2] - matrix[0][2] * matrix[1][0]);
            co_factor[2][2] = matrix[0][0] * matrix[1][1] - matrix[0][1] * matrix[1][0];
        }
    }
    // adjoint of matrix
    int adjoint[m][m];
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < m; j++)
        {
            
                adjoint[i][j] = co_factor[j][i];
        
        }
    }
    cout << endl;
    // inverse
    if (res != 0)
    {
        cout << "\033[1;31m";
        cout << "INVERSE IS : " << endl
             << endl;
        cout << "\033[1;34m";
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cout << adjoint[i][j] << "/" << res << "  ";
            }
            cout << endl;
        }
        cout << "\033[1;34m";
        cout << "________________________________________________________________________________________________________________________________________" << endl
             << endl;
        cout << "\033[0m";

        cout << endl
             << endl;
    }
}
int main()
{

    cout << "\033[1;32m";
    cout << "________________________________________________________________________________________________________________________________________" << endl;
    cout << "--------------------------------------------------------- MATRIX PROGRAM ---------------------------------------------------------------" << endl;
    cout << "________________________________________________________________________________________________________________________________________" << endl;
    cout << "\033[0m";
    cout << endl
         << endl;

    //////////////  ------------ DECLARING VARIABLES

    int matrix1[MAX][MAX];
    int matrix2[MAX][MAX];
    int m, n, p, q;

    //////////////  ------------ OPTIONS
    while (true)
    {

        cout << "WHAT WOULD YOU LIKE TO PERFORM NOW ? " << endl
             << endl;
        cout << "1." << "\033[1;33m" << " MATRIX CALCULATION " << "\033[1;34m" << "         enter CALC" << endl;
        cout << "\033[0m";
        cout << "2." << "\033[1;33m" << " TRANSPOSE OF MATRIX " << "\033[1;34m" << "        enter TRANSPOSE" << endl;
        cout << "\033[0m";
        cout << "3." << "\033[1;33m" << " DETERMINANT OF MATRIX" << "\033[1;34m" << "       enter DETERMINANT" << endl;
        cout << "\033[0m";
        cout << "4." << "\033[1;33m" << " INVERSE OF A MATRIX " << "\033[1;34m" << "        enter INVERSE" << endl;
        cout << "\033[0m";
        cout << "5." << "\033[1;33m" << " TO EXIT THE PROGRAM " << "\033[1;34m" << "        enter EXIT" << endl;
        cout << "\033[0m";
        cout << endl;

        string inputOption;
        cout << "--->  ";
        cin >> inputOption;
        cout << endl
             << endl;

        if (inputOption == "CALC")
        {
            calc(m, n, p, q, matrix1, matrix2);
        }

        if (inputOption == "TRANSPOSE")
        {
            transpose();
        }

        if (inputOption == "DETERMINANT")
        {
            determinant();
        }

        if (inputOption == "INVERSE")
        {
            inverse();
        }

        if (inputOption == "EXIT")
        {
            cout << "\033[1;31m";
            cout << "EXITING THE PROGRAM..." << endl
                 << endl;
            cout << "\033[0m";

            break;
        }
    }
}