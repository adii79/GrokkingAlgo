#include <iostream>

const int MAX = 100;

class Queue {
private:
    std::string data[MAX];
    int front, rear;

public:
    Queue() {
        front = 0;
        rear = 0;
    }

    bool isEmpty() {
        return front == rear;
    }

    bool isFull() {
        
        return (rear + 1) % MAX == front;
    }

    void push(const std::string& value) {
        if (isFull()) {
            std::cout << "Queue is full!\n";
            return;
        }
        data[rear] = value;
        rear = (rear + 1) % MAX;
    }

    std::string pop() {
        if (isEmpty()) {
            std::cout << "Queue is empty!\n";
            return "";
        }
        std::string val = data[front];
        front = (front + 1) % MAX;     //% MAX ensures that if rear reaches the end (MAX - 1), it wraps back to 0.
        return val;
    }

    std::string peek() {
        if (isEmpty()) return "";
        return data[front];
    }
};


int main() {
    Queue search_queue;
    search_queue.push("Alice");
    search_queue.push("Bob");

    while (!search_queue.isEmpty()) {
        std::string person = search_queue.pop();
        std::cout << "Checking: " << person << std::endl;
    }

    return 0;
}
