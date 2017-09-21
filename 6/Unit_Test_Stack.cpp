#include <iostream>
#include "stack.h"
#include "test.h"
using std::cout;
using std::endl;
using KW::stack;
class TestStack : public TestSuite::Test
{
public:
  void run()
 {
   stack<int> the_stack;
   test_(the_stack.empty() == true);
   for (int i = 0; i < 10; i++)  the_stack.push(i);
   test_(the_stack.empty() == false);
   test_(the_stack.size() == 10);
   the_stack.pop();
   test_(the_stack.size() == 9);
   test_(the_stack.top() == 8);
 }
};
int main()
{
  TestStack t;
  t.run();
  t.report();
}

