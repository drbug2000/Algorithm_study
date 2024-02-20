#include <iostream>
#include <string>
using namespace std;

class Stack{
public:
    int *Top;
    int stack[10001];
    //
    Stack();
    bool push(int num);
    int pop();
    int size();
    bool empty();
    int top();
};

Stack::Stack(){
    Top =stack-1;
}

bool Stack::push(int num){
    Top++;
    *Top=num;
    return true;
}

int Stack::pop(){
    if(empty()){
        return -1;
    }
    return *Top--;
}
int Stack::size(){
    return (Top-stack) + 1 ;
}
bool Stack::empty(){
    if(Top<stack){
        return true;
    }else{
        return false;
    }

}
int Stack::top(){
    if(empty()){
        return -1;
    }
    return *Top;
}


int main(){
    
    int N;
    int num;
    string command;
    Stack *stack = new Stack();

    cin >> N;

    for(int i=0;i<N ;i++){
        cin >> command;
        if(command=="push"){
            cin >> num;
            stack->push(num);
        }else if(command=="pop"){
            cout << stack->pop() << endl;
        }else if(command=="size"){
            cout << stack->size() << endl;

        }else if(command=="empty"){
            cout << stack->empty() << endl;
        }else if(command == "top"){
            cout << stack->top() << endl;
        }else{
            cout << "command error : not in case" << endl;
        }
    }
    return 0;
}
