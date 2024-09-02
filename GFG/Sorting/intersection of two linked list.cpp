//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    Node* next;

    Node(int x)
        : data(x)
        , next(nullptr) {}
};

void printList(Node* head) {
    while (head != nullptr) {
        cout << head->data << ' ';
        head = head->next;
    }
    cout << '\n';
}


// } Driver Code Ends
/* structure of list node:

struct Node
{
    int data;
    Node *next;
    Node(int val)
    {
        data=val;
        next=NULL;
    }
};

*/

class Solution {
  public:
    Node* findIntersection(Node* head1, Node* head2) {
        // code here
       unordered_set<int>s;
        vector<int>v;
        Node* temp1 = head2;
        Node* temp2 = head1;
        while(temp1)
        {
            s.insert(temp1->data);
            temp1 = temp1->next;
        }
        while(temp2)
        {
            if(s.find(temp2->data)!=s.end())
            {
                v.push_back(temp2->data);
            }
            temp2 = temp2->next;
        }
        Node* res = new Node(-1);
        Node* ans = res;
        for(int i=0;i<v.size();i++)
        {
            Node* check = new Node(v[i]);
            res->next = check;
            res = res->next;
        }
        return ans->next;


    }
};

//{ Driver Code Starts.

// Driver program to test the above functions
int main() {
    int T;
    cin >> T;
    cin.ignore();

    while (T--) {
        Node *head1 = nullptr, *tail1 = nullptr;
        Node *head2 = nullptr, *tail2 = nullptr;
        int tmp;
        string input1, input2;

        getline(cin, input1);
        stringstream ss1(input1);
        while (ss1 >> tmp) {
            Node* new_node = new Node(tmp);
            if (!head1) {
                head1 = new_node;
                tail1 = new_node;
            } else {
                tail1->next = new_node;
                tail1 = new_node;
            }
        }

        getline(cin, input2);
        stringstream ss2(input2);
        while (ss2 >> tmp) {
            Node* new_node = new Node(tmp);
            if (!head2) {
                head2 = new_node;
                tail2 = new_node;
            } else {
                tail2->next = new_node;
                tail2 = new_node;
            }
        }

        Solution obj;
        Node* result = obj.findIntersection(head1, head2);
        printList(result);
    }
    return 0;
}

// } Driver Code Ends