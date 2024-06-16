#include<iostream>
using namespace std;
template<typename T>
class Node{
    public:
    T val;
    Node*next;
Node(T data){
    val=data;
    next=NULL;
}
};
int main()
{
    Node<int>*t=new Node<int>(23);
    cout<<t->val<<" "<<t->next<<endl;
    Node<char>*t1=new Node<char>('R');
    cout<<t1->val<<" "<<t1->next<<endl;
}