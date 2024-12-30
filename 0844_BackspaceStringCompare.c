//Time Complexity: O(n)

void stack_func(char* ch, char* stack){         //func to perform the operation on s and t
    int top = -1;
    for(int i = 0; ch[i]!='\0'; i++){
        if(ch[i]!='#'){
            top++;
            stack[top] = ch[i];
        }
        else if(top!=-1)
            top--;
    }
    stack[top+1] = '\0';
}

bool backspaceCompare(char* s, char* t) {
    char s_Res[200], t_Res[200];  //result array of s and t
    stack_func(s,s_Res);    
    stack_func(t, t_Res);
    return strcmp(s_Res, t_Res)==0;
}