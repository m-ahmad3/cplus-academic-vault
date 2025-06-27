#include<iostream>
#include"stack.h"
#include"stack.cpp"
using namespace std;
int precedence(char s1) {
	if (s1 == '*' || s1 == '/' || s1 == '%') {
		return 2;
	}
	else if (s1 == '+' || s1 == '-') {
		return 1;
	}
	else {
		return -1;
	}
}
bool isOperand(char ch) {
    return (ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z');
}
void infixToPostfix(char s[]) {
    stack<char> stack_obj;
    char result[100];
    int index = 0;
    char c;
    for (int i = 0; s[i] != '\0'; i++) {
        c = s[i];
        if (isOperand(c) == true) {
            result[index++] = c;
        } 
        else if (c == '(') {
            stack_obj.push('(');
        }  
        else if (c == ')') {
            while (!stack_obj.isempty() && stack_obj.top() != '(') {
                result[index++] = stack_obj.top();
                stack_obj.pop();
            }
            if (!stack_obj.isempty()) {
                stack_obj.pop();
            }
        }
        else {
            while (!stack_obj.isempty() && precedence(c) <= precedence(stack_obj.top())) {
                result[index++] = stack_obj.top();
                stack_obj.pop();
            }
            stack_obj.push(c);
        }
    }

    while (!stack_obj.isempty()) {
        result[index++] = stack_obj.top();
        stack_obj.pop();
    }

    result[index] = '\0'; 
    cout << result << endl;
}
int main() {


    char array[] = "a+b*(c+d-e)+(f+g*h)-i";
    cout << "THE INFIX EXPRESSION IS::" << array << endl;
    cout << "THE POSTFIX EXPRESSION IS::";
    infixToPostfix(array);

	return 0;
}