#include <string>
class Solution {
public:
    char arr[10 * 10 * 10 * 10];
    int top = -1;

    void push(char val) {
        if (top == 10 * 10 * 10 * 10) {
            return;
        }
        top += 1;
        if (val == '(') {
            arr[top] = ')';
        } else if (val == '[') {
            arr[top] = ']';
        } else if (val == '{') {
            arr[top] = '}';
        }
    }
    void pop() {
        if (top == -1) {
            return;
        }
        top = top - 1;
    }
    char peek() {
        if (top == -1) {
            return ' ';
        }
        return arr[top]; }


    bool isValid(string s) {
    for(int i=0;i<s.length();i++){
        if(s[i]=='(' || s[i]=='[' || s[i]=='{'){
            push(s[i]);
        }else{
            if(top>=0){
            if(peek()==s[i]){
                pop();
            }else{
                return false;
            }
            }else if(top==-1){
              return false;  
            }
        }
    }
    if(top==-1){
        return true;
    }else{
        return false;
    }
    return 0;
    }
};