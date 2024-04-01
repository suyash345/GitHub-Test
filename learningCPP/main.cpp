 struct ListNode {
     int val;
      ListNode *next;
      ListNode() : val(0), next(nullptr) {}
      ListNode(int x) : val(x), next(nullptr) {}
      ListNode(int x, ListNode *next) : val(x), next(next) {}
  };
// branch 3 branch 3 branch 3.
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        int multiplier = 1;
        int value1 = 0;
        int value2 = 0;
        while (l1 != nullptr) {
            value1 += (l1->val) * multiplier;
            l1 = l1->next;
            multiplier = multiplier * 10;
            if (l1 == nullptr || l1->next == nullptr) {
                break;
            }
        }
        multiplier = 1;
        while (true) {
            value1 += (l2->val) * multiplier;
            l2 = l2->next;
            multiplier = multiplier * 10;
            if (l2 == nullptr || l2->next == nullptr) {
                break;
            }
        }
        int sum = value1 + value2;

        return sum;
    }
};

int main() {

    return 0;
}