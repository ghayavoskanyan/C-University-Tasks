/* Reverse անել լիստը, օրինակ 1 2 3 4, կլինի 4 3 2 1 */
DoublyLinkedListNode* reverse (DoublyLinkedListNode* llist) {
    if (llist == nullptr)
        return nullptr;

    DoublyLinkedListNode* current = llist;
    DoublyLinkedListNode* temp = nullptr;

    while (current != nullptr) {
        temp = current -> prev;
        current -> prev = current -> next;
        current -> next = temp;
        current = current -> prev;
    }

    if (temp != nullptr)
        llist = temp -> prev;
        
    return llist;
}