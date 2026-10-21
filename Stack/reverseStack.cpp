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
void push(int idx, int val,stack<int>& st){
    stack<int> helper;
    while(st.size() > idx){
        helper.push(st.top());
        st.pop();
    }
st.push(val);
//helper to stack
 while(helper.size() > 0){
        st.push(helper.top());
      helper.pop();
    }


}
void pop(int idx, stack<int>& st){

}
void get(int idx,stack<int>& st){


}
int main(){
    stack<int> st;
    st.push(10); st.push(20); st.push(30); st.push(40);

    push(2,99,st);
    printbottomToTop(st);
}

