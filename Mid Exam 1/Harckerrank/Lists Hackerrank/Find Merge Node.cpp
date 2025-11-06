/* Գտնել այն Node-երը, որոնց next-ը նույն էլեմենտի վրա է ցույց տալիս */
int findMergeNode (SinglyLinkedListNode* head1, SinglyLinkedListNode* head2) {
    SinglyLinkedListNode* ptr1 = head1;
    SinglyLinkedListNode* ptr2 = head2;

    while (ptr1 != ptr2) {
        ptr1 = (ptr1 == nullptr) ? head2 : ptr1 -> next;
        ptr2 = (ptr2 == nullptr) ? head1 : ptr2 -> next;
    }
    //Սա է մեր միավորման Node-ը` ptr1 == ptr2
    return ptr1 -> data;
}