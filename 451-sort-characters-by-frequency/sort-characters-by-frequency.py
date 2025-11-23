class Solution:
    def frequencySort(self, s: str) -> str:
        # Count frequencies manually
        freq = {}
        for ch in s:
            freq[ch] = freq.get(ch, 0) + 1

        # Sort by frequency in descending order
        sorted_chars = sorted(freq.items(), key=lambda item: item[1], reverse=True)

        # Build result
        result = ""
        for ch, count in sorted_chars:
            result += ch * count

        return result
