#include <iostream>
#include <stack>

template <typename T>
class MyStack {
public:
    void pushElement(T element) {
        elements.push(element);
    }

    T popElement() {
        if (!elements.empty()) {
            T topElement = elements.top();
            elements.pop();
            return topElement;
        }
        return T(); // Return a default value if the stack is empty
    }

    T peek() const {
        if (!elements.empty()) {
            return elements.top();
        }
        return T(); // Return a default value if the stack is empty
    }

    bool isEmpty() const {
        return elements.empty();
    }

private:
    std::stack<T> elements;
};

std::string reverseString(const std::string& input) {
    MyStack<char> charStack;
    MyStack<std::string> stringStack;
    std::string currentWord = "";

    for (size_t i = 0; i < input.length(); ++i) {
        char c = input[i];
        if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')) {
            currentWord += c;
        } else if (c == ' ') {
            if (!currentWord.empty()) {
                stringStack.pushElement(currentWord);
                currentWord.clear();
            }
            stringStack.pushElement(" "); // Push a single space as a separate string
        } else {
            charStack.pushElement(c);
        }
    }

    if (!currentWord.empty()) {
        stringStack.pushElement(currentWord);
    }

    std::string reversedString = "";


    while (!stringStack.isEmpty()) {
        reversedString += stringStack.popElement();
    }


    while (!charStack.isEmpty()) {
        reversedString += charStack.popElement();
    }

    return reversedString;
}
bool isPalindrome(const std::string& input) {
    std::stack<char> charStack;
    std::string cleanedInput;

    // Remove non-alphanumeric characters and convert to lowercase
    for (char ch : input) {
        if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z') || (ch >= '0' && ch <= '9')) {
            cleanedInput += std::tolower(ch);
        }
    }

    // Push the first half of the characters onto the stack
    for (size_t i = 0; i < cleanedInput.length() / 2; ++i) {
        charStack.push(cleanedInput[i]);
    }

    // Compare the second half of the characters with the stack
    for (size_t i = (cleanedInput.length() + 1) / 2; i < cleanedInput.length(); ++i) {
        if (cleanedInput[i] != charStack.top()) {
            return false;
        }
        charStack.pop();
    }

    return true;
}

int main() {
    std::string inputString = "Hello, World!";
    std::string reversedString = reverseString(inputString);
    std::cout << "Reversed: " << reversedString << std::endl;

    std::string input;

    std::cout << "Enter a string: ";
    std::getline(std::cin, input);

    if (isPalindrome(input)) {
        std::cout << "It's a palindrome!" << std::endl;
    } else {
        std::cout << "It's not a palindrome." << std::endl;
    }

    return 0;
}