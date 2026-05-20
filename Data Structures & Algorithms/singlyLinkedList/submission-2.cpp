struct Node{
    int val;
    Node* next;
    Node(int v, Node* n = nullptr) : val(v), next(n) {}
};

class LinkedList {
private:
    Node* head;
public:
    LinkedList(): head(NULL) {}

    int get(int index) {
        Node* curr = head;
        int count = 0;
        while(curr != NULL && count != index)
        {
            curr = curr->next;
            count++;
        }

        if(curr == NULL)
            return -1;
        
        return curr->val;

    }

    void insertHead(int val) {
        Node* new_node = new Node(val, head);
        head = new_node;

    }
    
    void insertTail(int val) {
        Node* new_node = new Node(val, NULL);
        if (head == nullptr) {
            head = new_node;
            return;
        }
        Node* curr = head;
        while(curr->next != NULL)
        {
            curr = curr->next;
        }
        curr->next = new_node;
    }

    bool remove(int index) {
        if (head == nullptr) return false;
        if (index == 0) {
            Node* to_del = head;
            head = head->next;
            delete to_del;
            return true;
        }
        
        Node* curr = head;
        Node* prev = nullptr;
        Node* temp;
        int count = 0;
        while(curr != NULL && count != index)
        {
            prev = curr;
            curr = curr->next;
            count++;

        }
        if(curr == NULL)
            return false;

       
        temp = curr;
        prev->next = curr->next;
        delete temp;
        return true;
    }

    vector<int> getValues() {
        std::vector<int> myList; 
        Node* curr = head;
        while(curr != NULL )
        {
            myList.push_back(curr->val);
            curr = curr->next;
        }
        return myList;
    }
};

