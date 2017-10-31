
//factorial using recursion

int fact(int number)
{
    if(number == 0)
        return 1;
    return number*fact(number-1);
}

// N queens problem using recursion

is_attacked( x, y, board[][], N)
    //checking for row and column
    if any cell in xth row is 1
        return true
    if any cell in yth column is 1
        return true

    //checking for diagonals
    if any cell (p, q) having p+q = x+y is 1
        return true
    if any cell (p, q) having p-q = x-y is 1
        return true
    return false


N-Queens( board[][], N )
    if N is 0                     //All queens have been placed
        return true
    for i = 1 to N {
        for j = 1 to N {
            if is_attacked(i, j, board, N) is true
                skip it and move to next cell
            board[i][j] = 1            //Place current queen at cell (i,j)
            if N-Queens( board, N-1) is true    // Solve subproblem
                return true                   // if solution is found return true
            board[i][j] = 0            /* if solution is not found undo whatever changes
                                       were made i.e., remove  current queen from (i,j)*/
        }
    }
    return false
