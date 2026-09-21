class MyCircularQueue {
public:
    vector <int> q;
    int front=0;
    int rear=0;
    int size=0;
    int count=0;
    MyCircularQueue(int k) {
        size=k;
        q.resize(k);
        front=0;
        rear-0;
        count=0;
        
    }
    
    bool enQueue(int value) {
        if(isFull()){
            return false;
        }
        q[rear]=value;
        rear=(rear+1)%size;
        count++;
        return true;
    }
    
    bool deQueue() {
        if (isEmpty()){
            return false;
        }
        front=(front+1)%size;
        count--;
        return true;
    }
    
    int Front() {
        if (isEmpty()){
            return -1;
        }
        return q[front];
        
    }
    
    int Rear() {
         if (isEmpty()){
            return -1;
        }
        return q[(rear - 1 + size) % size];
    }
    
    bool isEmpty() {
        return count==0;;
    }
    
    bool isFull() {
        return count==size;
    }
};

/**
 * Your MyCircularQueue object will be instantiated and called as such:
 * MyCircularQueue* obj = new MyCircularQueue(k);
 * bool param_1 = obj->enQueue(value);
 * bool param_2 = obj->deQueue();
 * int param_3 = obj->Front();
 * int param_4 = obj->Rear();
 * bool param_5 = obj->isEmpty();
 * bool param_6 = obj->isFull();
 */