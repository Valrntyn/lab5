#include <iostream>
#include <math.h>
#include <ctime>
#include <cstdlib>
#include <iomanip>
#include <malloc.h>
using namespace std;

int main()
{
    double m, n, k, tmp;
    srand(time(0));
    cout << "You must input three numbers," << endl;
    cout << " -m is long of massiv A" << endl;
    cin >> m;
    cout << " -n is long of massiv B" << endl;
    cin >> n;
    cout << " -k is long of string in console" << endl;
    cin >> k;
    cout << endl;


    int* a = new int [m];
    for (int i = 0; i < m; i++) {
        a[i] = (double)(rand()) / RAND_MAX * (45 - (-45)) + (-45);
    }
    double *b = new double[n];
    for (int i = 0; i < n; i++) {
        cout << fixed << showpoint;
        cout << setprecision(3);
        b[i] = (double)(rand()) / RAND_MAX * (0 - (-5)) + (-5);
        
    }
    cout << "Array A, initial form :" << endl;
    int vector_sizea = _msize(a) / sizeof(int);
    for (int i = 0, j = 0; i < vector_sizea; i++, j++)
    {
        if (j == k)
        {
            cout << endl;
            j = 0;
        }
        cout << a[i] << " ";
    }
    cout << endl << endl;

    cout << "Array B, initial form :" << endl;
    int vector_sizeb = _msize(b) / sizeof(double);
    for (int i = 0, j = 0; i < vector_sizeb-1; i++, j++)
    {
        if (j == k)
        {
            cout << endl;
            j = 0;
        }
        cout << b[i] << " ";
    }
    cout << endl << endl;

    for (int i = 0; i < vector_sizea - 1; i++)
    {
        for (int j = 0; j <= vector_sizea - 2 - i; j++)
        {
            if (a[j] > a[j + 1])
            {
                tmp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = tmp;
            }
        }
    }
    for (int i = 0; i < vector_sizeb - 1; i++)
    {
        for (int j = 0; j <= vector_sizeb - 2 - i; j++)
        {
            if (b[j] > b[j + 1])
            {
                tmp = b[j];
                b[j] = b[j + 1];
                b[j + 1] = tmp;
            }
        }
    }


    cout << "Array A, sorted form :" << endl;
    vector_sizea = _msize(a) / sizeof(int);
    for (int i = 0, j = 0; i < vector_sizea; i++, j++)
    {
        if (j == k)
        {
            cout << endl;
            j = 0;
        }
        cout << a[i] << " ";
    }
    cout << endl << endl;
    cout << "Array B, sorted form :" << endl;
    vector_sizeb = _msize(b) / sizeof(double);
    for (int i = 0, j = 0; i < vector_sizeb; i++, j++)
    {
        if (j == k)
        {
            cout << endl;
            j = 0;
        }
        cout << fixed << showpoint;
        cout << setprecision(3);
        cout << b[i] << " ";
    }
    cout << endl << endl;
    cin >> m;
}