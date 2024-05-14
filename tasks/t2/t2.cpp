#include <iostream>

struct Node {
    int val;
    Node* next;
    Node(int x) : val(x), next(nullptr) {}
};

Node* swapPairs(Node* head) {
    if (!head || !head->next)
        return head;

    Node* newHead = head->next;
    Node* prev = nullptr;
    Node* curr = head;

    while (curr && curr->next) {
        Node* nextNode = curr->next->next;
        if (prev)
            prev->next = curr->next;
        curr->next->next = curr;
        curr->next = nextNode;
        prev = curr;
        curr = nextNode;
    }

    return newHead;
}

void printList(Node* head) {
    while (head) {
        std::cout << head->val << " ";
        head = head->next;
    }
    std::cout << std::endl;
}

int main() {
    Node* head = new Node(1);
    head->next = new Node(2);
    head->next->next = new Node(3);
    head->next->next->next = new Node(4);
    head->next->next->next->next = new Node(5);
    head->next->next->next->next->next = new Node(6);

    std::cout << "Original list: ";
    printList(head);

    Node* newHead = swapPairs(head);

    std::cout << "After swapping: ";
    printList(newHead);

    while (newHead) {
        Node* temp = newHead;
        newHead = newHead->next;
        delete temp;
    }

    return 0;
}