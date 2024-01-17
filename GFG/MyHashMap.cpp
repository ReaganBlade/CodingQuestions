//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

struct Node {
    int key;
    int value;
    Node * next;
    Node (int k, int v): key(k), value(v), next(nullptr){}
};

class MyHashMap {
private:
    vector<Node*> buckets;
    const int SIZE = 1000;

    int hashFunction(int key){
        return key % SIZE;
    }

public:
    /** Initialize your data structure here. */
    MyHashMap() {
        buckets.resize(SIZE, nullptr);
    }

    /** value will always be non-negative. */
    void put(int key, int value) {
        int index = hashFunction(key);

        Node * current = buckets[index];
        while(current != nullptr){
            if (current -> key == key){
                current -> value = value;
                return;
            }
            current = current -> next;
        }

        Node * newNode = new Node(key, value);
        newNode -> next = buckets[index];
        buckets[index] = newNode;
    }

    /** Returns the value to which the specified key is mapped, or -1 if this map contains no mapping for the key */
    int get(int key) {
        int index = hashFunction(key);

        Node * current = buckets[index];
        while(current != nullptr){
            if(current -> key == key){
                return current -> value;
            }

            current = current -> next;
        }

        return -1;
    }

    /** Removes the mapping of the specified value key if this map contains a mapping for the key */
    void remove(int key) {
        int index = hashFunction(key);

        Node * current = buckets[index];
        Node * prev = nullptr;

        while(current != nullptr){
            if(current -> key == key){
                if(prev != nullptr){
                    prev -> next = current -> next;
                }
                else {
                    buckets[index] = current -> next;
                }
                delete current;
                return;
            }

            prev = current;
            current = current -> next;
        }
    }

};

//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        MyHashMap obj;
        int q;
        cin >> q;
        while (q--) {
            string s;
            cin >> s;
            if (s == "put") {
                int key, val;
                cin >> key >> val;
                obj.put(key, val);
            }
            else if ( s == "remove") {
                int key;
                cin >> key;
                obj.remove(key);
            }
            else {
                int key;
                cin >> key;
                cout << obj.get(key) << endl;
            }
        }
    }
    return 0;
}

// } Driver Code Ends