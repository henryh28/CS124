#include <iostream>
using namespace std;
bool is_balanced(const string& expression);
int main() {
  cout << "Enter an expression\n";
  string expression;
  while (getline(cin, expression) && (expression != "")) {
    cout << expression;
    if (is_balanced(expression)) {
      cout << " is balanced\n";
    } else {
      cout << " is not balanced\n";
    }
    cout << "Enter another expression: ";
  }
  return 0;
}

