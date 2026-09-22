int* plusOne(int* digits, int digitsSize, int* returnSize) {
    
    for(int i = digitsSize -1; i >= 0; i --){
        if((digits[i] + 1) <= 9){
            digits[i]++;
            *returnSize = digitsSize;
            return digits;
        }else{
            digits[i] = 0;
        }
    }

    *returnSize = digitsSize + 1;
    int *res = calloc(*returnSize, sizeof(int));
    if (res == NULL) return NULL;
    res[0] = 1;
    return res;
    
}
