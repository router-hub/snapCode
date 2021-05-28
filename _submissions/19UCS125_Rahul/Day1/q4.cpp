bool isValid(char c) {
    if(c >= 'a' && c <= 'z' || c >= 'A' && c <= 'Z' || c >= '0' && c <= '9') {
        return true;
    }
    return false;
}

bool isUnvalid(char c) {
    if(c == ' ' || !isValid(c)) 
        return true;
    return false;
}

int Solution::isPalindrome(string str) {
    int i = 0, j = str.length() - 1;
    while(i < j) {
        if(isUnvalid(str[i])) {
            i++;
        }
        if(isUnvalid(str[j])) {
            j--;
        }
        if(isValid(str[i]) && isValid(str[j])) {
            if(str[i] >= 'A' && str[i] <= 'Z') {
                str[i] += 32;
            }
            if(str[j] >= 'A' && str[j] <= 'Z') {
                str[j] += 32;
            }
            if(str[i] == str[j]) {
                i++;
                j--;
            }
            else {
                break;
            }
        }
    }
    if(i >= j) {
        return 1;
    }
    else {
        return 0;
    }
}