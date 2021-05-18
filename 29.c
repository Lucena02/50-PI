
int retiraNeg (int v[], int N) {
    int r = 0;
    int i;
    int j = 0;
    int s[1000];
    for (i = 0; i<N; i++) {
        if (v[i] < 0); 
        else {
            s[j] = v[i];
            r++;
            j++;
        }
    }
    for (i = 0; i < r; i++) v[i] = s[i];
    return r;
}


