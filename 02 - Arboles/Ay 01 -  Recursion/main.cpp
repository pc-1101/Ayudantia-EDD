#include <iostream>

struct Node {
    int data;
    Node *next;

    Node(int data, Node *next) : data(data), next(next) {}
};

class LinkedList {
private:
    Node *head;

public:
    LinkedList() : head(nullptr) {}

    int length() { return _length(head); }

    int sum() { return _sum(head); }

    void print() { return _print(head); }

    void reverse_print() { _reverse_print(head); }

    int index(int value) { return _index(head, value, 0); }

    LinkedList copy() { return LinkedList(_copy(head)); }

    void append(int data) { _append(head, data); }

    void remove(int data) { _remove(head, data); }

private:
    LinkedList(Node *head) : head(head) {}

    int _length(Node *node) {
        if (node == nullptr)
            return 0;
        else
            return 1 + _length(node->next);
    }

    int _sum(Node *node) {
        if (node == nullptr)
            return 0;
        else
            return node->data + _sum(node->next);
    }

    void _print(Node *node) {
        if (node == nullptr)
            return;
        else {
            std::cout << node->data << " ";
            _print(node->next);
        }
    }

    void _reverse_print(Node *node) {
        if (node == nullptr)
            return;
        else {
            _reverse_print(node->next);
            std::cout << node->data << " ";
        }
    }

    int _index(Node *node, int value, int i) {
        if (node == nullptr)
            return -1;
        else if (node->data == value)
            return i;
        else
            return _index(node->next, value, i + 1);
    }

    Node *_copy(Node *node) {
        if (node == nullptr)
            return nullptr;
        else
            return new Node(node->data, _copy(node->next));
    }

    Node *_append(Node *&node, int value) {
        if (node == nullptr)
            node = new Node(value, nullptr);
        else
            node->next = _append(node->next, value);
        return node;
    }

    Node *_remove(Node *&node, int data) {
        if (node == nullptr)
            return nullptr;
        else if (node->data == data) {
            node = node->next;
            return node;
        }
        else {
            node->next = _remove(node->next, data);
            return node;
        }
    }
};

int main() {
    LinkedList l;
    l.append(1);
    l.append(2);
    l.append(3);

    return 0;
}
