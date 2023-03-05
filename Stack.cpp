#include <iostream>
#include <stack>

using namespace std;


    class MyStack 
    {   
        int stack[100];
        int top;
        int MaxSize;
        public:
        MyStack(int size=100)
        {   
            MaxSize=size;
            top=0;
        }
            bool Empty()
            {
                return top ==0;


            }

            bool Full()
            {
                return top== MaxSize;
            }

            bool Push(int Element)
            {
                if (Full())
                {
                    cout<<"Stack is Full"<<endl;
                    return false;

                }

                stack[top++]=Element;
                return true;


            }
            bool pop ()
            {
                if (Empty())
                {
                    cout<<"Stack is Empty"<<endl;
                    return false;
                }

                top --;
                return true;
            }

            bool TopElement()
            {
                if (Empty())
                {
                    cout << "No Elements In Stack "<<endl;
                    

                }
                return stack[top-1];
            }


            bool show()
            {
                 if (Empty())
                {
                    cout << "No Elements In Stack "<<endl;
                    

                }

                for (int i=top-1;i>=0;i--)
                {
                    cout<< "Elements :  "<< stack[i]<<endl;

                 }
            }



        
    };

    int main ()
    {
        MyStack stack(6);
        stack.show();
        stack.pop();
        stack .Push(1);
        stack.show();
        
    }