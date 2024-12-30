//Time Complexity: O(n)

char* removeDuplicates(char* s) {
    static char stack[100000];
    int top = 0;
    for(int i = 0; s[i]!='\0'; i++){
        if(top>0 && (stack[top-1]==s[i])){
            top--;
        }
        else{
            stack[top++] = s[i];
        }
    }
    stack[top] = '\0';
    return stack;
}