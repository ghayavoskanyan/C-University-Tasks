/* Սորտավորված լիստում ավելացնել էլեմենտ այնպես, որ լիստը մնա սորտավորված */
DoublyLinkedListNode* sortedInsert (DoublyLinkedListNode* llist, int data) {
    //Ստեղծում ենք նոր Node-ը
    DoublyLinkedListNode* newNode = new DoublyLinkedListNode (data);
    
    //Եթե list-ը դատարկ է, մեր նոր էլեմենտն է դառնում list-ը
    if (llist == NULL)
        return newNode;

    //Եթե այն բոլորից փոքր է, դնում ենք հենց սկզբում
    if (data < llist -> data) {
        newNode -> next = llist;
        llist -> prev = newNode;
        return newNode;
    }

    //Գտնում ենք, թե որտեղից պիտի այն ավելացնենք (current-ից հետո)
    DoublyLinkedListNode* current = llist;
    while (current -> next != NULL && current -> next -> data < data) {
        current = current -> next;
    }

    //Ավելացնում ենք current-ի և current -> next-ի միջև
    newNode -> next = current -> next;
    newNode -> prev = current;

    if (current -> next != NULL)
        current -> next -> prev = newNode;

    current -> next = newNode;

    return llist;
}