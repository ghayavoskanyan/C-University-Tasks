/* Գտնենք, կրկնվող ցիկլ կա, թե ոչ */
bool has_cycle (Node* head) {
    if (head == NULL) 
        return false; //list-ը դատարկ է

    Node* slow = head;
    Node* fast = head;

    while (fast != NULL && fast -> next != NULL) {
        slow = slow -> next; //1 հատով է առաջ գնում
        fast = fast -> next -> next; //2 հատով է առաջ գնում

        if (slow == fast)
            return true; //ստացվեց, որ ցիկլ ունենք
    }
    
    return false; //հասել ենք NULL-ին, հետևաբար, ցիկլ չկա
}