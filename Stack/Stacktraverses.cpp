#include <iostream>
#include <stack>
using namespace std;
void printTopTOBottom(stack<int> & st){
    stack<int> helper;
    while (st.size() != 0){
        cout << st.top() << " ";
        helper.push(st.top());
        st.pop();
    }
//push back elemets from helper to st;
 while (helper.size() != 0){
    st.push(helper.top());
    helper.pop();

 }
 cout<<endl;

}
void printbottomToTop(stack<int> & st){
    stack<int> helper;
    while (st.size() != 0){
       helper.push(st.top());
        st.pop();
    }
//push back elemets from helper to st;
 while (helper.size() != 0){
    cout<<helper.top()<<" ";
    st.push(helper.top());
    helper.pop();

 }
 cout<<endl;

}
    int main(){
        stack<int> st;
        st.push(18);
        st.push(33);
        st.push(1);
        st.push(45);
        st.push(7); 

       printTopTOBottom(st);
     printTopTOBottom(st);
     printbottomToTop(st);
      
    }
