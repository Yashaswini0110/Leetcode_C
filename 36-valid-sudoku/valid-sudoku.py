class Solution(object):
    def isValidSudoku(self, board):
        rows = collections.defaultdict(set)
        cols = collections.defaultdict(set)
        squares = collections.defaultdict(set)  # key = (r//3, c//3)

        for r in range(9):
            for c in range(9):
                if board[r][c] == ".":
                    continue

                val = board[r][c]

                # If already exists in row, column, or 3x3 block → invalid.
                if (val in rows[r] or
                    val in cols[c] or
                    val in squares[(r//3, c//3)]):
                    return False

                # Insert into row, column, and respective 3×3 box.
                rows[r].add(val)
                cols[c].add(val)
                squares[(r//3, c//3)].add(val)

        return True
