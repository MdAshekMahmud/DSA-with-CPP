#include <iostream>
#include <vector>
using namespace std;

class MaxHeap
{
private:
    vector<int> heap;

    void heapifyUp(int index)
    {
        while (index > 0 && heap[parent(index)] < heap[index])
        {
            swap(heap[parent(index)], heap[index]);
            index = parent(index);
        }
    }

    void heapifyDown(int index)
    {
        int largest = index;
        int leftChild = left(index);
        int rightChild = right(index);

        if (leftChild < heap.size() && heap[leftChild] > heap[largest])
            largest = leftChild;

        if (rightChild < heap.size() && heap[rightChild] > heap[largest])
            largest = rightChild;

        if (largest != index)
        {
            swap(heap[index], heap[largest]);
            heapifyDown(largest);
        }
    }

    int parent(int index) { return (index - 1) / 2; }
    int left(int index) { return 2 * index + 1; }
    int right(int index) { return 2 * index + 2; }

public:
    void insert(int value)
    {
        heap.push_back(value);
        heapifyUp(heap.size() - 1);
    }

    int extractMax()
    {
        if (heap.empty())
            throw runtime_error("Heap is empty");
        int maxValue = heap[0];
        heap[0] = heap.back();
        heap.pop_back();
        heapifyDown(0);
        return maxValue;
    }

    void printHeap()
    {
        for (int val : heap)
            cout << val << " ";
        cout << endl;
    }
};

int main()
{
    MaxHeap maxHeap;
    maxHeap.insert(10);
    maxHeap.insert(20);
    maxHeap.insert(5);
    maxHeap.insert(30);

    cout << "MaxHeap: ";
    maxHeap.printHeap();

    cout << "Extracted Max: " << maxHeap.extractMax() << endl;

    cout << "MaxHeap after extraction: ";
    maxHeap.printHeap();

    return 0;
}