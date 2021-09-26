#include <iostream>
using namespace std;

struct Vector {
    int size; 
    double * element;
};

struct Car {
    int model_year;
    double miles_per_gallon;
};

void vector_init(Vector &v, int s);
double read_and_sum(int s); 

int main() {
    cout << read_and_sum(3);
}

void vector_init(Vector &v, int s) {
    v.element = new double[s];  //Create a double array of size 's' inside of the struct, alloc'd to the heap
    v.size = s;
}

double read_and_sum(int s) {
    Vector v;
    vector_init(v, s);
    for (int i = 0; i < s; i++) {
        cin >> v.element[i];
    }

    double sum = 0;
    for (int i = 0; i < s; i++) {
        sum += v.element[i];
    }

    return sum;
}