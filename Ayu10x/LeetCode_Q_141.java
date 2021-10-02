class ListNode1 {
    int val;
    ListNode1 next;
    ListNode1(int x) {
        val = x;
        next = null;
    }
}

public class LeetCode_Q_141 {
    public boolean hasCycle(ListNode1 head) {
        if(head == null || head.next == null) return false;
        ListNode1 p = head, q = head.next;
        while(p != null && q != null){
            if(p == q) return true;
            p = p.next;
            q = q.next;
            if(q != null) q = q.next;
        }
        return false;
    }
}