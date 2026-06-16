 /*
Category: Binary Search Tree, Ordered Set

Approach:
- Traverse the array from left to right while maintaining an ordered set
  of previously seen elements.
- For each element:
  - Count how many existing elements in the ordered set are greater than it.
  - Add this count to the inversion total.
- Using a PBDS ordered set with descending order, order_of_key(ele)
  directly gives the number of elements greater than ele that have already
  appeared.
- Insert the current element into the ordered set and continue.

Time Complexity: O(n log n)
Space Complexity: O(n)
 */
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;

#define oset tree<int, null_type,greater_equal<int>, rb_tree_tag,tree_order_statistics_node_update>
class Solution {
  public:
    int inversionCount(vector<int> &arr) {
        oset os;
        int ans = 0;
        for(int ele : arr){
            ans += os.order_of_key(ele);
            os.insert(ele);
        }
        return ans;
    }
};