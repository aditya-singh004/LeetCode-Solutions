class Solution:
    def isAnagram(self, s: str, t: str) -> bool:
        if len(s)!=len(t):   return False

        if sorted(t)==sorted(s):
            return True
        else:   return False
        # freq = [0] * 26

        # for i in range(len(t)):
        #     freq[ord(s[i]) - ord("a")] -= 1
        #     freq[ord(t[i]) - ord("a")] += 1

        # for i in freq:
        #     if i != 0:
        #         return False

        # return True
