//Balenced arenthesis
//time complexity O(n)
//space complextiy O(n)

#include <iostream>
#include <string>
#include<stack>
using namespace std;

bool isMatching(char a, char b)
{
    return ((a=='{' && b=='}') ||
            (a=='(' && b==')') ||
            (a=='[' && b==']'));
}

bool isBalenced(string str)
{
    stack<char> st;
    for(char ch : str)
    {
        if(ch=='(' || ch=='[' || ch=='{')
        {
            st.push(ch);
        }
        else
        {
            if(st.empty())
            {
                return false;
            }
            else if(isMatching(st.top(), ch) == false)
            {
                return false;
            }
            else
            {
                st.pop();
            }
        }
    }
    return (st.empty() == true);
}

int main() {
	string str = "(){()}";
	
	if(isBalenced(str))
	{
	    cout<<"Balenced"<<endl;
	}
	else
	{
	    cout<<"Not Balenced";
	}
	
	return 0;
}