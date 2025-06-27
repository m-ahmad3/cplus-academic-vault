#include<iostream>
#include"stack.h"
#include"stack.cpp"
using namespace std;
float scanNum(char ch) {
    return static_cast<float>(ch - '0');
}

int isOperator(char ch) {
    if (ch == '+' || ch == '-' || ch == '*' || ch == '/' || ch == '%') {
        return 1;
    }
          
    return -1;   
}
int isOperand(char ch) {
    if (ch >= '0' && ch <= '9') {
        return 1;
    }
       
    return -1;   
}
float operation(int a, int b, char op) {
    if (op == '+')
        return b + a;
    else if (op == '-')
        return b - a;
    else if (op == '*')
        return b * a;
    else if (op == '/')
        return b / a;
    else
        return -1;    
}

float postfixEval(char postfix[]) {
    int a, b;
    stack<float> stk;
    for (int i = 0; postfix[i] != '\0'; i++) {
        if (isOperator(postfix[i]) != -1) {
            a = stk.top();
            stk.pop();
            b = stk.top();
            stk.pop();
            stk.push(operation(a, b, postfix[i]));
        }
        else if (isOperand(postfix[i]) > 0) {
            stk.push(scanNum(postfix[i]));
        }
    }
    return stk.top();
}


int main() {
    char post[] = "23(4+5)*6/+";
    cout << "THE POST EXPRESSION IS=" << post << endl;
    cout << "The result is: " << postfixEval(post) << endl;
    return 0;
}
