#include <iostream>
#include <math.h>
#include <ctime>
#include <cstdlib>
#include <iomanip>
#include <malloc.h>
using namespace std;

int main()
{
    const int n = 10;
    int a, b;
    srand(time(0));
    cout << "Input limits of array(a and b, a<b):" << endl;
    cin >> a >> b;

    int array[n];
    for (int i = 0; i < n - 1; i++) {
        array[i] = rand() % (b - a) + a;
    }

    cout << "Your array: " << endl;
    for (int i = 0; i < n - 1; i++) {
        cout << array[i] << "\t";
    }
    cout << endl;


    int min = array[0];
    for (int i = 0; i < n - 1; i++) {
        if (array[i]< min) {
            min = array[i];
        }
    }
    cout << "Min value of array: " << min << endl;


    int sum = 0, min1, max;
    for (int i = 0; i < n - 1; i++) {
        if (array[i] > 0) {
            min = i;
            break;
        }
    }
    for (int i = 0; i < n - 1; i++) {
        if (array[i] > 0) max = i;
    }
    for (int i = min + 1; i < max; i++){
        sum += array[i];
    }
    cout << "Sum of element between first plus element and last: " << sum << endl;
    return sum;
    cin >> sum;
}