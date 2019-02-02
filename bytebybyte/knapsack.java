
// knapsack problem
// weights = {10, 20, 30}
// values = {60, 100, 120}
// max weight = 50 (value = 220)
// a recurrsive solution

public int knapsack(int W, int[] weights, int[] vals) {
    knapsack(W, weights, vals, 0)
}

private int knapsack(int W, int[] weights, int vals, int i) {
    if(i==weights.length())
        return 0;
    if(W - weights[i] < 0)
        return knapsack(W, weights, vals, i+1);

    return Math.max(W, weights, vals, i+1)+val[i],
                     knapsack(W, weights, vals,i+1 ));
}

// Dynamic problem
// we ought to have optimal substructure and overlapping sub-problems

public int knapsack(int W, int[] weights, int [] vals ) {
    int [][] cache = new int[weights.length + 1][W+1];

    for(int i=1; i<= weights.length; i++) {
        for(int j=1; j<= W; j++) {
            if(weights[i-1] > j) cache[i][j] = cache[i-1][j];
            else cache[i][j] = Math.max(cache[i-1][j],
            cache[i-1][j-weights[i-1]] + vals[i-1]);
        }
    }
    return cache[weights.length][M];
}
