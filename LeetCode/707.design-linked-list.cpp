/*
 * @lc app=leetcode id=707 lang=cpp
 *
 * [707] Design Linked List
 */

// @lc code=start
class MyLinkedList {
public:
    /** Initialize your data structure here. */

    struct LinkedNode
    {
    int val;
    LinkedNode* next;
    LinkedNode(int val):val(val),next(nullptr){};
    };

    MyLinkedList() 
    {
        virtualHead = new LinkedNode(0); 
        this->size = 0;
    }
    
    /** Get the value of the index-th node in the linked list. If the index is invalid, return -1. */
    int get(int index) 
    {
        if(index > (size-1) || index < 0)
        {
            return -1;
        }
        else
        {
            LinkedNode* cur = this->virtualHead; 
            for(int i=0;i<index;i++)
            {
                cur = cur->next;
            }
            return cur->next->val;
        }
    }
    
    /** Add a node of value val before the first element of the linked list. After the insertion, the new node will be the first node of the linked list. */
    void addAtHead(int val) {
        LinkedNode* newHead = new LinkedNode(val);
        newHead->next = virtualHead->next;
        this->virtualHead->next = newHead;
        this->size++;
    }
    
    /** Append a node of value val to the last element of the linked list. */
    void addAtTail(int val) 
    {
        LinkedNode* newTail = new LinkedNode(val);

        LinkedNode* cur = this->virtualHead; 
        while(cur->next != nullptr)
        {
            cur = cur->next;
        }
        cur->next = newTail;

        this->size++;
    }
    
    /** Add a node of value val before the index-th node in the linked list. If index equals to the length of linked list, the node will be appended to the end of linked list. If index is greater than the length, the node will not be inserted. */
    void addAtIndex(int index, int val) 
    {
        if(index > size)
        {
            return;
        }
        else
        {
            LinkedNode* insertNode = new LinkedNode(val);
            LinkedNode* cur = this->virtualHead; 
            for(int i=0;i<index;i++)
            {
                cur = cur->next;
            }
            insertNode->next = cur->next;
            cur->next = insertNode;
            this->size++;
        }
    }
    
    /** Delete the index-th node in the linked list, if the index is valid. */
    void deleteAtIndex(int index) 
    {
        if(index >= size || index < 0)
        {
            return;
        }
        else
        {
            LinkedNode* cur = this->virtualHead; 
            for(int i=0;i<index;i++)
            {
                cur = cur->next;
            }
            LinkedNode* temp = cur->next;
            cur->next = cur->next->next;
            delete temp;
            this->size--;
        }
    }
private:
    LinkedNode* virtualHead;
    int size;
};

/**
 * Your MyLinkedList object will be instantiated and called as such:
 * MyLinkedList* obj = new MyLinkedList();
 * int param_1 = obj->get(index);
 * obj->addAtHead(val);
 * obj->addAtTail(val);
 * obj->addAtIndex(index,val);
 * obj->deleteAtIndex(index);
 */
// @lc code=end

