//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

class SortedStack{
public:
	stack<int> s;
	void sort();
};

void printStack(stack<int> s)
{
    while (!s.empty())
    {
        printf("%d ", s.top());
       	s.pop();
    }
    printf("\n");
}

int main()
{
int t;
cin>>t;
while(t--)
{
	SortedStack *ss = new SortedStack();
	int n;
	cin>>n;
	for(int i=0;i<n;i++)
	{
	int k;
	cin>>k;
	ss->s.push(k);
	}
	ss->sort();
	printStack(ss->s);
}
}
// } Driver Code Ends


/*The structure of the class is
class SortedStack{
public:
	stack<int> s;
	void sort();
};
*/

/* The below method sorts the stack s
you are required to complete the below method */
void SortedStack :: sort()
{
   //Your code here
    stack<int> tempStack;
    while (!s.empty()) {
        // pop the top element from the original stack
        int cur = s.top();
        s.pop();

        // move elements from temporary stack to the original stack
        while (!tempStack.empty() && tempStack.top() < cur) {
            s.push(tempStack.top());
            tempStack.pop();
        }

        // push the current element to the temporary stack
        tempStack.push(cur);
    }

    // move elements from temporary stack back to the original stack
    while (!tempStack.empty()) {
        s.push(tempStack.top());
        tempStack.pop();
    }

   //-------
}
