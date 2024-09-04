//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;



// } Driver Code Ends
class Solution
{
    public:
    int counter = 0;
    priority_queue<int> pq1;
    priority_queue<int> pq2;
    //Function to insert heap.
    void insertHeap(int &x)
    {
        if(counter % 2 == 0) pq1.push(x);
        else pq2.push(-1 * x);
        counter++;
        if(counter > 1) balanceHeaps();
    }
    
    void balanceHeaps(){
        while(pq1.top() > (-1 * pq2.top())){
            int temp1 = pq1.top();
            pq1.pop();
            int temp2 = (-1 * pq2.top());
            pq2.pop();
            pq1.push(temp2);
            pq2.push(-1 * temp1);
        }
    }
    
    //Function to return Median.
    double getMedian()
    {
        if(counter % 2 == 0) return((pq1.top() + (-1 * pq2.top())) / 2);
        return pq1.top();
    }
};


//{ Driver Code Starts.

int main()
{
    int n, x;
    int t;
    cin>>t;
    while(t--)
    {
    	Solution ob;
    	cin >> n;
    	for(int i = 1;i<= n; ++i)
    	{
    		cin >> x;
    		ob.insertHeap(x);
    	    cout << floor(ob.getMedian()) << endl;
    	}
    }
	return 0;
}
// } Driver Code Ends