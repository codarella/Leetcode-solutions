class Solution:
    def romanToInt(self, s: str) -> int:
        integer_dictionary = {
            'I': 1,
            'V': 5,
            'X': 10,
            'L': 50,
            'C': 100,
            'D': 500,
            'M': 1000
        }
        
        final_integer = 0
        counter = 0
        changer = ["V", "L", "D", "X", "C", "M"]
        
        while counter < len(s) - 1:
            if integer_dictionary[s[counter]] < integer_dictionary[s[counter + 1]]:
                final_integer += integer_dictionary[s[counter + 1]] - integer_dictionary[s[counter]]
                counter += 2
            else:
                final_integer += integer_dictionary[s[counter]]
                counter += 1
        
        if counter == len(s) - 1:
            final_integer += integer_dictionary[s[counter]]
        
        return final_integer

# Example usage:
# sol = Solution()
# print(sol.romanToInt("MCMXCIV"))  # Output: 1994
