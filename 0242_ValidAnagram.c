// #define size 256

// bool isAnagram(char* s, char* t) {
//     if(strlen(s)!=strlen(t))
//         return false;

//     int countS[size] = {0};
//     int countT[size] = {0};

//     for(int i = 0; i<strlen(s); i++){
//         countS[(unsigned char)s[i]]++;
//         countT[(unsigned char)t[i]]++;
//     }

//     for(int i = 0; i<size; i++){
//         if(countS[i]!=countT[i])
//             return false;
//     }

//     return true;
// }

#include <string.h>
#include <stdbool.h>

#define SIZE 256

bool isAnagram(char* s, char* t) {
    if (strlen(s) != strlen(t))
        return false;

    int count[SIZE] = {0};

    for (int i = 0; s[i] != '\0'; i++) {
        count[(unsigned char)s[i]]++;
        count[(unsigned char)t[i]]--;
    }

    for (int i = 0; i < SIZE; i++) {
        if (count[i] != 0)
            return false;
    }

    return true;
}
