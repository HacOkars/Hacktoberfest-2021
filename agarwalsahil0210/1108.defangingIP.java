/* Given a valid (IPv4) IP address, return a defanged version of that IP address.
A defanged IP address replaces every period "." with "[.]". */

class Solution {
    public String defangIPaddr(String address) {
        address=address.replace(".","[.]");
        return address;
        
    }
}
