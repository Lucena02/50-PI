

int existe(int x, int v[], int n) {
    int i;
    int r = 0;
    for (i = 0; i<n; i++) {
        if (v[i] == x) r = 1;
    }
    return r;
}

int elimRep (int v[], int n) {
    int i,j=0;
    for (i=0;i<n;i++) {
        if (existe(v[i], v, i) == 0){
            v[j]=v[i];
            j++;
        }
    }
    return j;
}