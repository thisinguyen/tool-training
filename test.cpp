struct Node{
    int data;
    Node *next;
};

void add_node(Node*& head, Node*& tail, int value) {
    Node* new_node = new Node;
    new_node->data = value;
    new_node->next = nullptr;
    if (head == nullptr) {
        head = tail = new_node;
    } else {
        tail->next = new_node;
        tail = new_node;
    }
}

void print_list(Node* head) {
    cout << "Danh sach vua nhap la: ";
    while (head != nullptr) {
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;
}

int main() {
    Node* head = nullptr;
    Node* tail = nullptr;
    int value;
    do{
        cin >> value;
        if(value != 0){
            add_node(head, tail, value);
        }
    }while(value != 0);

    if(head == NULL){
        cout <<"Danh sach rong.";
    }
    else{
    print_list(head);
    }
    return 0;
}