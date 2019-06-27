SinglyLinkedListNode* removeDuplicates(SinglyLinkedListNode* head) {
  if ( head == NULL ) return NULL;
  SinglyLinkedListNode* nextItem = head->next;
  while ( nextItem != NULL && head->data == nextItem->data ) {
    nextItem = nextItem->next;
  }
  head->next = removeDuplicates( nextItem );
  return head;
}
