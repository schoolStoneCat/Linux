int sumap(int num) {
    int i, sum = 0;
    for(i = 1; i <= num; i++) {
        sum += i;
        i += 1;
    } 
    return sum;
}