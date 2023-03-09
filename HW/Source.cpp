#include <iostream>
#include <cmath>

using namespace std;

int main() {

    setlocale(LC_ALL, "RUSSIAN");
   
    double arr[9];
    for (int i = 0; i < 9; i++) 
    {
        cout << "Введите число: ";
        cin >> arr[i];
    }

  
    double new_arr[9];
    int new_arr_size = 0;
    for (int i = 0; i < 9; i++) 
    {
        if (abs(arr[i]) <= 12) 
        {
            new_arr[new_arr_size] = arr[i];
            new_arr_size++;
        }
    }

  
    int min_index = 0;
    int max_index = 0;
    for (int i = 1; i < new_arr_size; i++) 
    {
        if (new_arr[i] < new_arr[min_index]) 
        {
            min_index = i;
        }
        if (new_arr[i] > new_arr[max_index])
        {
            max_index = i;
        }
    }

  
    double temp = new_arr[min_index];
    new_arr[min_index] = new_arr[max_index];
    new_arr[max_index] = temp;

    cout << "Исходный массив:";
    for (int i = 0; i < 9; i++) 
    {
        cout << " " << arr[i];
    }
    cout << endl;

    cout << "Новый массив:";
    for (int i = 0; i < new_arr_size; i++) 
    {
        cout << " " << new_arr[i];
    }
    cout << endl;

    return 0;
}