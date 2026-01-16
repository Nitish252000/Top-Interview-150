/**
 * Definition for singly-linked list.
 * public class ListNode {
 *     int val;
 *     ListNode next;
 *     ListNode() {}
 *     ListNode(int val) { this.val = val; }
 *     ListNode(int val, ListNode next) { this.val = val; this.next = next; }
 * }
 */
//--------------------Method 1 :S.C= O(N) ---------------
class Solution {
    public ListNode mergeTwoLists(ListNode list1, ListNode list2) {
        if (list1 == null && list2 == null)
            return null;

        List<Integer> arr = new ArrayList<Integer>();
        while(list1!=null){
            arr.add((list1.val));
            list1=list1.next;
        }
        while(list2!=null){
            arr.add(list2.val);
            list2=list2.next;
        }

        Collections.sort(arr);
        ListNode dummy = new ListNode(0);
        ListNode node =dummy;
        for(Integer v:arr){
            ListNode curr = new ListNode(v);
            node.next=curr;
            node=node.next;
        }
        return dummy.next;
    }
}
