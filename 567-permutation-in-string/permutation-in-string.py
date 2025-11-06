class Solution:
    def checkInclusion(self, s1: str, s2: str) -> bool:
        if len(s1) > len(s2):
            return False

        a = ord('a')
        s1count, s2count = [0] * 26, [0] * 26
        for i in range(len(s1)):
            s1count[ord(s1[i]) - a] += 1
            s2count[ord(s2[i]) - a] += 1

        # count initial matches
        matches = 0
        for i in range(26):
            matches += 1 if s1count[i] == s2count[i] else 0

        if matches == 26:
            return True

        l = 0
        for r in range(len(s1), len(s2)):
            # add right char
            index = ord(s2[r]) - a
            s2count[index] += 1
            if s2count[index] == s1count[index]:
                matches += 1
            elif s2count[index] - 1 == s1count[index]:
                matches -= 1

            # remove left char
            index = ord(s2[l]) - a
            s2count[index] -= 1
            if s2count[index] == s1count[index]:
                matches += 1
            elif s2count[index] + 1 == s1count[index]:
                matches -= 1

            l += 1

            if matches == 26:
                return True

        return False

