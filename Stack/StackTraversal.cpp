#include<iostream>
#include<stack>
using namespace std;
int main(){ 
    stack<int> st;
    st.push(18);
    st.push(33);
    st.push(1);
    st.push(45); 
    st.push(7); 
    

    // while(st.size() > 0)
    while(st.size() != 0){
        cout<<st.top()<<" ";
        st.pop();
        
    }
    return 0;
}
