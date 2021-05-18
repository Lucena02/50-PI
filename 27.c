

void merge (int r[], int a[], int b[], int na, int nb) {
    int ia;
    int i;
    int jb;
    for (i = 0, ia = 0, jb = 0; ia < na && jb < nb;i++) {
        if (a[ia] >= b[jb]) {
            r[i] = b[jb]; 
            jb++;
        }
        else {
            r[i] = a[ia];
            ia++;
        }
    }
    if (ia == na) {
      while (jb<nb) {
        r[i] = b[jb];
        jb++;
        i++;
      }
    }
    if (jb == nb) {
      while (ia < na) {
        r[i] = a[ia];
        ia++;
        i++;
      }
    }
}
