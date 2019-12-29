import leetCodeSolutionsKotlin.intToRoman.Solution
import org.junit.Assert.assertEquals
import org.junit.Test

class IntToRomanTest {

    private val solution = Solution()

    @Test
    fun intToRoman() {
        assertEquals("III", solution.intToRoman(3))
        assertEquals("IV", solution.intToRoman(4))
        assertEquals("IX", solution.intToRoman(9))
        assertEquals("LVIII", solution.intToRoman(58))
        assertEquals("MCMXCIV", solution.intToRoman(1994))
        assertEquals("I", solution.intToRoman(1))
        assertEquals("", solution.intToRoman(0))
    }
}