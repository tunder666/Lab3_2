#include <iostream>
#include <string.h>

using namespace std;

void task1()
{
    cout << "ENTER ARRAY\n\n";

    int arr_size;
    cout << "Enter size of array: ";
    cin >> arr_size;

    int* arr = new int[arr_size];
    for (int i = 0; i < arr_size; i++) {
        cout << i + 1 << ". ";
        cin >> arr[i];
    }
    cout << "You entered " << arr_size << " elements of the array" << endl;
    system("pause");
}



void task2()
{
    

    system("pause");
}


void task3()
{
    cout << "task 3 " << endl;
    system("pause");
}
void task4()
{
    cout << "task 4 " << endl;
    system("pause");
}


int main()
{
    int choice = 0;
    while (true)
    {
        system("CLS");//clear console
        cout << "===========================\n";
        cout << "1. Task 1\n" << "2. Task 2\n" << "3. Task 3\n" << "4. Task 4\n" << "5. Exit\n";
        cout << "What do you want to choose? ";
        cin >> choice;
        cout << "===========================\n\n";
        switch (choice)
        {
        case 1:
        {
            task1();
            break;
        }
        case 2:
        {
            task2();
            break;
        }
        case 3:
        {
            task3();
            break;
        }
        case 4:
        {
            task4();
            break;
        }
        default:
        {
            return 0;
        }
        }
    }
}