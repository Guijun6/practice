//题目描述
//输入一个链表，从尾到头打印链表每个节点的值。

/**
*  struct ListNode {
*        int val;
*        struct ListNode *next;
*        ListNode(int x) :
*              val(x), next(NULL) {
*        }
*  };
*/
class Solution {
public:
	vector<int> printListFromTailToHead(ListNode* head) {
        ListNode* tmp = head;
		vector<int> v;
		_printListFromTailToHead(v, tmp);
		return v;
	}
	void _printListFromTailToHead(vector<int>& v, ListNode* head)
	{
		if (head== NULL)
			return;
		_printListFromTailToHead(v, head->next);
		v.push_back(head->val);
	}
};
