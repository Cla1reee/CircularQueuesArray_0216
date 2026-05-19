#include<iostream>
using namespace std;

class Queue {
private:
    static const int MAX = 3;
    int FRONT, REAR;
    int queue_array[MAX];

public:
    Queue() {
        FRONT = -1;
        REAR = -1;
    }
};

int main(){

}