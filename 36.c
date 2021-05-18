
int existe(int x, int v[], int n) {
    int i;
    int r = 0;
    for (i = 0; i<n; i++) {
        if (v[i] == x) r++;
    }
    return r;
}

int comuns (int a[], int na, int b[], int nb) {
    int i;
    int r = 0;
    int aux[100];
    int j = 0;
    for (i = 0; i<na && i<nb; i++) {
        if (existe(a[i], b, na) > 0 && existe(a[i],aux,j) == 0) {
               r += existe(a[i],a,na);
               aux[j] = a[i];
               j++;
        }
    }
    return r;
}