//Generate numbers with given digits
//time complexity O(n)
//https://ide.geeksforgeeks.org/Lc2yMrSbSX

#include <iostream>
#include <queue>
using namespace std;

void printFirstN(int n)
{
    queue<string> q;
    
    q.push("5");
    q.push("6");
    
    for(int i=0; i<n; i++)
    {
        string curr = q.front();
        q.pop();
        cout<<curr<<" ";
        
        q.push(curr + "5");
        q.push(curr + "6");
    }
}

int main() {
	int n = 10;
	printFirstN(n);
	return 0;
}