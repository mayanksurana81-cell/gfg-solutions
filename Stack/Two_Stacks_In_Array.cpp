 /*
Category: Stack, Array Implementation

Approach:
- Two stacks are implemented inside a single array.
- stack1 grows from left to right using top1.
- stack2 grows from right to left using top2.
- Before every push operation:
  - Check if there is space available between the two tops.
- Push and pop operations update their respective top pointers independently.
- This approach efficiently utilizes array space by allowing both stacks
  to grow dynamically toward each other.

Time Complexity: O(1)
Space Complexity: O(1)
 */
class twoStacks {
    int arr[100];
    int top1 , top2;
    int size = 100;
  public:

    twoStacks() {
        top1 = -1;
        top2 = size;
    }

    // Function to push an integer into the stack1.
    void push1(int x) {
        // code here
        if(top1 + 1 == top2) return;
        top1++;
        arr[top1] = x;
    }

    // Function to push an integer into the stack2.
    void push2(int x) {
        // code here
        if(top2 - 1 == top1) return;
        top2--;
        arr[top2] = x;
    }

    // Function to remove an element from top of the stack1.
        
    int pop1() {
        // code here
        if(top1 == -1) return -1;
        return arr[top1--];
        
    }

        
    // Function to remove an element from top of the stack2.
    int pop2() {
        // code here
        if(top2 == size) return -1;
        return arr[top2++];
    }
};