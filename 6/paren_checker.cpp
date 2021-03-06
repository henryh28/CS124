/** Program to check an expression for balanced parentheses. */
#include <stack>
#include <string>
#include <iostream>
using namespace std;
// The set of opening parentheses.
const string OPEN = "([{";
// The corresponding set of closing parentheses.
const string CLOSE = ")]}";

bool is_open(char ch) {
  return OPEN.find(ch) != string::npos;
}

bool is_close(char ch) {
  return CLOSE.find(ch) != string::npos;
}

bool is_balanced(const string& expression) {
  // A stack for the open parentheses that haven't been matched
  stack<char> s;
  bool balanced = true;
  string::const_iterator iter = expression.begin();
  while (balanced && (iter != expression.end())) {
    char next_ch = *iter;
    if (is_open(next_ch)) {
      s.push(next_ch);
    } else if (is_close(next_ch)) {
      if (s.empty()) {
        balanced = false;
      } else {
        char top_ch = s.top();
        s.pop();
        balanced =
          OPEN.find(top_ch) == CLOSE.find(next_ch);
      }
    }
    ++iter;
  }
  return balanced && s.empty();
}

