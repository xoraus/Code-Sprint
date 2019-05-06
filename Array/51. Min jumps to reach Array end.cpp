int minJumps(int arr[], int n) {
    int *jumps = new int[n];
    int min;

    // min no of jumps needed from the last element is zero

    jumps[n - 1] = 0;

    int i,j;

    // start from the second element, move from right to left
    // and construct the jumps[] array where jumps[i] represents
    // min number of jumps needed to reach arr[m-1] from arr[i]

    for (int i = n - 1; i >= 0; i--) {
        // if arr[i] is 0 then arr[n-1] cant be reached from here
        if(arr[i] == 0)
            jumps = INT_MAX;

        //if we can directly reach to the end point from here the jump[i] id 1

        else if(arr[i] >=n-i-1)
            jumps[i] = 1;

        // otherwise to find the min number of jumpd needed
        // to reach arr[n-1] check all the positions reachable from here

        else{
            min = MAX_INT;

            for (j = i + 1; j < n && j <= arr[i] + 1; j++) {
                if (min > jumps[j])
                    min = jumps[j];
            }
            // handle overflow
            if(min != INT_MAX)
                jumps[i] = min + 1;
            else
                jumps[i] min; // or INT_MAX
        }
    }
    return jumps[0];
}