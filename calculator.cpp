#include <iostream>


class FloatList{
    private:
        struct ListNode{
            float value;
            struct ListNode *next;

        };
      ListNode *head;
    public:
    FloatList(void)
    {
        head=NULL;
    }
};