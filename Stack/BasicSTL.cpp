#include <iostream>
#include <stack>
using namespace std;
int main()
{
  stack<int> st;
  st.push(10); // add at top //tc order of 1
  st.push(20);
  st.push(30);
  st.push(40);
  cout << st.top() << endl;
  cout << st.empty() << endl;
  cout << st.size() << endl;
  st.pop();
  cout << st.size() << endl;
  cout << st.top() << endl;
}