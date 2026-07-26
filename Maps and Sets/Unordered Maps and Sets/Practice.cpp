#include <iostream>
using namespace std;
#define MAX 100

// Custom stack implementation
struct Stack
{
    int data[MAX];
    int top;

    Stack() { top = -1; }

    bool isEmpty() { return top == -1; }

    bool isFull() { return top == MAX - 1; }

    void push(int value)
    {
        if (isFull())
        {
            cout << "Stack Overflow\n";
            return;
        }
        data[++top] = value;
    }

    int pop()
    {
        if (isEmpty())
        {
            cout << "Stack Underflow\n";
            return -1;
        }
        return data[top--];
    }

    int peek()
    {
        if (isEmpty())
        {
            cout << "Stack is Empty\n";
            return -1;
        }
        return data[top];
    }
};

int partition(int arr[], int low, int high)
{
    int pivot = arr[high];
    int i = low - 1;
    for (int j = low; j < high; j++)
    {
        if (arr[j] < pivot)
        {
            i++;
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[i + 1], arr[high]);
    return i + 1;
}

void Quicksort(int arr[], int n)
{
    Stack stackLow, stackHigh;

    stackLow.push(0);
    stackHigh.push(n - 1);

    while (!stackLow.isEmpty())
    {
        int high = stackHigh.pop();
        int low = stackLow.pop();

        int p = partition(arr, low, high);

        // Push right subarray
        if (p + 1 < high)
        {
            stackLow.push(p + 1);
            stackHigh.push(high);
        }

        // Push left subarray
        if (p - 1 > low)
        {
            stackLow.push(low);
            stackHigh.push(p - 1);
        }
    }
}

void Print(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    int arr[] = {10, 7, 8, 9, 1, 5};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Original Array : ";
    Print(arr, n);

    Quicksort(arr, n);
    cout << "Sorted array : ";
    Print(arr, n);
}