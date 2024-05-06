#include <iostream>
#define MAX_SIZE 100 // Maximum size of the static list

using namespace std;

class StaticList {
private:
    int arr[MAX_SIZE];
    int size;
public:
    StaticList() {
        size = 0;
    }

    bool isEmpty() {
        return size == 0;
    }

    bool isFull() {
        return size == MAX_SIZE;
    }

    void insert(int value) 
    {
        if (!isFull()) 
        {
            arr[size++] = value;
            cout << "Inserted " << value << " into the static list." << endl;
        } else 
        {
            cout << "Static list is full. Cannot insert." << endl;
        }
    }

    void display() {
        cout << "Static List: ";
        for (int i = 0; i < size; ++i) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};

int main() {
    StaticList sList;
    sList.insert(10);
    sList.insert(20);
    sList.insert(30);
    sList.display();

    return 0;
}
