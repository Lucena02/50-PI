
int crescente (int a[], int i, int j) {
    int c = 0;
    int r = 0;
    while (c < i) c++;
    while (i != j && a[i] <= a[i+1]) i++;
    if (i == j) r = 1;
    return r;
}
