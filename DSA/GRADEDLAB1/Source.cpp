#include <iostream>
#include "Stack.h"
using namespace std;

int checkPrecedence(char c) {
    if (c == '^') {
        return 3;
    }
    else if (c == '/' || c == '*') {
        return 2;
    }
    else if (c == '+' || c == '-') {
        return 1;
    }
    else {
        return -1;
    }
}

// infix to postfix expression
char* infixToPostfix(char infix[], int size) {
    Stack<char> st;
    
    char* postfix = new char[size];

    int ind = 0;    // Index for Result Array

    for (int a = 0; a < size; a++) {
        char scan = infix[a];

        if ((scan >= 'a' && scan <= 'z') || (scan >= 'A' && scan <= 'Z') || (scan >= '0' && scan <= '9')) {
            postfix[ind] = scan;
            ind++;
        }


        else if (scan == '(') {
            st.push('(');
        }
        
        else if (scan == ')') {
            while (st.top() != '(') {
                postfix[ind] = st.pop();
                ind++;
            }
            st.pop(); 
        }


        else {
            while ((!st.empty() && checkPrecedence(scan) < checkPrecedence(st.top())) ||
                  (!st.empty() && checkPrecedence(scan) == checkPrecedence(st.top()))) {
                postfix[ind] = st.pop();
                ind++;
            }
            st.push(scan); 
        }
    }

    while (!st.empty()) {
        postfix[ind] = st.pop();
        ind++;
    }
    postfix[ind] = '\0';

    return postfix;
}

int main() {


    char inf[] = "((A+B)-C*(D/E))+F";
    int size = 0;
    
    for (int a = 0; inf[a] != '\0'; a++) {
        size++;
    }

    char* result = infixToPostfix(inf, size);
    
    cout << "---Muhammad Ahmad---" << endl;
    cout << "Infix Expression: " << inf << endl;
    cout << "Result in PostFix: " << result << endl;

    return 0;
}
