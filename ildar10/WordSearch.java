public class WordSearch {
    public boolean exist(char[][] board, String word) {
        for (int i = 0; i < board.length; i++) {
            for (int j = 0; j < board[0].length; j++) {

                if (check(board, word, i,j, 0)) {
                    return true;
                }
            }
        }
        return false;
    }

    private boolean check(char[][] board, String word, int i, int j, int stringIndex) {
        if (stringIndex == word.length()) return true;
        if (i < 0 || i >= board.length || j < 0 || j >= board[0].length) return false;
        if (board[i][j] != word.charAt(stringIndex)) return false;
        char original = board[i][j];
        board[i][j] = '_';
        boolean result = false;
        result = check(board, word, i + 1, j, stringIndex + 1) || check(board, word, i - 1, j, stringIndex + 1) || check(board, word, i, j + 1, stringIndex + 1) || check(board, word, i, j-1, stringIndex + 1);

        board[i][j] = original;

        return result;
    }
}
