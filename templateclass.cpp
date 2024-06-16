#include<iostream>
using namespace std;
template<typename t>
class Node{
    public:
     t val;
    Node*next;
Node(t data){
    val=data;
    next=NULL;
}
};
int main()
{
    Node<int>*t=new Node<int>(4);
    cout<<t->val<<endl;
    Node<char>*t1=new Node<char>('a');
    cout<<t1->val<<endl;
    return 0;
}