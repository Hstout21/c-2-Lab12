/*************************************************************************
      Hunter Stout   -   4/15/2022
      lab12-part1.cc -   Lab 12, Recursion 2
*************************************************************************/

#include <iostream>
#include <string>
using namespace std;

string reversing(string s, int start, int end);

int main() {

    string s;
    int start, end;

    cout << "Enter a string: ";
    getline(cin,s);

    cout << "Enter two numbers that are within the bounds of the string.\n";
    cin >> start >> end;

    cout << "This is how your string looks now:\n";
    s = reversing(s, start, end);
    cout << s << endl;

return 0;
}

string reversing(string s, int start, int end) {
    char placeholder;

    if(start > end) return s; //Base.
    else {

        placeholder=s[start];
        s[start]=s[end];
        s[end]=placeholder;

        start++, end--;

        return reversing(s, start, end); //Recursive.
    }
}