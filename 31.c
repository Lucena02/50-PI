

int maisFreq (int v[], int N) {
    int r;
    int t = 0;
    int c = 1, i;
    for(i = 0; i < N; i++) {
        while(v[i] == v[i+1] && i<N) {
            c++;
            i++;
        }
        if (c>t) {r = v[i]; t = c; c = 1;}
        else c = 1;
    }
    return r;
}