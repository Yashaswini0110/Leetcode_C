//Time Complexity: O(n)

bool isPalindrome(char* s) {
    int beg = 0, end = strlen(s) - 1;
    while(beg<end){
        while(beg<end && !isalnum(s[beg]))
            ++beg;
        while(beg<end && !isalnum(s[end]))
            --end;
        if(tolower(s[beg])!=tolower(s[end]))
            return false;
        ++beg;
        --end;
    }
    return true;
}