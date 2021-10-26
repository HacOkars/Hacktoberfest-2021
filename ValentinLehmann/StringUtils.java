package de.valentinlehmann.testing;

public class StringUtils {
    /**
     * Returns true if the string contains the part, ignores upper/lower case
     * @param string string that contains the part
     * @param contain part to check whether it is in the string
     * @return true if the string contains the part
     */
    public static boolean containsIgnoreCase(String string, String contain) {
        return string.toLowerCase().contains(contain.toLowerCase());
    }
}
