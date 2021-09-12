#include<bits/stdc++.h>
using namespace std;

class Queue {
    // Define the data members(if any) here.
    
    public:
    stack<int> input, output;
    Queue() {
        // Initialize your data structure here.
    }

    void enQueue(int val) {
        // Implement the enqueue() function.
        input.push(val);
    }

    int deQueue() {
        // Implement the dequeue() function.
           if(input.empty() && output.empty())
            return -1;
         int k;
        
           if(output.empty()) {
            while(!input.empty()) {
                output.push(input.top());
                input.pop();
            }
        }
        k = output.top();
        output.pop();
        return k;
    }

    int peek() {
        // Implement the peek() function here.
          if(input.empty() && output.empty())
            return -1;
        
          if(output.empty()) {
            while(!input.empty()) {
                output.push(input.top());
                input.pop();
            }
        }
        return output.top();
    }

    bool isEmpty() {
        // Implement the isEmpty() function here.
         return input.empty() && output.empty();
    }
};