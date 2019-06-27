## Only complete the function:-

Node* Insert(Node *head, int data, int position)
{
    Node *newNode = new Node();
    newNode->data = data;

   if (head == NULL) {
    newNode->next = NULL;
    return newNode;
  }

    if (position == 0) {
       newNode->next = head;
       return newNode;
    }

    Node *currentNode = head;
    while (position - 1 > 0) {
        currentNode = currentNode->next;
        position--;
    }

    newNode->next = currentNode->next;
    currentNode->next = newNode;

    return head;
 
