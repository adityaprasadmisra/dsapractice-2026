class Solution {
  public:
    void removeLoop(Node* head) {

        Node *fp = head;
        Node *sp = head;
        while(fp != NULL && fp->next != NULL)
        {
            sp = sp->next;
            fp = fp->next->next;

            if(sp == fp)
            {
                break;
            }
        }
        if(fp == NULL || fp->next == NULL)
        {
            return;
        }
        sp = head;
        if(sp == fp)
        {
            while(fp->next != sp)
            {
                fp = fp->next;
            }

            fp->next = NULL;
            return;
        }
        while(sp->next != fp->next)
        {
            sp = sp->next;
            fp = fp->next;
        }

        fp->next = NULL;
    }
};
