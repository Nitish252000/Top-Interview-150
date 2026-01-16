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
//--------------------Method 1 :S.C= O(M+N) ---------------
// class Solution {
//     public ListNode mergeTwoLists(ListNode list1, ListNode list2) {
//         if (list1 == null && list2 == null)
//             return null;

//         List<Integer> arr = new ArrayList<Integer>();
//         while(list1!=null){
//             arr.add((list1.val));
//             list1=list1.next;
//         }
//         while(list2!=null){
//             arr.add(list2.val);
//             list2=list2.next;
//         }

//         Collections.sort(arr);
//         ListNode dummy = new ListNode(0);
//         ListNode node =dummy;
//         for(Integer v:arr){
//             ListNode curr = new ListNode(v);
//             node.next=curr;
//             node=node.next;
//         }
//         return dummy.next;
//     }
// }


// ---------------------- Method 2 : Using two pointer---------------------
// We use two pointer to traverse the both sorted list and attach the smaller node each time. Once one list ends, we attach the remaining part of the other list.


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
class Solution {
    public ListNode mergeTwoLists(ListNode list1, ListNode list2) {
        if (list1 == null && list2 == null)
            return null;
        ListNode l1 = list1;
        ListNode l2 = list2;

        ListNode dummy = new ListNode(0);
        ListNode tail = dummy;
        while (l1 != null && l2 != null) {
            if (l1.val < l2.val) {
                tail.next = l1;
                tail = tail.next;
                l1 = l1.next;
            }
            else {
                tail.next=l2;
                tail=tail.next;
                l2 = l2.next;
            }
        }
        if(l1!=null){
            tail.next=l1;
        }
        if(l2!=null){
            tail.next=l2;
        }
        return dummy.next;
    }
}






















