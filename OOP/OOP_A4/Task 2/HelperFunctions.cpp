#include "HelperFunctions.h"

int strLength(const char* str) {
    int size = 0;
    for (int a = 0; str[a] != '\0'; a++) {
        size++;
    }

    return size;
}

void strCopy(char*& str1, const char* str2) {

    if (str2 != nullptr) {
        int size = strLength(str2);
        str1 = new char[size + 1];
        for (int a = 0; a < size; a++) {
            str1[a] = str2[a];
        }
        str1[size] = '\0';
    }
    else {
        str1 = nullptr;
    }
}

bool strCompare(const char* str1, const char* str2) {
    // Find the length of str2
    int size2 = strLength(str2);

    // Find the length of str1
    int size1 = strLength(str1);

    // Compare from the end of str1 to the end of str2
    int check = 0;
    for (int a = size1 - 1, b = size2 - 1; b >= 0 && a >= 0; --a, --b) {
        if (str1[a] == str2[b]) {
            check++;
        }
        else {
            break;
        }
    }

    return check == size2;
}