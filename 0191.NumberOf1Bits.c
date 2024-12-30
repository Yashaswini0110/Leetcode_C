int hammingWeight(int n) {
    int binNum[32];

    for(int i=0; n>0; i++){
        binNum[i] = n%2;
        n /= 2;
    }

    int count = 0;
    for(int i=0; i<(sizeof(binNum)/sizeof(binNum[i])); i++){
        if(binNum[i]==1)
            count++;
    }

    return count;
}