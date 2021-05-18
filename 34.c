

int elimRepOrd (int v[], int n) {
    int i, j=0;
    for (i = 0; i<n; i++,j++) {
        while (v[i] == v[i+1]) i++;
        v[j] = v[i];
    }
    return j;
}