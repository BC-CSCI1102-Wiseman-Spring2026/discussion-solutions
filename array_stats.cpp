#include <iostream>
using namespace std;

int get_values(float a[], int cap) {
    cout << "Enter up to " << cap << " numbers, ";
    cout << "or any negative to stop:" << endl; 

    int i;
    for (i = 0; i < cap; i++) {
        float tmp;
        cin >> tmp;
        if (tmp < 0) {
            break;
        }
        a[i] = tmp;
    }

    return i;
}

void calc_bounds(float a[], int size, float& lower, float &upper) {
    lower = a[0];
    upper = a[0];
    for (int i = 1; i < size; i++) {
        if (a[i] > upper) {
            upper = a[i];
        }
        if (a[i] < lower) {
            lower = a[i];
        }
    }
}

float calc_mean(float a[], int size) {
    float sum = 0;
    for (int i = 0; i < size; i++) {
        sum += a[i];
    }
    return sum / size;
}

void print_stats(float min, float max, float mean) {
    cout << "Min:  " << min << endl;
    cout << "Max:  " << max << endl;
    cout << "Mean: " << mean << endl;
}

int main() {
    int size = 20;
    float values[size];

    int actual_size = get_values(values, size);
    if (actual_size == 0) {
        cout << "No numbers provided!" << endl;
        return 0;
    }

    float min, max, mean;
    calc_bounds(values, actual_size, min, max);
    mean = calc_mean(values, actual_size);

    print_stats(min, max, mean);

    return 0;
}
