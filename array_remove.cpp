#include <iostream>
using namespace std;

int *remove_all(int vals[], int size, int target, int *new_size) {
    if (new_size == NULL or size < 0) {
        return NULL;
    }

    *new_size = 0;
    for (int i = 0; i < size; i++) {
        if (vals[i] != target) {
            (*new_size)++;
        }
    }

    int *new_vals = new int[*new_size];
    int j = 0;
    for (int i = 0; i < size; i++) {
        if (vals[i] != target) {
            new_vals[j] = vals[i];
            j++;
        }
    }
    return new_vals;
}

void print_array(int vals[], int size) {
    cout << size << ": ";
    for (int i = 0; i < size; i++) {
        cout << vals[i] << " ";
    }
    cout << endl;
}

int main() {
    int a[] = {1, 2, 3, 4, 5, 6};
    int a_size = 6;
    int b_size;
    int *b = remove_all(a, a_size, 4, &b_size);
    print_array(a, a_size);
    print_array(b, b_size);

    int c[] = {1, 2, 2, 4, 5, 2};
    int c_size = 6;
    int d_size;
    int *d = remove_all(c, c_size, 2, &d_size);
    print_array(c, c_size);
    print_array(d, d_size);

    int e[] = {2, 2, 2, 2, 2, 2};
    int e_size = 6;
    int f_size;
    int *f = remove_all(e, e_size, 2, &f_size);
    print_array(e, e_size);
    print_array(f, f_size);

    int g[] = {2, 2, 2, 2, 2, 2};
    int g_size = 6;
    int h_size;
    int *h = remove_all(g, g_size, 1, &h_size);
    print_array(g, g_size);
    print_array(h, h_size);

    int i[] = {};
    int i_size = 0;
    int j_size;
    int *j = remove_all(i, i_size, 1, &j_size);
    print_array(i, i_size);
    print_array(j, j_size);

    return 0;
}

