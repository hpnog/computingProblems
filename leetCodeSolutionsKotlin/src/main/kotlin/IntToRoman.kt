// Found in https://leetcode.com/problems/integer-to-roman/

// Time Complexity:     O(n)
// Space Complexity:    O(1)

package leetCodeSolutionsKotlin.intToRoman

import java.util.HashMap

class Solution {
    val romanNumerals: Array<String> = arrayOf("I", "IV", "V", "IX", "X", "XL", "L", "XC", "C", "CD", "D", "CM", "M");
    val charValue: IntArray = intArrayOf(1, 4, 5, 9, 10, 40, 50, 90, 100, 400, 500, 900, 1000);

    fun intToRoman(num: Int): String {
        var toCount:Int = num;
        var res:String = "";

        for (i in charValue.indices.reversed()) {
            while(toCount >= charValue[i]) {
                res += romanNumerals[i];
                toCount -= charValue[i];
            }
        }

        return res;
    }
}