//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Node{
    public:
        int data;
        Node* left;
        Node* right;
        Node(int d){
            data=d;
            left=nullptr;
            right=nullptr;
        }
};
class cmp{
    public:
        bool operator()(Node* a,Node* b){
            return a->data>b->data;
        }
};
class Solution
{
    void dfs(Node* root,vector<string>&ans,string temp){
        if(root->left==nullptr&&root->right==nullptr){
            ans.push_back(temp);
            return;
        }
        dfs(root->left,ans,temp+'0');
        dfs(root->right,ans,temp+'1');
    }
	public:
		vector<string> huffmanCodes(string S,vector<int> f,int N)
		{
		    priority_queue<Node*, vector<Node*>,cmp>pq;
		    for(int i=0;i<N;i++){
		        Node* temp=new Node(f[i]);
		        pq.push(temp);
		    }
		    while(pq.size()>1){
		        auto n1=pq.top();
		        pq.pop();
		        auto n2=pq.top();
		        pq.pop();
		        Node* newNode=new Node(n1->data+n2->data);
		        newNode->left=n1;
		        newNode->right=n2;
		        pq.push(newNode);
		    }
		    Node * root=pq.top();
		    vector<string>ans;
		    dfs(root,ans,"");
		    return ans;
		}
};

//{ Driver Code Starts.
int main(){
    int T;
    cin >> T;
    while(T--)
    {
	    string S;
	    cin >> S;
	    int N = S.length();
	    vector<int> f(N);
	    for(int i=0;i<N;i++){
	        cin>>f[i];
	    }
	    Solution ob;
	    vector<string> ans = ob.huffmanCodes(S,f,N);
	    for(auto i: ans)
	    	cout << i << " ";
	    cout << "\n";
    }
	return 0;
}
// } Driver Code Ends