#include <iostream>
#include <string>

using namespace std;

string reverseWord(string s,int left,int right){
    while(left<=right){
        swap(s[left],s[right]);
        left++;
        right--;
    }
    return s;
}



string concatenateStr(string str) {
    string s;
    int i = 0;

    
    while (i < str.length() && str[i] == ' ') {
        i++;
    }

    for (; i < str.length(); i++) {
        if (str[i] == ' ') {
            s.push_back(' ');  // Add a single space
            int a = i;
            // Skip consecutive spaces
            while (a < str.length() && str[a] == ' ') {
                a++;
            }
            i = a - 1;  // Adjust index to account for skipping multiple spaces
        } 
        else if ((str[i] >= 'a' && str[i] <= 'z') ||
                 (str[i] >= 'A' && str[i] <= 'Z') ||
                 (str[i] >= '0' && str[i] <= '9')) {
            s.push_back(str[i]);  // Add valid alphanumeric characters
        }
    }

    // Remove trailing spaces if any
    while (!s.empty() && s.back() == ' ') {
        s.pop_back();
    }

    int st=0;
    int e=s.length()-1;
    while (st<=e){
        swap(s[st],s[e]);
        st++;
        e--;
    }

      int start = 0;
    while (start < s.length()) {
        int end = start;
       
        while (end < s.length() && s[end] != ' ') {
            end++;
        }
      
        s=reverseWord(s, start, end - 1);
        
        start = end + 1;
    }

    return s;
}

int main() {
    string str;
    cout<<"enter the string :";
    getline(cin,str);
    cout << concatenateStr(str) << endl;
    return 0;
}