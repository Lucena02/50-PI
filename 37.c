

int minInd (int v[], int n) {
    int i, r, a = 100000;
    for(i=0; i<n; i++) {
        if (v[i] < a) {a = v[i]; r = i;}
    }
    return r;
}